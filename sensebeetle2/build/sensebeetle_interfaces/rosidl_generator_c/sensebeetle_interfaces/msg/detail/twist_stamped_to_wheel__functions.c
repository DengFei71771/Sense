// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensebeetle_interfaces:msg/TwistStampedToWheel.idl
// generated code does not contain a copyright notice
#include "sensebeetle_interfaces/msg/detail/twist_stamped_to_wheel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `wheel_1`
// Member `wheel_2`
// Member `wheel_3`
// Member `wheel_4`
#include "rosidl_runtime_c/string_functions.h"

bool
sensebeetle_interfaces__msg__TwistStampedToWheel__init(sensebeetle_interfaces__msg__TwistStampedToWheel * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__fini(msg);
    return false;
  }
  // wheel_1
  if (!rosidl_runtime_c__String__init(&msg->wheel_1)) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__fini(msg);
    return false;
  }
  // wheel_2
  if (!rosidl_runtime_c__String__init(&msg->wheel_2)) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__fini(msg);
    return false;
  }
  // wheel_3
  if (!rosidl_runtime_c__String__init(&msg->wheel_3)) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__fini(msg);
    return false;
  }
  // wheel_4
  if (!rosidl_runtime_c__String__init(&msg->wheel_4)) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__fini(msg);
    return false;
  }
  return true;
}

void
sensebeetle_interfaces__msg__TwistStampedToWheel__fini(sensebeetle_interfaces__msg__TwistStampedToWheel * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // wheel_1
  rosidl_runtime_c__String__fini(&msg->wheel_1);
  // wheel_2
  rosidl_runtime_c__String__fini(&msg->wheel_2);
  // wheel_3
  rosidl_runtime_c__String__fini(&msg->wheel_3);
  // wheel_4
  rosidl_runtime_c__String__fini(&msg->wheel_4);
}

bool
sensebeetle_interfaces__msg__TwistStampedToWheel__are_equal(const sensebeetle_interfaces__msg__TwistStampedToWheel * lhs, const sensebeetle_interfaces__msg__TwistStampedToWheel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // wheel_1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->wheel_1), &(rhs->wheel_1)))
  {
    return false;
  }
  // wheel_2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->wheel_2), &(rhs->wheel_2)))
  {
    return false;
  }
  // wheel_3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->wheel_3), &(rhs->wheel_3)))
  {
    return false;
  }
  // wheel_4
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->wheel_4), &(rhs->wheel_4)))
  {
    return false;
  }
  return true;
}

bool
sensebeetle_interfaces__msg__TwistStampedToWheel__copy(
  const sensebeetle_interfaces__msg__TwistStampedToWheel * input,
  sensebeetle_interfaces__msg__TwistStampedToWheel * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // wheel_1
  if (!rosidl_runtime_c__String__copy(
      &(input->wheel_1), &(output->wheel_1)))
  {
    return false;
  }
  // wheel_2
  if (!rosidl_runtime_c__String__copy(
      &(input->wheel_2), &(output->wheel_2)))
  {
    return false;
  }
  // wheel_3
  if (!rosidl_runtime_c__String__copy(
      &(input->wheel_3), &(output->wheel_3)))
  {
    return false;
  }
  // wheel_4
  if (!rosidl_runtime_c__String__copy(
      &(input->wheel_4), &(output->wheel_4)))
  {
    return false;
  }
  return true;
}

sensebeetle_interfaces__msg__TwistStampedToWheel *
sensebeetle_interfaces__msg__TwistStampedToWheel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensebeetle_interfaces__msg__TwistStampedToWheel * msg = (sensebeetle_interfaces__msg__TwistStampedToWheel *)allocator.allocate(sizeof(sensebeetle_interfaces__msg__TwistStampedToWheel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensebeetle_interfaces__msg__TwistStampedToWheel));
  bool success = sensebeetle_interfaces__msg__TwistStampedToWheel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensebeetle_interfaces__msg__TwistStampedToWheel__destroy(sensebeetle_interfaces__msg__TwistStampedToWheel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__init(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensebeetle_interfaces__msg__TwistStampedToWheel * data = NULL;

  if (size) {
    data = (sensebeetle_interfaces__msg__TwistStampedToWheel *)allocator.zero_allocate(size, sizeof(sensebeetle_interfaces__msg__TwistStampedToWheel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensebeetle_interfaces__msg__TwistStampedToWheel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensebeetle_interfaces__msg__TwistStampedToWheel__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__fini(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensebeetle_interfaces__msg__TwistStampedToWheel__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence *
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array = (sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence *)allocator.allocate(sizeof(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__destroy(sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__are_equal(const sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * lhs, const sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensebeetle_interfaces__msg__TwistStampedToWheel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence__copy(
  const sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * input,
  sensebeetle_interfaces__msg__TwistStampedToWheel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensebeetle_interfaces__msg__TwistStampedToWheel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensebeetle_interfaces__msg__TwistStampedToWheel * data =
      (sensebeetle_interfaces__msg__TwistStampedToWheel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensebeetle_interfaces__msg__TwistStampedToWheel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensebeetle_interfaces__msg__TwistStampedToWheel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensebeetle_interfaces__msg__TwistStampedToWheel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
