// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__rosidl_typesupport_introspection_c.h"
#include "sensebeetle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__functions.h"
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `wheel_1`
// Member `wheel_2`
// Member `wheel_3`
// Member `wheel_4`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensebeetle_interfaces__msg__TwistStampedToWheel__init(message_memory);
}

void sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_fini_function(void * message_memory)
{
  sensebeetle_interfaces__msg__TwistStampedToWheel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensebeetle_interfaces__msg__TwistStampedToWheel, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensebeetle_interfaces__msg__TwistStampedToWheel, wheel_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensebeetle_interfaces__msg__TwistStampedToWheel, wheel_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensebeetle_interfaces__msg__TwistStampedToWheel, wheel_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensebeetle_interfaces__msg__TwistStampedToWheel, wheel_4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_members = {
  "sensebeetle_interfaces__msg",  // message namespace
  "TwistStampedToWheel",  // message name
  5,  // number of fields
  sizeof(sensebeetle_interfaces__msg__TwistStampedToWheel),
  sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_member_array,  // message members
  sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_init_function,  // function to initialize message memory (memory has to be allocated)
  sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_type_support_handle = {
  0,
  &sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensebeetle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensebeetle_interfaces, msg, TwistStampedToWheel)() {
  sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_type_support_handle.typesupport_identifier) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensebeetle_interfaces__msg__TwistStampedToWheel__rosidl_typesupport_introspection_c__TwistStampedToWheel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
