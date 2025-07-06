import os
import yaml

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription,
    DeclareLaunchArgument,
    GroupAction,
    TimerAction,
)
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, Command
from launch.conditions import (
    LaunchConfigurationEquals,
    LaunchConfigurationNotEquals,
    IfCondition,
)


def generate_launch_description():
    # Get the launch directory
    nav_bringup_dir = get_package_share_directory("nav_bringup")
    # navigation2_launch_dir = os.path.join(
    #     get_package_share_directory("robot_navigation"), "launch"
    # )

    # Create the launch configuration variables
    robot_id = LaunchConfiguration("robot_id")
    lidar_type = LaunchConfiguration("lidar_type")
    world = LaunchConfiguration("world")
    use_sim_time = LaunchConfiguration("use_sim_time")
    use_nav_rviz = LaunchConfiguration("nav_rviz")

    ################################ robot_description parameters start ###############################
    launch_params = yaml.safe_load(
        open(
            os.path.join(
                get_package_share_directory("nav_bringup"),
                "config",
                "reality",
                "measurement_params_real.yaml",
            )
        )
    )
    robot_description = Command(
        [
            "xacro ",
            os.path.join(
                get_package_share_directory("nav_bringup"),
                "urdf",
                "sentry_robot_real.xacro",
            ),
            " xyz:=",
            launch_params["base_link2livox_frame"]["xyz"],
            " rpy:=",
            launch_params["base_link2livox_frame"]["rpy"],
        ]
    )
    ################################# robot_description parameters end ################################

    ########################## linefit_ground_segementation parameters start ##########################
    segmentation_params = os.path.join(
        nav_bringup_dir, "config", "reality", "segmentation_real.yaml"
    )
    ########################## linefit_ground_segementation parameters end ############################

    ################################## slam_toolbox parameters start ##################################
    slam_toolbox_map_dir = PathJoinSubstitution([nav_bringup_dir, "map", world])
    slam_toolbox_localization_file_dir = os.path.join(
        nav_bringup_dir, "config", "reality", "mapper_params_localization_real.yaml"
    )
    slam_toolbox_mapping_file_dir = os.path.join(
        nav_bringup_dir, "config", "reality", "mapper_params_online_async_real.yaml"
    )
    ################################### slam_toolbox parameters end ###################################

    ################################### navigation2 parameters start ##################################
    nav2_map_dir = PathJoinSubstitution([nav_bringup_dir, "map", world]), ".yaml"
    nav2_params_file_dir = os.path.join(
        nav_bringup_dir, "config", "reality", "nav2_params_real.yaml"
    )
    ################################### navigation2 parameters end ####################################

    declare_robot_id_cmd = DeclareLaunchArgument(
        "robot_id", default_value="0", description="Robot ID"
    )

    declare_use_sim_time_cmd = DeclareLaunchArgument(
        "use_sim_time",
        default_value="False",
        description="Use reality (Gazebo) clock if true",
    )

    declare_use_lio_rviz_cmd = DeclareLaunchArgument(
        "lio_rviz",
        default_value="False",
        description="Visualize FAST_LIO or Point_LIO cloud_map if true",
    )

    declare_nav_rviz_cmd = DeclareLaunchArgument(
        "nav_rviz", default_value="True", description="Visualize navigation2 if true"
    )

    declare_world_cmd = DeclareLaunchArgument(
        "world",
        default_value="328",
        description="Select world (map file, pcd file, world file share the same name prefix as the this parameter)",
    )

    declare_mode_cmd = DeclareLaunchArgument(
        "mode", default_value="", description="Choose mode: nav, mapping"
    )

    declare_LIO_cmd = DeclareLaunchArgument(
        "lio",
        default_value="pointlio",
        description="Choose lio alogrithm: fastlio or pointlio",
    )

    declare_localization_cmd = DeclareLaunchArgument(
        "localization",
        default_value="",
        description="Choose localization method: slam_toolbox, amcl, icp",
    )

    declare_lidar_type = DeclareLaunchArgument(
        "lidar_type", default_value="mid360", description=""
    )

    start_robot_state_publisher_cmd = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        parameters=[
            {"use_sim_time": use_sim_time, "robot_description": robot_description}
        ],
        output="screen",
    )

    start_livox_ros_driver2_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("livox_ros_driver2"),
                "launch",
                "msg_MID360_launch.py",
            )
        )
    )

    # start_lidar_transform = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(
    #             get_package_share_directory("lidar_transform"),
    #             "launch",
    #             "lidar_transform.launch.py",
    #         )
    #     )
    # )

    start_robot_communication = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("robot_communication"),
                "launch",
                "robot_communication.launch.py",
            )
        ),
        launch_arguments={
            "robot_id": robot_id,
        }.items(),
    )

    # bringup_imu_complementary_filter_node = Node(
    #     package="imu_complementary_filter",
    #     executable="complementary_filter_node",
    #     name="complementary_filter_gain_node",
    #     output="screen",
    #     parameters=[
    #         {"do_bias_estimation": True},
    #         {"do_adaptive_gain": True},
    #         {"use_mag": False},
    #         {"gain_acc": 0.01},
    #         {"gain_mag": 0.01},
    #     ],
    #     remappings=[
    #         ("/imu/data_raw", "/livox/imu"),
    #     ],
    # )

    # bringup_linefit_ground_segmentation_node = Node(
    #     package="linefit_ground_segmentation_ros",
    #     executable="ground_segmentation_node",
    #     output="screen",
    #     parameters=[segmentation_params],
    # )

    # bringup_pointcloud_to_laserscan_node = Node(
    #     package="pointcloud_to_laserscan",
    #     executable="pointcloud_to_laserscan_node",
    #     remappings=[("cloud_in", ["/segmentation/obstacle"]), ("scan", ["/scan"])],
    #     parameters=[
    #         {
    #             "target_frame": "livox_frame",
    #             "transform_tolerance": 0.01,
    #             "min_height": -0.05,
    #             "max_height": 0.1,
    #             "angle_min": -3.14159,  # -M_PI/2
    #             "angle_max": 3.14159,  # M_PI/2
    #             "angle_increment": 0.0043,  # M_PI/360.0
    #             "scan_time": 0.3333,
    #             "range_min": 0.45,
    #             "range_max": 10.0,
    #             "use_inf": True,
    #             "inf_epsilon": 1.0,
    #         }
    #     ],
    #     name="pointcloud_to_laserscan",
    # )

    # start_Point_LIO = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(
    #             get_package_share_directory("point_lio"),
    #             "launch",
    #             "point_lio.launch.py",
    #         )
    #     ),
    #     launch_arguments={"lidar_type": lidar_type}.items(),
    # )

    start_Fast_LIO = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("fast_lio"),
                "launch",
                "mapping.launch.py",
            )
        ),
    )

    # start_Fast_LIVO = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(
    #             get_package_share_directory("fast_livo"),
    #             "launch",
    #             "mapping_aviz_mid360.launch.py",
    #         )
    #     )
    # )

    # start_localization_group = GroupAction(
    #     condition=LaunchConfigurationEquals("mode", "nav"),
    #     actions=[
    #         Node(
    #             condition=LaunchConfigurationEquals("localization", "slam_toolbox"),
    #             package="slam_toolbox",
    #             executable="localization_slam_toolbox_node",
    #             name="slam_toolbox",
    #             parameters=[
    #                 slam_toolbox_localization_file_dir,
    #                 {
    #                     "use_sim_time": use_sim_time,
    #                     "map_file_name": slam_toolbox_map_dir,
    #                     "map_start_pose": [0.0, 0.0, 0.0],
    #                 },
    #             ],
    #         ),
    #         IncludeLaunchDescription(
    #             PythonLaunchDescriptionSource(
    #                 os.path.join(navigation2_launch_dir, "localization_amcl_launch.py")
    #             ),
    #             condition=LaunchConfigurationEquals("localization", "amcl"),
    #             launch_arguments={
    #                 "use_sim_time": use_sim_time,
    #                 "params_file": nav2_params_file_dir,
    #                 "map": nav2_map_dir,
    #             }.items(),
    #         ),
    #         IncludeLaunchDescription(
    #             PythonLaunchDescriptionSource(
    #                 os.path.join(navigation2_launch_dir, "map_server_launch.py")
    #             ),
    #             condition=LaunchConfigurationNotEquals("localization", "slam_toolbox"),
    #             launch_arguments={
    #                 "use_sim_time": use_sim_time,
    #                 "map": nav2_map_dir,
    #                 "params_file": nav2_params_file_dir,
    #                 "container_name": "nav2_container",
    #             }.items(),
    #         ),
    #     ],
    # )

    # start_mapping = Node(
    #     condition=LaunchConfigurationEquals("mode", "mapping"),
    #     package="slam_toolbox",
    #     executable="async_slam_toolbox_node",
    #     name="slam_toolbox",
    #     parameters=[
    #         slam_toolbox_mapping_file_dir,
    #         {
    #             "use_sim_time": use_sim_time,
    #         },
    #     ],
    # )

    # start_navigation2 = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(navigation2_launch_dir, "bringup_robot_navigation.py")
    #     ),
    #     launch_arguments={
    #         "use_sim_time": use_sim_time,
    #         "map": nav2_map_dir,
    #         "params_file": nav2_params_file_dir,
    #         "nav_rviz": use_nav_rviz,
    #     }.items(),
    # )

    # start_explorer = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(
    #             get_package_share_directory("explore_lite"),
    #             "launch",
    #             "explore.launch.py",
    #         )
    #     ),
    # )

    # start_sensemap = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         os.path.join(
    #             get_package_share_directory("sensemap"),
    #             "launch",
    #             "sensemap.launch.py",
    #         )
    #     )
    # )

    ld = LaunchDescription()

    # Declare the launch options
    ld.add_action(declare_robot_id_cmd)
    ld.add_action(declare_lidar_type)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_use_lio_rviz_cmd)
    ld.add_action(declare_nav_rviz_cmd)
    ld.add_action(declare_world_cmd)
    ld.add_action(declare_mode_cmd)
    ld.add_action(declare_localization_cmd)
    ld.add_action(declare_LIO_cmd)

    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(start_livox_ros_driver2_node)
    # ld.add_action(start_lidar_transform)
    # ld.add_action(start_robot_communication)
    # ld.add_action(bringup_imu_complementary_filter_node)
    # ld.add_action(bringup_linefit_ground_segmentation_node)
    # ld.add_action(bringup_pointcloud_to_laserscan_node)
    # ld.add_action(start_Point_LIO)
    ld.add_action(start_Fast_LIO)
    # ld.add_action(start_Fast_LIVO)
    # ld.add_action(start_localization_group)
    # ld.add_action(start_mapping)
    # ld.add_action(start_navigation2)
    # ld.add_action(start_sensemap)
    # ld.add_action(start_explorer)

    return ld
