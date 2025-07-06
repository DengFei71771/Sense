// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensebeetle_interfaces:msg/Dr16DbusData.idl
// generated code does not contain a copyright notice
#include "sensebeetle_interfaces/msg/detail/dr16_dbus_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sensebeetle_interfaces__msg__Dr16DbusData__init(sensebeetle_interfaces__msg__Dr16DbusData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensebeetle_interfaces__msg__Dr16DbusData__fini(msg);
    return false;
  }
  // ch_l_x
  // ch_l_y
  // ch_r_x
  // ch_r_y
  // s_l
  // s_r
  // wheel
  // m_x
  // m_y
  // m_z
  // p_l
  // p_r
  // key_w
  // key_s
  // key_a
  // key_d
  // key_shift
  // key_ctrl
  // key_q
  // key_e
  // key_r
  // key_f
  // key_g
  // key_z
  // key_x
  // key_c
  // key_v
  // key_b
  return true;
}

void
sensebeetle_interfaces__msg__Dr16DbusData__fini(sensebeetle_interfaces__msg__Dr16DbusData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ch_l_x
  // ch_l_y
  // ch_r_x
  // ch_r_y
  // s_l
  // s_r
  // wheel
  // m_x
  // m_y
  // m_z
  // p_l
  // p_r
  // key_w
  // key_s
  // key_a
  // key_d
  // key_shift
  // key_ctrl
  // key_q
  // key_e
  // key_r
  // key_f
  // key_g
  // key_z
  // key_x
  // key_c
  // key_v
  // key_b
}

bool
sensebeetle_interfaces__msg__Dr16DbusData__are_equal(const sensebeetle_interfaces__msg__Dr16DbusData * lhs, const sensebeetle_interfaces__msg__Dr16DbusData * rhs)
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
  // ch_l_x
  if (lhs->ch_l_x != rhs->ch_l_x) {
    return false;
  }
  // ch_l_y
  if (lhs->ch_l_y != rhs->ch_l_y) {
    return false;
  }
  // ch_r_x
  if (lhs->ch_r_x != rhs->ch_r_x) {
    return false;
  }
  // ch_r_y
  if (lhs->ch_r_y != rhs->ch_r_y) {
    return false;
  }
  // s_l
  if (lhs->s_l != rhs->s_l) {
    return false;
  }
  // s_r
  if (lhs->s_r != rhs->s_r) {
    return false;
  }
  // wheel
  if (lhs->wheel != rhs->wheel) {
    return false;
  }
  // m_x
  if (lhs->m_x != rhs->m_x) {
    return false;
  }
  // m_y
  if (lhs->m_y != rhs->m_y) {
    return false;
  }
  // m_z
  if (lhs->m_z != rhs->m_z) {
    return false;
  }
  // p_l
  if (lhs->p_l != rhs->p_l) {
    return false;
  }
  // p_r
  if (lhs->p_r != rhs->p_r) {
    return false;
  }
  // key_w
  if (lhs->key_w != rhs->key_w) {
    return false;
  }
  // key_s
  if (lhs->key_s != rhs->key_s) {
    return false;
  }
  // key_a
  if (lhs->key_a != rhs->key_a) {
    return false;
  }
  // key_d
  if (lhs->key_d != rhs->key_d) {
    return false;
  }
  // key_shift
  if (lhs->key_shift != rhs->key_shift) {
    return false;
  }
  // key_ctrl
  if (lhs->key_ctrl != rhs->key_ctrl) {
    return false;
  }
  // key_q
  if (lhs->key_q != rhs->key_q) {
    return false;
  }
  // key_e
  if (lhs->key_e != rhs->key_e) {
    return false;
  }
  // key_r
  if (lhs->key_r != rhs->key_r) {
    return false;
  }
  // key_f
  if (lhs->key_f != rhs->key_f) {
    return false;
  }
  // key_g
  if (lhs->key_g != rhs->key_g) {
    return false;
  }
  // key_z
  if (lhs->key_z != rhs->key_z) {
    return false;
  }
  // key_x
  if (lhs->key_x != rhs->key_x) {
    return false;
  }
  // key_c
  if (lhs->key_c != rhs->key_c) {
    return false;
  }
  // key_v
  if (lhs->key_v != rhs->key_v) {
    return false;
  }
  // key_b
  if (lhs->key_b != rhs->key_b) {
    return false;
  }
  return true;
}

