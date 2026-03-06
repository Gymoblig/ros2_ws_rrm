// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice
#include "ondrejka_interface/srv/detail/my_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ondrejka_interface__srv__MyService_Request__init(ondrejka_interface__srv__MyService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    ondrejka_interface__srv__MyService_Request__fini(msg);
    return false;
  }
  // velocity
  // save
  return true;
}

void
ondrejka_interface__srv__MyService_Request__fini(ondrejka_interface__srv__MyService_Request * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
  // velocity
  // save
}

bool
ondrejka_interface__srv__MyService_Request__are_equal(const ondrejka_interface__srv__MyService_Request * lhs, const ondrejka_interface__srv__MyService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // save
  if (lhs->save != rhs->save) {
    return false;
  }
  return true;
}

bool
ondrejka_interface__srv__MyService_Request__copy(
  const ondrejka_interface__srv__MyService_Request * input,
  ondrejka_interface__srv__MyService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // save
  output->save = input->save;
  return true;
}

ondrejka_interface__srv__MyService_Request *
ondrejka_interface__srv__MyService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Request * msg = (ondrejka_interface__srv__MyService_Request *)allocator.allocate(sizeof(ondrejka_interface__srv__MyService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ondrejka_interface__srv__MyService_Request));
  bool success = ondrejka_interface__srv__MyService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ondrejka_interface__srv__MyService_Request__destroy(ondrejka_interface__srv__MyService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ondrejka_interface__srv__MyService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ondrejka_interface__srv__MyService_Request__Sequence__init(ondrejka_interface__srv__MyService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Request * data = NULL;

  if (size) {
    data = (ondrejka_interface__srv__MyService_Request *)allocator.zero_allocate(size, sizeof(ondrejka_interface__srv__MyService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ondrejka_interface__srv__MyService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ondrejka_interface__srv__MyService_Request__fini(&data[i - 1]);
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
ondrejka_interface__srv__MyService_Request__Sequence__fini(ondrejka_interface__srv__MyService_Request__Sequence * array)
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
      ondrejka_interface__srv__MyService_Request__fini(&array->data[i]);
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

ondrejka_interface__srv__MyService_Request__Sequence *
ondrejka_interface__srv__MyService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Request__Sequence * array = (ondrejka_interface__srv__MyService_Request__Sequence *)allocator.allocate(sizeof(ondrejka_interface__srv__MyService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ondrejka_interface__srv__MyService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ondrejka_interface__srv__MyService_Request__Sequence__destroy(ondrejka_interface__srv__MyService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ondrejka_interface__srv__MyService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ondrejka_interface__srv__MyService_Request__Sequence__are_equal(const ondrejka_interface__srv__MyService_Request__Sequence * lhs, const ondrejka_interface__srv__MyService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ondrejka_interface__srv__MyService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ondrejka_interface__srv__MyService_Request__Sequence__copy(
  const ondrejka_interface__srv__MyService_Request__Sequence * input,
  ondrejka_interface__srv__MyService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ondrejka_interface__srv__MyService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ondrejka_interface__srv__MyService_Request * data =
      (ondrejka_interface__srv__MyService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ondrejka_interface__srv__MyService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ondrejka_interface__srv__MyService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ondrejka_interface__srv__MyService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
ondrejka_interface__srv__MyService_Response__init(ondrejka_interface__srv__MyService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ondrejka_interface__srv__MyService_Response__fini(msg);
    return false;
  }
  return true;
}

void
ondrejka_interface__srv__MyService_Response__fini(ondrejka_interface__srv__MyService_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ondrejka_interface__srv__MyService_Response__are_equal(const ondrejka_interface__srv__MyService_Response * lhs, const ondrejka_interface__srv__MyService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ondrejka_interface__srv__MyService_Response__copy(
  const ondrejka_interface__srv__MyService_Response * input,
  ondrejka_interface__srv__MyService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ondrejka_interface__srv__MyService_Response *
ondrejka_interface__srv__MyService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Response * msg = (ondrejka_interface__srv__MyService_Response *)allocator.allocate(sizeof(ondrejka_interface__srv__MyService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ondrejka_interface__srv__MyService_Response));
  bool success = ondrejka_interface__srv__MyService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ondrejka_interface__srv__MyService_Response__destroy(ondrejka_interface__srv__MyService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ondrejka_interface__srv__MyService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ondrejka_interface__srv__MyService_Response__Sequence__init(ondrejka_interface__srv__MyService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Response * data = NULL;

  if (size) {
    data = (ondrejka_interface__srv__MyService_Response *)allocator.zero_allocate(size, sizeof(ondrejka_interface__srv__MyService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ondrejka_interface__srv__MyService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ondrejka_interface__srv__MyService_Response__fini(&data[i - 1]);
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
ondrejka_interface__srv__MyService_Response__Sequence__fini(ondrejka_interface__srv__MyService_Response__Sequence * array)
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
      ondrejka_interface__srv__MyService_Response__fini(&array->data[i]);
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

ondrejka_interface__srv__MyService_Response__Sequence *
ondrejka_interface__srv__MyService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Response__Sequence * array = (ondrejka_interface__srv__MyService_Response__Sequence *)allocator.allocate(sizeof(ondrejka_interface__srv__MyService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ondrejka_interface__srv__MyService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ondrejka_interface__srv__MyService_Response__Sequence__destroy(ondrejka_interface__srv__MyService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ondrejka_interface__srv__MyService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ondrejka_interface__srv__MyService_Response__Sequence__are_equal(const ondrejka_interface__srv__MyService_Response__Sequence * lhs, const ondrejka_interface__srv__MyService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ondrejka_interface__srv__MyService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ondrejka_interface__srv__MyService_Response__Sequence__copy(
  const ondrejka_interface__srv__MyService_Response__Sequence * input,
  ondrejka_interface__srv__MyService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ondrejka_interface__srv__MyService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ondrejka_interface__srv__MyService_Response * data =
      (ondrejka_interface__srv__MyService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ondrejka_interface__srv__MyService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ondrejka_interface__srv__MyService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ondrejka_interface__srv__MyService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ondrejka_interface/srv/detail/my_service__functions.h"

bool
ondrejka_interface__srv__MyService_Event__init(ondrejka_interface__srv__MyService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ondrejka_interface__srv__MyService_Event__fini(msg);
    return false;
  }
  // request
  if (!ondrejka_interface__srv__MyService_Request__Sequence__init(&msg->request, 0)) {
    ondrejka_interface__srv__MyService_Event__fini(msg);
    return false;
  }
  // response
  if (!ondrejka_interface__srv__MyService_Response__Sequence__init(&msg->response, 0)) {
    ondrejka_interface__srv__MyService_Event__fini(msg);
    return false;
  }
  return true;
}

void
ondrejka_interface__srv__MyService_Event__fini(ondrejka_interface__srv__MyService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ondrejka_interface__srv__MyService_Request__Sequence__fini(&msg->request);
  // response
  ondrejka_interface__srv__MyService_Response__Sequence__fini(&msg->response);
}

bool
ondrejka_interface__srv__MyService_Event__are_equal(const ondrejka_interface__srv__MyService_Event * lhs, const ondrejka_interface__srv__MyService_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ondrejka_interface__srv__MyService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ondrejka_interface__srv__MyService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ondrejka_interface__srv__MyService_Event__copy(
  const ondrejka_interface__srv__MyService_Event * input,
  ondrejka_interface__srv__MyService_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ondrejka_interface__srv__MyService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ondrejka_interface__srv__MyService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ondrejka_interface__srv__MyService_Event *
ondrejka_interface__srv__MyService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Event * msg = (ondrejka_interface__srv__MyService_Event *)allocator.allocate(sizeof(ondrejka_interface__srv__MyService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ondrejka_interface__srv__MyService_Event));
  bool success = ondrejka_interface__srv__MyService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ondrejka_interface__srv__MyService_Event__destroy(ondrejka_interface__srv__MyService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ondrejka_interface__srv__MyService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ondrejka_interface__srv__MyService_Event__Sequence__init(ondrejka_interface__srv__MyService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Event * data = NULL;

  if (size) {
    data = (ondrejka_interface__srv__MyService_Event *)allocator.zero_allocate(size, sizeof(ondrejka_interface__srv__MyService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ondrejka_interface__srv__MyService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ondrejka_interface__srv__MyService_Event__fini(&data[i - 1]);
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
ondrejka_interface__srv__MyService_Event__Sequence__fini(ondrejka_interface__srv__MyService_Event__Sequence * array)
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
      ondrejka_interface__srv__MyService_Event__fini(&array->data[i]);
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

ondrejka_interface__srv__MyService_Event__Sequence *
ondrejka_interface__srv__MyService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ondrejka_interface__srv__MyService_Event__Sequence * array = (ondrejka_interface__srv__MyService_Event__Sequence *)allocator.allocate(sizeof(ondrejka_interface__srv__MyService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ondrejka_interface__srv__MyService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ondrejka_interface__srv__MyService_Event__Sequence__destroy(ondrejka_interface__srv__MyService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ondrejka_interface__srv__MyService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ondrejka_interface__srv__MyService_Event__Sequence__are_equal(const ondrejka_interface__srv__MyService_Event__Sequence * lhs, const ondrejka_interface__srv__MyService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ondrejka_interface__srv__MyService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ondrejka_interface__srv__MyService_Event__Sequence__copy(
  const ondrejka_interface__srv__MyService_Event__Sequence * input,
  ondrejka_interface__srv__MyService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ondrejka_interface__srv__MyService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ondrejka_interface__srv__MyService_Event * data =
      (ondrejka_interface__srv__MyService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ondrejka_interface__srv__MyService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ondrejka_interface__srv__MyService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ondrejka_interface__srv__MyService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
