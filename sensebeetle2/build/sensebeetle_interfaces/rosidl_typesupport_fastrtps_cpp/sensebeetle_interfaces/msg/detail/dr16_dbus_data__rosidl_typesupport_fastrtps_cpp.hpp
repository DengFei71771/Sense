// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sensebeetle_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace sensebeetle_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
cdr_serialize(
  const sensebeetle_interfaces::msg::Dr16DbusData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sensebeetle_interfaces::msg::Dr16DbusData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
get_serialized_size(
  const sensebeetle_interfaces::msg::Dr16DbusData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
max_serialized_size_Dr16DbusData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sensebeetle_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensebeetle_interfaces, msg, Dr16DbusData)();

#ifdef __cplusplus
}
#endif

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
