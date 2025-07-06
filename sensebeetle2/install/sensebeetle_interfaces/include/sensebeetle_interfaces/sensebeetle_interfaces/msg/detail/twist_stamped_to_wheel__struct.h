// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__STRUCT_H_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'wheel_1'
// Member 'wheel_2'
// Member 'wheel_3'
// Member 'wheel_4'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TwistStampedToWheel in the package sensebeetle_interfaces.
/**
  * TwistStampedToWheel.msg
 */
typedef struct sensebeetle_interfaces__msg__TwistStampedToWheel
{
  /// Ros header
  std_msgs__msg__Header header;
  rosidl_runtime_c__String wheel_1;
  rosidl_runtime_c__String wheel_2;
  rosidl_runtime_c__String wheel_3;
  rosidl_runtime_c__String wheel_4;
} sensebeetle_interfaces__msg__TwistStampedToWheel;

// Struct for a sequence of sensebeetle_interfaces__msg__TwistStampedToWheel.
typedef struct sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence
{
  sensebeetle_interfaces__msg__TwistStampedToWheel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__STRUCT_H_
