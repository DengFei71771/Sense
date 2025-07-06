// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__TRAITS_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sensebeetle_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dr16DbusData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ch_l_x
  {
    out << "ch_l_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_l_x, out);
    out << ", ";
  }

  // member: ch_l_y
  {
    out << "ch_l_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_l_y, out);
    out << ", ";
  }

  // member: ch_r_x
  {
    out << "ch_r_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_r_x, out);
    out << ", ";
  }

  // member: ch_r_y
  {
    out << "ch_r_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_r_y, out);
    out << ", ";
  }

  // member: s_l
  {
    out << "s_l: ";
    rosidl_generator_traits::value_to_yaml(msg.s_l, out);
    out << ", ";
  }

  // member: s_r
  {
    out << "s_r: ";
    rosidl_generator_traits::value_to_yaml(msg.s_r, out);
    out << ", ";
  }

  // member: wheel
  {
    out << "wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel, out);
    out << ", ";
  }

  // member: m_x
  {
    out << "m_x: ";
    rosidl_generator_traits::value_to_yaml(msg.m_x, out);
    out << ", ";
  }

  // member: m_y
  {
    out << "m_y: ";
    rosidl_generator_traits::value_to_yaml(msg.m_y, out);
    out << ", ";
  }

  // member: m_z
  {
    out << "m_z: ";
    rosidl_generator_traits::value_to_yaml(msg.m_z, out);
    out << ", ";
  }

  // member: p_l
  {
    out << "p_l: ";
    rosidl_generator_traits::value_to_yaml(msg.p_l, out);
    out << ", ";
  }

  // member: p_r
  {
    out << "p_r: ";
    rosidl_generator_traits::value_to_yaml(msg.p_r, out);
    out << ", ";
  }

  // member: key_w
  {
    out << "key_w: ";
    rosidl_generator_traits::value_to_yaml(msg.key_w, out);
    out << ", ";
  }

  // member: key_s
  {
    out << "key_s: ";
    rosidl_generator_traits::value_to_yaml(msg.key_s, out);
    out << ", ";
  }

  // member: key_a
  {
    out << "key_a: ";
    rosidl_generator_traits::value_to_yaml(msg.key_a, out);
    out << ", ";
  }

  // member: key_d
  {
    out << "key_d: ";
    rosidl_generator_traits::value_to_yaml(msg.key_d, out);
    out << ", ";
  }

  // member: key_shift
  {
    out << "key_shift: ";
    rosidl_generator_traits::value_to_yaml(msg.key_shift, out);
    out << ", ";
  }

  // member: key_ctrl
  {
    out << "key_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.key_ctrl, out);
    out << ", ";
  }

  // member: key_q
  {
    out << "key_q: ";
    rosidl_generator_traits::value_to_yaml(msg.key_q, out);
    out << ", ";
  }

  // member: key_e
  {
    out << "key_e: ";
    rosidl_generator_traits::value_to_yaml(msg.key_e, out);
    out << ", ";
  }

  // member: key_r
  {
    out << "key_r: ";
    rosidl_generator_traits::value_to_yaml(msg.key_r, out);
    out << ", ";
  }

  // member: key_f
  {
    out << "key_f: ";
    rosidl_generator_traits::value_to_yaml(msg.key_f, out);
    out << ", ";
  }

  // member: key_g
  {
    out << "key_g: ";
    rosidl_generator_traits::value_to_yaml(msg.key_g, out);
    out << ", ";
  }

  // member: key_z
  {
    out << "key_z: ";
    rosidl_generator_traits::value_to_yaml(msg.key_z, out);
    out << ", ";
  }

  // member: key_x
  {
    out << "key_x: ";
    rosidl_generator_traits::value_to_yaml(msg.key_x, out);
    out << ", ";
  }

  // member: key_c
  {
    out << "key_c: ";
    rosidl_generator_traits::value_to_yaml(msg.key_c, out);
    out << ", ";
  }

  // member: key_v
  {
    out << "key_v: ";
    rosidl_generator_traits::value_to_yaml(msg.key_v, out);
    out << ", ";
  }

  // member: key_b
  {
    out << "key_b: ";
    rosidl_generator_traits::value_to_yaml(msg.key_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dr16DbusData & msg,
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

  // member: ch_l_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_l_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_l_x, out);
    out << "\n";
  }

  // member: ch_l_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_l_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_l_y, out);
    out << "\n";
  }

  // member: ch_r_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_r_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_r_x, out);
    out << "\n";
  }

  // member: ch_r_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_r_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_r_y, out);
    out << "\n";
  }

  // member: s_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_l: ";
    rosidl_generator_traits::value_to_yaml(msg.s_l, out);
    out << "\n";
  }

  // member: s_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_r: ";
    rosidl_generator_traits::value_to_yaml(msg.s_r, out);
    out << "\n";
  }

  // member: wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel, out);
    out << "\n";
  }

  // member: m_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_x: ";
    rosidl_generator_traits::value_to_yaml(msg.m_x, out);
    out << "\n";
  }

  // member: m_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_y: ";
    rosidl_generator_traits::value_to_yaml(msg.m_y, out);
    out << "\n";
  }

  // member: m_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_z: ";
    rosidl_generator_traits::value_to_yaml(msg.m_z, out);
    out << "\n";
  }

  // member: p_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_l: ";
    rosidl_generator_traits::value_to_yaml(msg.p_l, out);
    out << "\n";
  }

  // member: p_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_r: ";
    rosidl_generator_traits::value_to_yaml(msg.p_r, out);
    out << "\n";
  }

  // member: key_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_w: ";
    rosidl_generator_traits::value_to_yaml(msg.key_w, out);
    out << "\n";
  }

  // member: key_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_s: ";
    rosidl_generator_traits::value_to_yaml(msg.key_s, out);
    out << "\n";
  }

  // member: key_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_a: ";
    rosidl_generator_traits::value_to_yaml(msg.key_a, out);
    out << "\n";
  }

  // member: key_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_d: ";
    rosidl_generator_traits::value_to_yaml(msg.key_d, out);
    out << "\n";
  }

  // member: key_shift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_shift: ";
    rosidl_generator_traits::value_to_yaml(msg.key_shift, out);
    out << "\n";
  }

  // member: key_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.key_ctrl, out);
    out << "\n";
  }

  // member: key_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_q: ";
    rosidl_generator_traits::value_to_yaml(msg.key_q, out);
    out << "\n";
  }

  // member: key_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_e: ";
    rosidl_generator_traits::value_to_yaml(msg.key_e, out);
    out << "\n";
  }

  // member: key_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_r: ";
    rosidl_generator_traits::value_to_yaml(msg.key_r, out);
    out << "\n";
  }

  // member: key_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_f: ";
    rosidl_generator_traits::value_to_yaml(msg.key_f, out);
    out << "\n";
  }

  // member: key_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_g: ";
    rosidl_generator_traits::value_to_yaml(msg.key_g, out);
    out << "\n";
  }

  // member: key_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_z: ";
    rosidl_generator_traits::value_to_yaml(msg.key_z, out);
    out << "\n";
  }

  // member: key_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_x: ";
    rosidl_generator_traits::value_to_yaml(msg.key_x, out);
    out << "\n";
  }

  // member: key_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_c: ";
    rosidl_generator_traits::value_to_yaml(msg.key_c, out);
    out << "\n";
  }

  // member: key_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_v: ";
    rosidl_generator_traits::value_to_yaml(msg.key_v, out);
    out << "\n";
  }

  // member: key_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_b: ";
    rosidl_generator_traits::value_to_yaml(msg.key_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dr16DbusData & msg, bool use_flow_style = false)
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
  const sensebeetle_interfaces::msg::Dr16DbusData & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensebeetle_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensebeetle_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensebeetle_interfaces::msg::Dr16DbusData & msg)
{
  return sensebeetle_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensebeetle_interfaces::msg::Dr16DbusData>()
{
  return "sensebeetle_interfaces::msg::Dr16DbusData";
}

template<>
inline const char * name<sensebeetle_interfaces::msg::Dr16DbusData>()
{
  return "sensebeetle_interfaces/msg/Dr16DbusData";
}

template<>
struct has_fixed_size<sensebeetle_interfaces::msg::Dr16DbusData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensebeetle_interfaces::msg::Dr16DbusData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensebeetle_interfaces::msg::Dr16DbusData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__TRAITS_HPP_
