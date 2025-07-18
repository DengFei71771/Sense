// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sensebeetle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__struct.h"
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // wheel_1, wheel_2, wheel_3, wheel_4
#include "rosidl_runtime_c/string_functions.h"  // wheel_1, wheel_2, wheel_3, wheel_4
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensebeetle_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensebeetle_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensebeetle_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TwistStampedToWheel__ros_msg_type = sensebeetle_interfaces__msg__TwistStampedToWheel;

static bool _TwistStampedToWheel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TwistStampedToWheel__ros_msg_type * ros_message = static_cast<const _TwistStampedToWheel__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: wheel_1
  {
    const rosidl_runtime_c__String * str = &ros_message->wheel_1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: wheel_2
  {
    const rosidl_runtime_c__String * str = &ros_message->wheel_2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: wheel_3
  {
    const rosidl_runtime_c__String * str = &ros_message->wheel_3;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: wheel_4
  {
    const rosidl_runtime_c__String * str = &ros_message->wheel_4;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TwistStampedToWheel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TwistStampedToWheel__ros_msg_type * ros_message = static_cast<_TwistStampedToWheel__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: wheel_1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wheel_1.data) {
      rosidl_runtime_c__String__init(&ros_message->wheel_1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wheel_1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wheel_1'\n");
      return false;
    }
  }

  // Field name: wheel_2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wheel_2.data) {
      rosidl_runtime_c__String__init(&ros_message->wheel_2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wheel_2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wheel_2'\n");
      return false;
    }
  }

  // Field name: wheel_3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wheel_3.data) {
      rosidl_runtime_c__String__init(&ros_message->wheel_3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wheel_3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wheel_3'\n");
      return false;
    }
  }

  // Field name: wheel_4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wheel_4.data) {
      rosidl_runtime_c__String__init(&ros_message->wheel_4);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wheel_4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wheel_4'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensebeetle_interfaces
size_t get_serialized_size_sensebeetle_interfaces__msg__TwistStampedToWheel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TwistStampedToWheel__ros_msg_type * ros_message = static_cast<const _TwistStampedToWheel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name wheel_1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wheel_1.size + 1);
  // field.name wheel_2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wheel_2.size + 1);
  // field.name wheel_3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wheel_3.size + 1);
  // field.name wheel_4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wheel_4.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TwistStampedToWheel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sensebeetle_interfaces__msg__TwistStampedToWheel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensebeetle_interfaces
size_t max_serialized_size_sensebeetle_interfaces__msg__TwistStampedToWheel(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: wheel_1
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wheel_2
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wheel_3
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wheel_4
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sensebeetle_interfaces__msg__TwistStampedToWheel;
    is_plain =
      (
      offsetof(DataType, wheel_4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TwistStampedToWheel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sensebeetle_interfaces__msg__TwistStampedToWheel(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TwistStampedToWheel = {
  "sensebeetle_interfaces::msg",
  "TwistStampedToWheel",
  _TwistStampedToWheel__cdr_serialize,
  _TwistStampedToWheel__cdr_deserialize,
  _TwistStampedToWheel__get_serialized_size,
  _TwistStampedToWheel__max_serialized_size
};

static rosidl_message_type_support_t _TwistStampedToWheel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TwistStampedToWheel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensebeetle_interfaces, msg, TwistStampedToWheel)() {
  return &_TwistStampedToWheel__type_support;
}

#if defined(__cplusplus)
}
#endif
