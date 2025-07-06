// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__BUILDER_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensebeetle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Dr16DbusData_key_b
{
public:
  explicit Init_Dr16DbusData_key_b(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  ::sensebeetle_interfaces::msg::Dr16DbusData key_b(::sensebeetle_interfaces::msg::Dr16DbusData::_key_b_type arg)
  {
    msg_.key_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_v
{
public:
  explicit Init_Dr16DbusData_key_v(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_b key_v(::sensebeetle_interfaces::msg::Dr16DbusData::_key_v_type arg)
  {
    msg_.key_v = std::move(arg);
    return Init_Dr16DbusData_key_b(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_c
{
public:
  explicit Init_Dr16DbusData_key_c(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_v key_c(::sensebeetle_interfaces::msg::Dr16DbusData::_key_c_type arg)
  {
    msg_.key_c = std::move(arg);
    return Init_Dr16DbusData_key_v(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_x
{
public:
  explicit Init_Dr16DbusData_key_x(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_c key_x(::sensebeetle_interfaces::msg::Dr16DbusData::_key_x_type arg)
  {
    msg_.key_x = std::move(arg);
    return Init_Dr16DbusData_key_c(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_z
{
public:
  explicit Init_Dr16DbusData_key_z(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_x key_z(::sensebeetle_interfaces::msg::Dr16DbusData::_key_z_type arg)
  {
    msg_.key_z = std::move(arg);
    return Init_Dr16DbusData_key_x(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_g
{
public:
  explicit Init_Dr16DbusData_key_g(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_z key_g(::sensebeetle_interfaces::msg::Dr16DbusData::_key_g_type arg)
  {
    msg_.key_g = std::move(arg);
    return Init_Dr16DbusData_key_z(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_f
{
public:
  explicit Init_Dr16DbusData_key_f(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_g key_f(::sensebeetle_interfaces::msg::Dr16DbusData::_key_f_type arg)
  {
    msg_.key_f = std::move(arg);
    return Init_Dr16DbusData_key_g(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_r
{
public:
  explicit Init_Dr16DbusData_key_r(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_f key_r(::sensebeetle_interfaces::msg::Dr16DbusData::_key_r_type arg)
  {
    msg_.key_r = std::move(arg);
    return Init_Dr16DbusData_key_f(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_e
{
public:
  explicit Init_Dr16DbusData_key_e(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_r key_e(::sensebeetle_interfaces::msg::Dr16DbusData::_key_e_type arg)
  {
    msg_.key_e = std::move(arg);
    return Init_Dr16DbusData_key_r(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_q
{
public:
  explicit Init_Dr16DbusData_key_q(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_e key_q(::sensebeetle_interfaces::msg::Dr16DbusData::_key_q_type arg)
  {
    msg_.key_q = std::move(arg);
    return Init_Dr16DbusData_key_e(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_ctrl
{
public:
  explicit Init_Dr16DbusData_key_ctrl(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_q key_ctrl(::sensebeetle_interfaces::msg::Dr16DbusData::_key_ctrl_type arg)
  {
    msg_.key_ctrl = std::move(arg);
    return Init_Dr16DbusData_key_q(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_shift
{
public:
  explicit Init_Dr16DbusData_key_shift(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_ctrl key_shift(::sensebeetle_interfaces::msg::Dr16DbusData::_key_shift_type arg)
  {
    msg_.key_shift = std::move(arg);
    return Init_Dr16DbusData_key_ctrl(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_d
{
public:
  explicit Init_Dr16DbusData_key_d(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_shift key_d(::sensebeetle_interfaces::msg::Dr16DbusData::_key_d_type arg)
  {
    msg_.key_d = std::move(arg);
    return Init_Dr16DbusData_key_shift(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_a
{
public:
  explicit Init_Dr16DbusData_key_a(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_d key_a(::sensebeetle_interfaces::msg::Dr16DbusData::_key_a_type arg)
  {
    msg_.key_a = std::move(arg);
    return Init_Dr16DbusData_key_d(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_s
{
public:
  explicit Init_Dr16DbusData_key_s(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_a key_s(::sensebeetle_interfaces::msg::Dr16DbusData::_key_s_type arg)
  {
    msg_.key_s = std::move(arg);
    return Init_Dr16DbusData_key_a(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_key_w
{
public:
  explicit Init_Dr16DbusData_key_w(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_s key_w(::sensebeetle_interfaces::msg::Dr16DbusData::_key_w_type arg)
  {
    msg_.key_w = std::move(arg);
    return Init_Dr16DbusData_key_s(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_p_r
{
public:
  explicit Init_Dr16DbusData_p_r(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_key_w p_r(::sensebeetle_interfaces::msg::Dr16DbusData::_p_r_type arg)
  {
    msg_.p_r = std::move(arg);
    return Init_Dr16DbusData_key_w(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_p_l
{
public:
  explicit Init_Dr16DbusData_p_l(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_p_r p_l(::sensebeetle_interfaces::msg::Dr16DbusData::_p_l_type arg)
  {
    msg_.p_l = std::move(arg);
    return Init_Dr16DbusData_p_r(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_m_z
{
public:
  explicit Init_Dr16DbusData_m_z(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_p_l m_z(::sensebeetle_interfaces::msg::Dr16DbusData::_m_z_type arg)
  {
    msg_.m_z = std::move(arg);
    return Init_Dr16DbusData_p_l(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_m_y
{
public:
  explicit Init_Dr16DbusData_m_y(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_m_z m_y(::sensebeetle_interfaces::msg::Dr16DbusData::_m_y_type arg)
  {
    msg_.m_y = std::move(arg);
    return Init_Dr16DbusData_m_z(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_m_x
{
public:
  explicit Init_Dr16DbusData_m_x(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_m_y m_x(::sensebeetle_interfaces::msg::Dr16DbusData::_m_x_type arg)
  {
    msg_.m_x = std::move(arg);
    return Init_Dr16DbusData_m_y(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_wheel
{
public:
  explicit Init_Dr16DbusData_wheel(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_m_x wheel(::sensebeetle_interfaces::msg::Dr16DbusData::_wheel_type arg)
  {
    msg_.wheel = std::move(arg);
    return Init_Dr16DbusData_m_x(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_s_r
{
public:
  explicit Init_Dr16DbusData_s_r(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_wheel s_r(::sensebeetle_interfaces::msg::Dr16DbusData::_s_r_type arg)
  {
    msg_.s_r = std::move(arg);
    return Init_Dr16DbusData_wheel(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_s_l
{
public:
  explicit Init_Dr16DbusData_s_l(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_s_r s_l(::sensebeetle_interfaces::msg::Dr16DbusData::_s_l_type arg)
  {
    msg_.s_l = std::move(arg);
    return Init_Dr16DbusData_s_r(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_ch_r_y
{
public:
  explicit Init_Dr16DbusData_ch_r_y(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_s_l ch_r_y(::sensebeetle_interfaces::msg::Dr16DbusData::_ch_r_y_type arg)
  {
    msg_.ch_r_y = std::move(arg);
    return Init_Dr16DbusData_s_l(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_ch_r_x
{
public:
  explicit Init_Dr16DbusData_ch_r_x(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_ch_r_y ch_r_x(::sensebeetle_interfaces::msg::Dr16DbusData::_ch_r_x_type arg)
  {
    msg_.ch_r_x = std::move(arg);
    return Init_Dr16DbusData_ch_r_y(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_ch_l_y
{
public:
  explicit Init_Dr16DbusData_ch_l_y(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_ch_r_x ch_l_y(::sensebeetle_interfaces::msg::Dr16DbusData::_ch_l_y_type arg)
  {
    msg_.ch_l_y = std::move(arg);
    return Init_Dr16DbusData_ch_r_x(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_ch_l_x
{
public:
  explicit Init_Dr16DbusData_ch_l_x(::sensebeetle_interfaces::msg::Dr16DbusData & msg)
  : msg_(msg)
  {}
  Init_Dr16DbusData_ch_l_y ch_l_x(::sensebeetle_interfaces::msg::Dr16DbusData::_ch_l_x_type arg)
  {
    msg_.ch_l_x = std::move(arg);
    return Init_Dr16DbusData_ch_l_y(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

class Init_Dr16DbusData_header
{
public:
  Init_Dr16DbusData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dr16DbusData_ch_l_x header(::sensebeetle_interfaces::msg::Dr16DbusData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Dr16DbusData_ch_l_x(msg_);
  }

private:
  ::sensebeetle_interfaces::msg::Dr16DbusData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensebeetle_interfaces::msg::Dr16DbusData>()
{
  return sensebeetle_interfaces::msg::builder::Init_Dr16DbusData_header();
}

}  // namespace sensebeetle_interfaces

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__BUILDER_HPP_