bool
sensebeetle_interfaces__msg__Dr16DbusData__copy(
  const sensebeetle_interfaces__msg__Dr16DbusData * input,
  sensebeetle_interfaces__msg__Dr16DbusData * output)
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
  // ch_l_x
  output->ch_l_x = input->ch_l_x;
  // ch_l_y
  output->ch_l_y = input->ch_l_y;
  // ch_r_x
  output->ch_r_x = input->ch_r_x;
  // ch_r_y
  output->ch_r_y = input->ch_r_y;
  // s_l
  output->s_l = input->s_l;
  // s_r
  output->s_r = input->s_r;
  // wheel
  output->wheel = input->wheel;
  // m_x
  output->m_x = input->m_x;
  // m_y
  output->m_y = input->m_y;
  // m_z
  output->m_z = input->m_z;
  // p_l
  output->p_l = input->p_l;
  // p_r
  output->p_r = input->p_r;
  // key_w
  output->key_w = input->key_w;
  // key_s
  output->key_s = input->key_s;
  // key_a
  output->key_a = input->key_a;
  // key_d
  output->key_d = input->key_d;
  // key_shift
  output->key_shift = input->key_shift;
  // key_ctrl
  output->key_ctrl = input->key_ctrl;
  // key_q
  output->key_q = input->key_q;
  // key_e
  output->key_e = input->key_e;
  // key_r
  output->key_r = input->key_r;
  // key_f
  output->key_f = input->key_f;
  // key_g
  output->key_g = input->key_g;
  // key_z
  output->key_z = input->key_z;
  // key_x
  output->key_x = input->key_x;
  // key_c
  output->key_c = input->key_c;
  // key_v
  output->key_v = input->key_v;
  // key_b
  output->key_b = input->key_b;
  return true;
}

sensebeetle_interfaces__msg__Dr16DbusData *
sensebeetle_interfaces__msg__Dr16DbusData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensebeetle_interfaces__msg__Dr16DbusData * msg = (sensebeetle_interfaces__msg__Dr16DbusData *)allocator.allocate(sizeof(sensebeetle_interfaces__msg__Dr16DbusData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensebeetle_interfaces__msg__Dr16DbusData));
  bool success = sensebeetle_interfaces__msg__Dr16DbusData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensebeetle_interfaces__msg__Dr16DbusData__destroy(sensebeetle_interfaces__msg__Dr16DbusData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensebeetle_interfaces__msg__Dr16DbusData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__init(sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensebeetle_interfaces__msg__Dr16DbusData * data = NULL;

  if (size) {
    data = (sensebeetle_interfaces__msg__Dr16DbusData *)allocator.zero_allocate(size, sizeof(sensebeetle_interfaces__msg__Dr16DbusData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensebeetle_interfaces__msg__Dr16DbusData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensebeetle_interfaces__msg__Dr16DbusData__fini(&data[i - 1]);
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
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__fini(sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array)
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
      sensebeetle_interfaces__msg__Dr16DbusData__fini(&array->data[i]);
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

sensebeetle_interfaces__msg__Dr16DbusData__Sequence *
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array = (sensebeetle_interfaces__msg__Dr16DbusData__Sequence *)allocator.allocate(sizeof(sensebeetle_interfaces__msg__Dr16DbusData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensebeetle_interfaces__msg__Dr16DbusData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__destroy(sensebeetle_interfaces__msg__Dr16DbusData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensebeetle_interfaces__msg__Dr16DbusData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__are_equal(const sensebeetle_interfaces__msg__Dr16DbusData__Sequence * lhs, const sensebeetle_interfaces__msg__Dr16DbusData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensebeetle_interfaces__msg__Dr16DbusData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensebeetle_interfaces__msg__Dr16DbusData__Sequence__copy(
  const sensebeetle_interfaces__msg__Dr16DbusData__Sequence * input,
  sensebeetle_interfaces__msg__Dr16DbusData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensebeetle_interfaces__msg__Dr16DbusData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensebeetle_interfaces__msg__Dr16DbusData * data =
      (sensebeetle_interfaces__msg__Dr16DbusData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensebeetle_interfaces__msg__Dr16DbusData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensebeetle_interfaces__msg__Dr16DbusData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensebeetle_interfaces__msg__Dr16DbusData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
