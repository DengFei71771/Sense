source install/setup.bash
ros2 launch nav_bringup bringup_real.launch.py world:=room1 mode:=nav lio:=pointlio localization:=slam_toolbox lio_rviz:=False nav_rviz:=True