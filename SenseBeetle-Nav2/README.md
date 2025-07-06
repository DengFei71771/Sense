## 快速开始
### 环境
Ubuntu 22.04 ROS2 Humble
### 部署
安装 Mid 360 驱动。
```bash
git clone https://github.com/Livox-SDK/Livox-SDK2.git
cd ./Livox-SDK2/
mkdir build
cd build
cmake .. && make -j
sudo make install
```
安装依赖。
```bash
sudo apt update
sudo apt install ros-humble-desktop-full python3-rosdep libgflags-dev libgoogle-glog-dev ros-humble-pcl* ros-humble-serial-driver ros-humble-asio-cmake-module -y
sudo rosdep init
rosdep update
rosdep install -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y
```
编译。
```bash
./toBuild.sh
```
建图。
```bash
./mapping.sh
```
导航
```bash
./nav.sh
```