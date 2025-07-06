// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice
#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: ch_l_x
  cdr << ros_message.ch_l_x;
  // Member: ch_l_y
  cdr << ros_message.ch_l_y;
  // Member: ch_r_x
  cdr << ros_message.ch_r_x;
  // Member: ch_r_y
  cdr << ros_message.ch_r_y;
  // Member: s_l
  cdr << ros_message.s_l;
  // Member: s_r
  cdr << ros_message.s_r;
  // Member: wheel
  cdr << ros_message.wheel;
  // Member: m_x
  cdr << ros_message.m_x;
  // Member: m_y
  cdr << ros_message.m_y;
  // Member: m_z
  cdr << ros_message.m_z;
  // Member: p_l
  cdr << (ros_message.p_l ? true : false);
  // Member: p_r
  cdr << (ros_message.p_r ? true : false);
  // Member: key_w
  cdr << (ros_message.key_w ? true : false);
  // Member: key_s
  cdr << (ros_message.key_s ? true : false);
  // Member: key_a
  cdr << (ros_message.key_a ? true : false);
  // Member: key_d
  cdr << (ros_message.key_d ? true : false);
  // Member: key_shift
  cdr << (ros_message.key_shift ? true : false);
  // Member: key_ctrl
  cdr << (ros_message.key_ctrl ? true : false);
  // Member: key_q
  cdr << (ros_message.key_q ? true : false);
  // Member: key_e
  cdr << (ros_message.key_e ? true : false);
  // Member: key_r
  cdr << (ros_message.key_r ? true : false);
  // Member: key_f
  cdr << (ros_message.key_f ? true : false);
  // Member: key_g
  cdr << (ros_message.key_g ? true : false);
  // Member: key_z
  cdr << (ros_message.key_z ? true : false);
  // Member: key_x
  cdr << (ros_message.key_x ? true : false);
  // Member: key_c
  cdr << (ros_message.key_c ? true : false);
  // Member: key_v
  cdr << (ros_message.key_v ? true : false);
  // Member: key_b
  cdr << (ros_message.key_b ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sensebeetle_interfaces::msg::Dr16DbusData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ch_l_x
  cdr >> ros_message.ch_l_x;

  // Member: ch_l_y
  cdr >> ros_message.ch_l_y;

  // Member: ch_r_x
  cdr >> ros_message.ch_r_x;

  // Member: ch_r_y
  cdr >> ros_message.ch_r_y;

  // Member: s_l
  cdr >> ros_message.s_l;

  // Member: s_r
  cdr >> ros_message.s_r;

  // Member: wheel
  cdr >> ros_message.wheel;

  // Member: m_x
  cdr >> ros_message.m_x;

  // Member: m_y
  cdr >> ros_message.m_y;

  // Member: m_z
  cdr >> ros_message.m_z;

  // Member: p_l
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.p_l = tmp ? true : false;
  }

  // Member: p_r
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.p_r = tmp ? true : false;
  }

  // Member: key_w
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_w = tmp ? true : false;
  }

  // Member: key_s
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_s = tmp ? true : false;
  }

  // Member: key_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_a = tmp ? true : false;
  }

  // Member: key_d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_d = tmp ? true : false;
  }

  // Member: key_shift
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_shift = tmp ? true : false;
  }

  // Member: key_ctrl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_ctrl = tmp ? true : false;
  }

  // Member: key_q
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_q = tmp ? true : false;
  }

  // Member: key_e
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_e = tmp ? true : false;
  }

  // Member: key_r
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_r = tmp ? true : false;
  }

  // Member: key_f
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_f = tmp ? true : false;
  }

  // Member: key_g
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_g = tmp ? true : false;
  }

  // Member: key_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_z = tmp ? true : false;
  }

  // Member: key_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_x = tmp ? true : false;
  }

  // Member: key_c
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_c = tmp ? true : false;
  }

  // Member: key_v
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_v = tmp ? true : false;
  }

  // Member: key_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_b = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
get_serialized_size(
  const sensebeetle_interfaces::msg::Dr16DbusData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: ch_l_x
  {
    size_t item_size = sizeof(ros_message.ch_l_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_l_y
  {
    size_t item_size = sizeof(ros_message.ch_l_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_r_x
  {
    size_t item_size = sizeof(ros_message.ch_r_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_r_y
  {
    size_t item_size = sizeof(ros_message.ch_r_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: s_l
  {
    size_t item_size = sizeof(ros_message.s_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: s_r
  {
    size_t item_size = sizeof(ros_message.s_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel
  {
    size_t item_size = sizeof(ros_message.wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_x
  {
    size_t item_size = sizeof(ros_message.m_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_y
  {
    size_t item_size = sizeof(ros_message.m_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_z
  {
    size_t item_size = sizeof(ros_message.m_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_l
  {
    size_t item_size = sizeof(ros_message.p_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_r
  {
    size_t item_size = sizeof(ros_message.p_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_w
  {
    size_t item_size = sizeof(ros_message.key_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_s
  {
    size_t item_size = sizeof(ros_message.key_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_a
  {
    size_t item_size = sizeof(ros_message.key_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_d
  {
    size_t item_size = sizeof(ros_message.key_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_shift
  {
    size_t item_size = sizeof(ros_message.key_shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_ctrl
  {
    size_t item_size = sizeof(ros_message.key_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_q
  {
    size_t item_size = sizeof(ros_message.key_q);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_e
  {
    size_t item_size = sizeof(ros_message.key_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_r
  {
    size_t item_size = sizeof(ros_message.key_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_f
  {
    size_t item_size = sizeof(ros_message.key_f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_g
  {
    size_t item_size = sizeof(ros_message.key_g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_z
  {
    size_t item_size = sizeof(ros_message.key_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_x
  {
    size_t item_size = sizeof(ros_message.key_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_c
  {
    size_t item_size = sizeof(ros_message.key_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_v
  {
    size_t item_size = sizeof(ros_message.key_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_b
  {
    size_t item_size = sizeof(ros_message.key_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensebeetle_interfaces
max_serialized_size_Dr16DbusData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ch_l_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ch_l_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ch_r_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ch_r_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: s_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: s_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: p_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: p_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_q
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_f
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_g
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sensebeetle_interfaces::msg::Dr16DbusData;
    is_plain =
      (
      offsetof(DataType, key_b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Dr16DbusData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sensebeetle_interfaces::msg::Dr16DbusData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dr16DbusData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensebeetle_interfaces::msg::Dr16DbusData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dr16DbusData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensebeetle_interfaces::msg::Dr16DbusData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dr16DbusData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Dr16DbusData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Dr16DbusData__callbacks = {
  "sensebeetle_interfaces::msg",
  "Dr16DbusData",
  _Dr16DbusData__cdr_serialize,
  _Dr16DbusData__cdr_deserialize,
  _Dr16DbusData__get_serialized_size,
  _Dr16DbusData__max_serialized_size
};

static rosidl_message_type_support_t _Dr16DbusData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Dr16DbusData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sensebeetle_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sensebeetle_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sensebeetle_interfaces::msg::Dr16DbusData>()
{
  return &sensebeetle_interfaces::msg::typesupport_fastrtps_cpp::_Dr16DbusData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensebeetle_interfaces, msg, Dr16DbusData)() {
  return &sensebeetle_interfaces::msg::typesupport_fastrtps_cpp::_Dr16DbusData__handle;
}

#ifdef __cplusplus
}
#endif
