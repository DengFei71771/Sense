source install/setup.bash
export ROS_DOMAIN_ID=$(expr $1 + 1)
ros2 launch nav_bringup bringup_real.launch.py world:=YOUR_WORLD_NAME mode:=mapping lio:=pointlio lio_rviz:=True nav_rviz:=True robot_id:=$0
