// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__STRUCT_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__STRUCT_HPP_

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
# define DEPRECATED__sensebeetle_interfaces__msg__TwistStampedToWheel __attribute__((deprecated))
#else
# define DEPRECATED__sensebeetle_interfaces__msg__TwistStampedToWheel __declspec(deprecated)
#endif

namespace sensebeetle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistStampedToWheel_
{
  using Type = TwistStampedToWheel_<ContainerAllocator>;

  explicit TwistStampedToWheel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_1 = "";
      this->wheel_2 = "";
      this->wheel_3 = "";
      this->wheel_4 = "";
    }
  }

  explicit TwistStampedToWheel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    wheel_1(_alloc),
    wheel_2(_alloc),
    wheel_3(_alloc),
    wheel_4(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_1 = "";
      this->wheel_2 = "";
      this->wheel_3 = "";
      this->wheel_4 = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _wheel_1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wheel_1_type wheel_1;
  using _wheel_2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wheel_2_type wheel_2;
  using _wheel_3_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wheel_3_type wheel_3;
  using _wheel_4_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wheel_4_type wheel_4;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__wheel_1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wheel_1 = _arg;
    return *this;
  }
  Type & set__wheel_2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wheel_2 = _arg;
    return *this;
  }
  Type & set__wheel_3(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wheel_3 = _arg;
    return *this;
  }
  Type & set__wheel_4(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wheel_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensebeetle_interfaces__msg__TwistStampedToWheel
    std::shared_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensebeetle_interfaces__msg__TwistStampedToWheel
    std::shared_ptr<sensebeetle_interfaces::msg::TwistStampedToWheel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistStampedToWheel_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->wheel_1 != other.wheel_1) {
      return false;
    }
    if (this->wheel_2 != other.wheel_2) {
      return false;
    }
    if (this->wheel_3 != other.wheel_3) {
      return false;
    }
    if (this->wheel_4 != other.wheel_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistStampedToWheel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwistStampedToWheel_

// alias to use template instance with default allocator
using TwistStampedToWheel =
  sensebeetle_interfaces::msg::TwistStampedToWheel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensebeetle_interfaces

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__STRUCT_HPP_
