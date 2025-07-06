// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__STRUCT_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensebeetle_interfaces__msg__Dr16DbusData __attribute__((deprecated))
#else
# define DEPRECATED__sensebeetle_interfaces__msg__Dr16DbusData __declspec(deprecated)
#endif

namespace sensebeetle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dr16DbusData_
{
  using Type = Dr16DbusData_<ContainerAllocator>;

  explicit Dr16DbusData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch_l_x = 0.0;
      this->ch_l_y = 0.0;
      this->ch_r_x = 0.0;
      this->ch_r_y = 0.0;
      this->s_l = 0;
      this->s_r = 0;
      this->wheel = 0.0;
      this->m_x = 0.0;
      this->m_y = 0.0;
      this->m_z = 0.0;
      this->p_l = false;
      this->p_r = false;
      this->key_w = false;
      this->key_s = false;
      this->key_a = false;
      this->key_d = false;
      this->key_shift = false;
      this->key_ctrl = false;
      this->key_q = false;
      this->key_e = false;
      this->key_r = false;
      this->key_f = false;
      this->key_g = false;
      this->key_z = false;
      this->key_x = false;
      this->key_c = false;
      this->key_v = false;
      this->key_b = false;
    }
  }

  explicit Dr16DbusData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch_l_x = 0.0;
      this->ch_l_y = 0.0;
      this->ch_r_x = 0.0;
      this->ch_r_y = 0.0;
      this->s_l = 0;
      this->s_r = 0;
      this->wheel = 0.0;
      this->m_x = 0.0;
      this->m_y = 0.0;
      this->m_z = 0.0;
      this->p_l = false;
      this->p_r = false;
      this->key_w = false;
      this->key_s = false;
      this->key_a = false;
      this->key_d = false;
      this->key_shift = false;
      this->key_ctrl = false;
      this->key_q = false;
      this->key_e = false;
      this->key_r = false;
      this->key_f = false;
      this->key_g = false;
      this->key_z = false;
      this->key_x = false;
      this->key_c = false;
      this->key_v = false;
      this->key_b = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ch_l_x_type =
    double;
  _ch_l_x_type ch_l_x;
  using _ch_l_y_type =
    double;
  _ch_l_y_type ch_l_y;
  using _ch_r_x_type =
    double;
  _ch_r_x_type ch_r_x;
  using _ch_r_y_type =
    double;
  _ch_r_y_type ch_r_y;
  using _s_l_type =
    uint8_t;
  _s_l_type s_l;
  using _s_r_type =
    uint8_t;
  _s_r_type s_r;
  using _wheel_type =
    double;
  _wheel_type wheel;
  using _m_x_type =
    double;
  _m_x_type m_x;
  using _m_y_type =
    double;
  _m_y_type m_y;
  using _m_z_type =
    double;
  _m_z_type m_z;
  using _p_l_type =
    bool;
  _p_l_type p_l;
  using _p_r_type =
    bool;
  _p_r_type p_r;
  using _key_w_type =
    bool;
  _key_w_type key_w;
  using _key_s_type =
    bool;
  _key_s_type key_s;
  using _key_a_type =
    bool;
  _key_a_type key_a;
  using _key_d_type =
    bool;
  _key_d_type key_d;
  using _key_shift_type =
    bool;
  _key_shift_type key_shift;
  using _key_ctrl_type =
    bool;
  _key_ctrl_type key_ctrl;
  using _key_q_type =
    bool;
  _key_q_type key_q;
  using _key_e_type =
    bool;
  _key_e_type key_e;
  using _key_r_type =
    bool;
  _key_r_type key_r;
  using _key_f_type =
    bool;
  _key_f_type key_f;
  using _key_g_type =
    bool;
  _key_g_type key_g;
  using _key_z_type =
    bool;
  _key_z_type key_z;
  using _key_x_type =
    bool;
  _key_x_type key_x;
  using _key_c_type =
    bool;
  _key_c_type key_c;
  using _key_v_type =
    bool;
  _key_v_type key_v;
  using _key_b_type =
    bool;
  _key_b_type key_b;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ch_l_x(
    const double & _arg)
  {
    this->ch_l_x = _arg;
    return *this;
  }
  Type & set__ch_l_y(
    const double & _arg)
  {
    this->ch_l_y = _arg;
    return *this;
  }
  Type & set__ch_r_x(
    const double & _arg)
  {
    this->ch_r_x = _arg;
    return *this;
  }
  Type & set__ch_r_y(
    const double & _arg)
  {
    this->ch_r_y = _arg;
    return *this;
  }
  Type & set__s_l(
    const uint8_t & _arg)
  {
    this->s_l = _arg;
    return *this;
  }
  Type & set__s_r(
    const uint8_t & _arg)
  {
    this->s_r = _arg;
    return *this;
  }
  Type & set__wheel(
    const double & _arg)
  {
    this->wheel = _arg;
    return *this;
  }
  Type & set__m_x(
    const double & _arg)
  {
    this->m_x = _arg;
    return *this;
  }
  Type & set__m_y(
    const double & _arg)
  {
    this->m_y = _arg;
    return *this;
  }
  Type & set__m_z(
    const double & _arg)
  {
    this->m_z = _arg;
    return *this;
  }
  Type & set__p_l(
    const bool & _arg)
  {
    this->p_l = _arg;
    return *this;
  }
  Type & set__p_r(
    const bool & _arg)
  {
    this->p_r = _arg;
    return *this;
  }
  Type & set__key_w(
    const bool & _arg)
  {
    this->key_w = _arg;
    return *this;
  }
  Type & set__key_s(
    const bool & _arg)
  {
    this->key_s = _arg;
    return *this;
  }
  Type & set__key_a(
    const bool & _arg)
  {
    this->key_a = _arg;
    return *this;
  }
  Type & set__key_d(
    const bool & _arg)
  {
    this->key_d = _arg;
    return *this;
  }
  Type & set__key_shift(
    const bool & _arg)
  {
    this->key_shift = _arg;
    return *this;
  }
  Type & set__key_ctrl(
    const bool & _arg)
  {
    this->key_ctrl = _arg;
    return *this;
  }
  Type & set__key_q(
    const bool & _arg)
  {
    this->key_q = _arg;
    return *this;
  }
  Type & set__key_e(
    const bool & _arg)
  {
    this->key_e = _arg;
    return *this;
  }
  Type & set__key_r(
    const bool & _arg)
  {
    this->key_r = _arg;
    return *this;
  }
  Type & set__key_f(
    const bool & _arg)
  {
    this->key_f = _arg;
    return *this;
  }
  Type & set__key_g(
    const bool & _arg)
  {
    this->key_g = _arg;
    return *this;
  }
  Type & set__key_z(
    const bool & _arg)
  {
    this->key_z = _arg;
    return *this;
  }
  Type & set__key_x(
    const bool & _arg)
  {
    this->key_x = _arg;
    return *this;
  }
  Type & set__key_c(
    const bool & _arg)
  {
    this->key_c = _arg;
    return *this;
  }
  Type & set__key_v(
    const bool & _arg)
  {
    this->key_v = _arg;
    return *this;
  }
  Type & set__key_b(
    const bool & _arg)
  {
    this->key_b = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UP =
    1u;
  static constexpr uint8_t DOWN =
    2u;
  static constexpr uint8_t MID =
    3u;

  // pointer types
  using RawPtr =
    sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensebeetle_interfaces__msg__Dr16DbusData
    std::shared_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensebeetle_interfaces__msg__Dr16DbusData
    std::shared_ptr<sensebeetle_interfaces::msg::Dr16DbusData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dr16DbusData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ch_l_x != other.ch_l_x) {
      return false;
    }
    if (this->ch_l_y != other.ch_l_y) {
      return false;
    }
    if (this->ch_r_x != other.ch_r_x) {
      return false;
    }
    if (this->ch_r_y != other.ch_r_y) {
      return false;
    }
    if (this->s_l != other.s_l) {
      return false;
    }
    if (this->s_r != other.s_r) {
      return false;
    }
    if (this->wheel != other.wheel) {
      return false;
    }
    if (this->m_x != other.m_x) {
      return false;
    }
    if (this->m_y != other.m_y) {
      return false;
    }
    if (this->m_z != other.m_z) {
      return false;
    }
    if (this->p_l != other.p_l) {
      return false;
    }
    if (this->p_r != other.p_r) {
      return false;
    }
    if (this->key_w != other.key_w) {
      return false;
    }
    if (this->key_s != other.key_s) {
      return false;
    }
    if (this->key_a != other.key_a) {
      return false;
    }
    if (this->key_d != other.key_d) {
      return false;
    }
    if (this->key_shift != other.key_shift) {
      return false;
    }
    if (this->key_ctrl != other.key_ctrl) {
      return false;
    }
    if (this->key_q != other.key_q) {
      return false;
    }
    if (this->key_e != other.key_e) {
      return false;
    }
    if (this->key_r != other.key_r) {
      return false;
    }
    if (this->key_f != other.key_f) {
      return false;
    }
    if (this->key_g != other.key_g) {
      return false;
    }
    if (this->key_z != other.key_z) {
      return false;
    }
    if (this->key_x != other.key_x) {
      return false;
    }
    if (this->key_c != other.key_c) {
      return false;
    }
    if (this->key_v != other.key_v) {
      return false;
    }
    if (this->key_b != other.key_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dr16DbusData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dr16DbusData_

// alias to use template instance with default allocator
using Dr16DbusData =
  sensebeetle_interfaces::msg::Dr16DbusData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dr16DbusData_<ContainerAllocator>::UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dr16DbusData_<ContainerAllocator>::DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dr16DbusData_<ContainerAllocator>::MID;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sensebeetle_interfaces

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__STRUCT_HPP_
