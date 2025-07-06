// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__BUILDER_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensebeetle_interfaces
{

namespace msg
{

namespace builder
{

class Init_TwistStampedToWheel_wheel_4
{
public:
  explicit Init_TwistStampedToWheel_wheel_4(::sensebeetle_interfaces::msg::TwistStampedToWheel & msg)
  : msg_(msg)
  {}
  ::sensebeetle_interfaces::msg::TwistStampedToWheel wheel_4(::sensebeetle_interfaces::msg::TwistStampedToWheel::_wheel_4_type arg)
  {
    msg_.wheel_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::TwistStampedToWheel msg_;
};

class Init_TwistStampedToWheel_wheel_3
{
public:
  explicit Init_TwistStampedToWheel_wheel_3(::sensebeetle_interfaces::msg::TwistStampedToWheel & msg)
  : msg_(msg)
  {}
  Init_TwistStampedToWheel_wheel_4 wheel_3(::sensebeetle_interfaces::msg::TwistStampedToWheel::_wheel_3_type arg)
  {
    msg_.wheel_3 = std::move(arg);
    return Init_TwistStampedToWheel_wheel_4(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::TwistStampedToWheel msg_;
};

class Init_TwistStampedToWheel_wheel_2
{
public:
  explicit Init_TwistStampedToWheel_wheel_2(::sensebeetle_interfaces::msg::TwistStampedToWheel & msg)
  : msg_(msg)
  {}
  Init_TwistStampedToWheel_wheel_3 wheel_2(::sensebeetle_interfaces::msg::TwistStampedToWheel::_wheel_2_type arg)
  {
    msg_.wheel_2 = std::move(arg);
    return Init_TwistStampedToWheel_wheel_3(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::TwistStampedToWheel msg_;
};

class Init_TwistStampedToWheel_wheel_1
{
public:
  explicit Init_TwistStampedToWheel_wheel_1(::sensebeetle_interfaces::msg::TwistStampedToWheel & msg)
  : msg_(msg)
  {}
  Init_TwistStampedToWheel_wheel_2 wheel_1(::sensebeetle_interfaces::msg::TwistStampedToWheel::_wheel_1_type arg)
  {
    msg_.wheel_1 = std::move(arg);
    return Init_TwistStampedToWheel_wheel_2(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::TwistStampedToWheel msg_;
};

class Init_TwistStampedToWheel_header
{
public:
  Init_TwistStampedToWheel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistStampedToWheel_wheel_1 header(::sensebeetle_interfaces::msg::TwistStampedToWheel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TwistStampedToWheel_wheel_1(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::TwistStampedToWheel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensebeetle_interfaces::msg::TwistStampedToWheel>()
{
  return sensebeetle_interfaces::msg::builder::Init_TwistStampedToWheel_header();
}

}  // namespace sensebeetle_interfaces

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__BUILDER_HPP_
