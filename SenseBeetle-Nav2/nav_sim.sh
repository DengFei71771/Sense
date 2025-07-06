source install/setup.bash
export ROS_DOMAIN_ID=$(expr $1 + 1)
ros2 launch nav_bringup bringup_real.launch.py world:=room1 mode:=nav lio:=pointlio localization:=slam_toolbox lio_rviz:=False nav_rviz:=True use_sim_time:=True robot_id:=$1