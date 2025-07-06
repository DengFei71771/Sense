source install/setup.bash
export ROS_DOMAIN_ID=$(expr $1 + 1)
ros2 launch nav_bringup bringup_real.launch.py world:=YOUR_WORLD_NAME mode:=mapping lio:=pointlio lio_rviz:=False nav_rviz:=True use_sim_time:=True robot_id:=$1