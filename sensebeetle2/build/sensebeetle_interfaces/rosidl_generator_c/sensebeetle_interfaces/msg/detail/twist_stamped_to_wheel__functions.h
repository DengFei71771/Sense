// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice

#ifndef SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__FUNCTIONS_H_
#define SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensebeetle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__struct.h"

/// Initialize msg/TwistStampedToWheel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensebeetle_interfaces__msg__TwistStampedToWheel
 * )) before or use
 * sensebeetle_interfaces__msg__TwistStampedToWheel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__TwistStampedToWheel__init(sensebeetle_interfaces__msg__TwistStampedToWheel * msg);

/// Finalize msg/TwistStampedToWheel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__TwistStampedToWheel__fini(sensebeetle_interfaces__msg__TwistStampedToWheel * msg);

/// Create msg/TwistStampedToWheel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensebeetle_interfaces__msg__TwistStampedToWheel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
sensebeetle_interfaces__msg__TwistStampedToWheel *
sensebeetle_interfaces__msg__TwistStampedToWheel__create();

/// Destroy msg/TwistStampedToWheel message.
/**
 * It calls
 * sensebeetle_interfaces__msg__TwistStampedToWheel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__TwistStampedToWheel__destroy(sensebeetle_interfaces__msg__TwistStampedToWheel * msg);

/// Check for msg/TwistStampedToWheel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__TwistStampedToWheel__are_equal(const sensebeetle_interfaces__msg__TwistStampedToWheel * lhs, const sensebeetle_interfaces__msg__TwistStampedToWheel * rhs);

/// Copy a msg/TwistStampedToWheel message.
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
sensebeetle_interfaces__msg__TwistStampedToWheel__copy(
  const sensebeetle_interfaces__msg__TwistStampedToWheel * input,
  sensebeetle_interfaces__msg__TwistStampedToWheel * output);

/// Initialize array of msg/TwistStampedToWheel messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensebeetle_interfaces__msg__TwistStampedToWheel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__init(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array, size_t size);

/// Finalize array of msg/TwistStampedToWheel messages.
/**
 * It calls
 * sensebeetle_interfaces__msg__TwistStampedToWheel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__fini(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array);

/// Create array of msg/TwistStampedToWheel messages.
/**
 * It allocates the memory for the array and calls
 * sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence *
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__create(size_t size);

/// Destroy array of msg/TwistStampedToWheel messages.
/**
 * It calls
 * sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
void
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__destroy(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array);

/// Check for msg/TwistStampedToWheel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensebeetle_interfaces
bool
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__are_equal(const sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * lhs, const sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * rhs);

/// Copy an array of msg/TwistStampedToWheel messages.
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
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__copy(
  const sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * input,
  sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSEBEETLE_INTERFACES__MSG__DETAIL__TWIST_STAMPED_TO_WHEEL__FUNCTIONS_H_
