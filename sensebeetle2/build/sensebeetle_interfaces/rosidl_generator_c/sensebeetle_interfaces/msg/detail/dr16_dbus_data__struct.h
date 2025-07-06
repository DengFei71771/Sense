// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__STRUCT_H_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UP'.
enum
{
  sensebeetle_interfaces__msg__Dr16DbusData__UP = 1
};

/// Constant 'DOWN'.
enum
{
  sensebeetle_interfaces__msg__Dr16DbusData__DOWN = 2
};

/// Constant 'MID'.
enum
{
  sensebeetle_interfaces__msg__Dr16DbusData__MID = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Dr16DbusData in the package sensebeetle_interfaces.
/**
  * Dr16DbusData.msg
 */
typedef struct sensebeetle_interfaces__msg__Dr16DbusData
{
  std_msgs__msg__Header header;
  double ch_l_x;
  double ch_l_y;
  double ch_r_x;
  double ch_r_y;
  uint8_t s_l;
  uint8_t s_r;
  double wheel;
  /// mouse
  double m_x;
  double m_y;
  double m_z;
  bool p_l;
  bool p_r;
  /// key board
  bool key_w;
  bool key_s;
  bool key_a;
  bool key_d;
  bool key_shift;
  bool key_ctrl;
  bool key_q;
  bool key_e;
  bool key_r;
  bool key_f;
  bool key_g;
  bool key_z;
  bool key_x;
  bool key_c;
  bool key_v;
  bool key_b;
} sensebeetle_interfaces__msg__Dr16DbusData;

// Struct for a sequence of sensebeetle_interfaces__msg__Dr16DbusData.
typedef struct sensebeetle_interfaces__msg__Dr16DbusData__Sequence
{
  sensebeetle_interfaces__msg__Dr16DbusData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensebeetle_interfaces__msg__Dr16DbusData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__STRUCT_H_
