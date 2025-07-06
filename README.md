# Sense
嵌赛code

sensebeetle2控制部分代码
cd ~/sensebeetle2
bash run.sh 0
再开一个终端
export ROS_DOMAIN_ID=1
ros2 run teleop_twist_keyboard teleop_twist_keyboard

SenseBeetle-Nav2点云获取部分代码
cd ~/SenseBeetle-Nav2
LD_LIBRARY_PATH=/lib/aarch64-linux-gnu:$LD_LIBRARY_PATH bash mapping.sh 0
再开一个终端
export ROS_DOMAIN_ID=1
ros2 launch foxglove_bridge foxglove_bridge_launch.xml 
