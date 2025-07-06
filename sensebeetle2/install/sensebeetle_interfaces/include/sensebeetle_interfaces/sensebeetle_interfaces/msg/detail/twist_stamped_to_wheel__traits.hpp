// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__TRAITS_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sensebeetle_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwistStampedToWheel & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: wheel_1
  {
    out << "wheel_1: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_1, out);
    out << ", ";
  }

  // member: wheel_2
  {
    out << "wheel_2: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_2, out);
    out << ", ";
  }

  // member: wheel_3
  {
    out << "wheel_3: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_3, out);
    out << ", ";
  }

  // member: wheel_4
  {
    out << "wheel_4: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwistStampedToWheel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: wheel_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_1: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_1, out);
    out << "\n";
  }

  // member: wheel_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_2: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_2, out);
    out << "\n";
  }

  // member: wheel_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_3: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_3, out);
    out << "\n";
  }

  // member: wheel_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_4: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwistStampedToWheel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sensebeetle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensebeetle_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensebeetle_interfaces::msg::TwistStampedToWheel & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensebeetle_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensebeetle_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensebeetle_interfaces::msg::TwistStampedToWheel & msg)
{
  return sensebeetle_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensebeetle_interfaces::msg::TwistStampedToWheel>()
{
  return "sensebeetle_interfaces::msg::TwistStampedToWheel";
}

template<>
inline const char * name<sensebeetle_interfaces::msg::TwistStampedToWheel>()
{
  return "sensebeetle_interfaces/msg/TwistStampedToWheel";
}

template<>
struct has_fixed_size<sensebeetle_interfaces::msg::TwistStampedToWheel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensebeetle_interfaces::msg::TwistStampedToWheel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensebeetle_interfaces::msg::TwistStampedToWheel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__TRAITS_HPP_
