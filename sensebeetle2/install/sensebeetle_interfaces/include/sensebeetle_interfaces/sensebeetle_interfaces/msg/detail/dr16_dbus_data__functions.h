// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__FUNCTIONS_H_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensebeetle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__struct.h"

/// Initialize msg/Dr16DbusData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensebeetle_interfaces__msg__Dr16DbusData
 * )) before or use
 * sensebeetle_interfaces__msg__Dr16DbusData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__Dr16DbusData__init(sensebeetle_interfaces__msg__Dr16DbusData * msg);

/// Finalize msg/Dr16DbusData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__Dr16DbusData__fini(sensebeetle_interfaces__msg__Dr16DbusData * msg);

/// Create msg/Dr16DbusData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensebeetle_interfaces__msg__Dr16DbusData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
sensebeetle_interfaces__msg__Dr16DbusData *
sensebeetle_interfaces__msg__Dr16DbusData__create();

/// Destroy msg/Dr16DbusData message.
/**
 * It calls
 * sensebeetle_interfaces__msg__Dr16DbusData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__Dr16DbusData__destroy(sensebeetle_interfaces__msg__Dr16DbusData * msg);

/// Check for msg/Dr16DbusData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__Dr16DbusData__are_equal(const sensebeetle_interfaces__msg__Dr16DbusData * lhs, const sensebeetle_interfaces__msg__Dr16DbusData * rhs);

/// Copy a msg/Dr16DbusData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__Dr16DbusData__copy(
  const sensebeetle_interfaces__msg__Dr16DbusData * input,
  sensebeetle_interfaces__msg__Dr16DbusData * output);

/// Initialize array of msg/Dr16DbusData messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensebeetle_interfaces__msg__Dr16DbusData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__init(sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array, size_t size);

/// Finalize array of msg/Dr16DbusData messages.
/**
 * It calls
 * sensebeetle_interfaces__msg__Dr16DbusData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__fini(sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array);

/// Create array of msg/Dr16DbusData messages.
/**
 * It allocates the memory for the array and calls
 * sensebeetle_interfaces__msg__Dr16DbusData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
sensebeetle_interfaces__msg__Dr16DbusData__Sequence *
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__create(size_t size);

/// Destroy array of msg/Dr16DbusData messages.
/**
 * It calls
 * sensebeetle_interfaces__msg__Dr16DbusData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__destroy(sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array);

/// Check for msg/Dr16DbusData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__are_equal(const sensebeetle_interfaces__msg__Dr16DbusData__Sequence * lhs, const sensebeetle_interfaces__msg__Dr16DbusData__Sequence * rhs);

/// Copy an array of msg/Dr16DbusData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__copy(
  const sensebeetle_interfaces__msg__Dr16DbusData__Sequence * input,
  sensebeetle_interfaces__msg__Dr16DbusData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__DR16_DBUS_DATA__FUNCTIONS_H_
