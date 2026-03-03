// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rrm_msgs:srv/Command.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rrm_msgs/srv/detail/command__rosidl_typesupport_introspection_c.h"
#include "rrm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rrm_msgs/srv/detail/command__functions.h"
#include "rrm_msgs/srv/detail/command__struct.h"


// Include directives for member types
// Member `positions`
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrm_msgs__srv__Command_Request__init(message_memory);
}

void rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_fini_function(void * message_memory)
{
  rrm_msgs__srv__Command_Request__fini(message_memory);
}

size_t rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__size_function__Command_Request__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_const_function__Command_Request__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_function__Command_Request__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__fetch_function__Command_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_const_function__Command_Request__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__assign_function__Command_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_function__Command_Request__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__resize_function__Command_Request__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__size_function__Command_Request__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_const_function__Command_Request__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_function__Command_Request__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__fetch_function__Command_Request__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_const_function__Command_Request__velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__assign_function__Command_Request__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_function__Command_Request__velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__resize_function__Command_Request__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_member_array[2] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Request, positions),  // bytes offset in struct
    NULL,  // default value
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__size_function__Command_Request__positions,  // size() function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_const_function__Command_Request__positions,  // get_const(index) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_function__Command_Request__positions,  // get(index) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__fetch_function__Command_Request__positions,  // fetch(index, &value) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__assign_function__Command_Request__positions,  // assign(index, value) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__resize_function__Command_Request__positions  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Request, velocities),  // bytes offset in struct
    NULL,  // default value
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__size_function__Command_Request__velocities,  // size() function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_const_function__Command_Request__velocities,  // get_const(index) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__get_function__Command_Request__velocities,  // get(index) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__fetch_function__Command_Request__velocities,  // fetch(index, &value) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__assign_function__Command_Request__velocities,  // assign(index, value) function pointer
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__resize_function__Command_Request__velocities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_members = {
  "rrm_msgs__srv",  // message namespace
  "Command_Request",  // message name
  2,  // number of fields
  sizeof(rrm_msgs__srv__Command_Request),
  false,  // has_any_key_member_
  rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_member_array,  // message members
  rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle = {
  0,
  &rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_members,
  get_message_typesupport_handle_function,
  &rrm_msgs__srv__Command_Request__get_type_hash,
  &rrm_msgs__srv__Command_Request__get_type_description,
  &rrm_msgs__srv__Command_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Request)() {
  if (!rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle.typesupport_identifier) {
    rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rrm_msgs/srv/detail/command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rrm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rrm_msgs/srv/detail/command__functions.h"
// already included above
// #include "rrm_msgs/srv/detail/command__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrm_msgs__srv__Command_Response__init(message_memory);
}

void rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_fini_function(void * message_memory)
{
  rrm_msgs__srv__Command_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_member_array[2] = {
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Response, result_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_members = {
  "rrm_msgs__srv",  // message namespace
  "Command_Response",  // message name
  2,  // number of fields
  sizeof(rrm_msgs__srv__Command_Response),
  false,  // has_any_key_member_
  rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_member_array,  // message members
  rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle = {
  0,
  &rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_members,
  get_message_typesupport_handle_function,
  &rrm_msgs__srv__Command_Response__get_type_hash,
  &rrm_msgs__srv__Command_Response__get_type_description,
  &rrm_msgs__srv__Command_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Response)() {
  if (!rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle.typesupport_identifier) {
    rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rrm_msgs/srv/detail/command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rrm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rrm_msgs/srv/detail/command__functions.h"
// already included above
// #include "rrm_msgs/srv/detail/command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rrm_msgs/srv/command.h"
// Member `request`
// Member `response`
// already included above
// #include "rrm_msgs/srv/detail/command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrm_msgs__srv__Command_Event__init(message_memory);
}

void rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_fini_function(void * message_memory)
{
  rrm_msgs__srv__Command_Event__fini(message_memory);
}

size_t rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__size_function__Command_Event__request(
  const void * untyped_member)
{
  const rrm_msgs__srv__Command_Request__Sequence * member =
    (const rrm_msgs__srv__Command_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_const_function__Command_Event__request(
  const void * untyped_member, size_t index)
{
  const rrm_msgs__srv__Command_Request__Sequence * member =
    (const rrm_msgs__srv__Command_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_function__Command_Event__request(
  void * untyped_member, size_t index)
{
  rrm_msgs__srv__Command_Request__Sequence * member =
    (rrm_msgs__srv__Command_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__fetch_function__Command_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rrm_msgs__srv__Command_Request * item =
    ((const rrm_msgs__srv__Command_Request *)
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_const_function__Command_Event__request(untyped_member, index));
  rrm_msgs__srv__Command_Request * value =
    (rrm_msgs__srv__Command_Request *)(untyped_value);
  *value = *item;
}

void rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__assign_function__Command_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rrm_msgs__srv__Command_Request * item =
    ((rrm_msgs__srv__Command_Request *)
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_function__Command_Event__request(untyped_member, index));
  const rrm_msgs__srv__Command_Request * value =
    (const rrm_msgs__srv__Command_Request *)(untyped_value);
  *item = *value;
}

bool rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__resize_function__Command_Event__request(
  void * untyped_member, size_t size)
{
  rrm_msgs__srv__Command_Request__Sequence * member =
    (rrm_msgs__srv__Command_Request__Sequence *)(untyped_member);
  rrm_msgs__srv__Command_Request__Sequence__fini(member);
  return rrm_msgs__srv__Command_Request__Sequence__init(member, size);
}

size_t rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__size_function__Command_Event__response(
  const void * untyped_member)
{
  const rrm_msgs__srv__Command_Response__Sequence * member =
    (const rrm_msgs__srv__Command_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_const_function__Command_Event__response(
  const void * untyped_member, size_t index)
{
  const rrm_msgs__srv__Command_Response__Sequence * member =
    (const rrm_msgs__srv__Command_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_function__Command_Event__response(
  void * untyped_member, size_t index)
{
  rrm_msgs__srv__Command_Response__Sequence * member =
    (rrm_msgs__srv__Command_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__fetch_function__Command_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rrm_msgs__srv__Command_Response * item =
    ((const rrm_msgs__srv__Command_Response *)
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_const_function__Command_Event__response(untyped_member, index));
  rrm_msgs__srv__Command_Response * value =
    (rrm_msgs__srv__Command_Response *)(untyped_value);
  *value = *item;
}

void rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__assign_function__Command_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rrm_msgs__srv__Command_Response * item =
    ((rrm_msgs__srv__Command_Response *)
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_function__Command_Event__response(untyped_member, index));
  const rrm_msgs__srv__Command_Response * value =
    (const rrm_msgs__srv__Command_Response *)(untyped_value);
  *item = *value;
}

bool rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__resize_function__Command_Event__response(
  void * untyped_member, size_t size)
{
  rrm_msgs__srv__Command_Response__Sequence * member =
    (rrm_msgs__srv__Command_Response__Sequence *)(untyped_member);
  rrm_msgs__srv__Command_Response__Sequence__fini(member);
  return rrm_msgs__srv__Command_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Event, request),  // bytes offset in struct
    NULL,  // default value
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__size_function__Command_Event__request,  // size() function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_const_function__Command_Event__request,  // get_const(index) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_function__Command_Event__request,  // get(index) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__fetch_function__Command_Event__request,  // fetch(index, &value) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__assign_function__Command_Event__request,  // assign(index, value) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__resize_function__Command_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rrm_msgs__srv__Command_Event, response),  // bytes offset in struct
    NULL,  // default value
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__size_function__Command_Event__response,  // size() function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_const_function__Command_Event__response,  // get_const(index) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__get_function__Command_Event__response,  // get(index) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__fetch_function__Command_Event__response,  // fetch(index, &value) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__assign_function__Command_Event__response,  // assign(index, value) function pointer
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__resize_function__Command_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_members = {
  "rrm_msgs__srv",  // message namespace
  "Command_Event",  // message name
  3,  // number of fields
  sizeof(rrm_msgs__srv__Command_Event),
  false,  // has_any_key_member_
  rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_member_array,  // message members
  rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_type_support_handle = {
  0,
  &rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_members,
  get_message_typesupport_handle_function,
  &rrm_msgs__srv__Command_Event__get_type_hash,
  &rrm_msgs__srv__Command_Event__get_type_description,
  &rrm_msgs__srv__Command_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Event)() {
  rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Request)();
  rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Response)();
  if (!rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_type_support_handle.typesupport_identifier) {
    rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rrm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rrm_msgs/srv/detail/command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_members = {
  "rrm_msgs__srv",  // service namespace
  "Command",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle,
  NULL,  // response message
  // rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle
  NULL  // event_message
  // rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle
};


static rosidl_service_type_support_t rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle = {
  0,
  &rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_members,
  get_service_typesupport_handle_function,
  &rrm_msgs__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle,
  &rrm_msgs__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle,
  &rrm_msgs__srv__Command_Event__rosidl_typesupport_introspection_c__Command_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rrm_msgs,
    srv,
    Command
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rrm_msgs,
    srv,
    Command
  ),
  &rrm_msgs__srv__Command__get_type_hash,
  &rrm_msgs__srv__Command__get_type_description,
  &rrm_msgs__srv__Command__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command)(void) {
  if (!rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle.typesupport_identifier) {
    rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrm_msgs, srv, Command_Event)()->data;
  }

  return &rrm_msgs__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle;
}
