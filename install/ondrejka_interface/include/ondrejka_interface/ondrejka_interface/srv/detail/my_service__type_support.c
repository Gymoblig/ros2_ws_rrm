// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ondrejka_interface/srv/detail/my_service__rosidl_typesupport_introspection_c.h"
#include "ondrejka_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ondrejka_interface/srv/detail/my_service__functions.h"
#include "ondrejka_interface/srv/detail/my_service__struct.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ondrejka_interface__srv__MyService_Request__init(message_memory);
}

void ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_fini_function(void * message_memory)
{
  ondrejka_interface__srv__MyService_Request__fini(message_memory);
}

size_t ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__size_function__MyService_Request__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__get_const_function__MyService_Request__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__get_function__MyService_Request__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__fetch_function__MyService_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__get_const_function__MyService_Request__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__assign_function__MyService_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__get_function__MyService_Request__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__resize_function__MyService_Request__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_member_array[3] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface__srv__MyService_Request, positions),  // bytes offset in struct
    NULL,  // default value
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__size_function__MyService_Request__positions,  // size() function pointer
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__get_const_function__MyService_Request__positions,  // get_const(index) function pointer
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__get_function__MyService_Request__positions,  // get(index) function pointer
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__fetch_function__MyService_Request__positions,  // fetch(index, &value) function pointer
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__assign_function__MyService_Request__positions,  // assign(index, value) function pointer
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__resize_function__MyService_Request__positions  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface__srv__MyService_Request, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "save",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface__srv__MyService_Request, save),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_members = {
  "ondrejka_interface__srv",  // message namespace
  "MyService_Request",  // message name
  3,  // number of fields
  sizeof(ondrejka_interface__srv__MyService_Request),
  false,  // has_any_key_member_
  ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_member_array,  // message members
  ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_type_support_handle = {
  0,
  &ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_members,
  get_message_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Request__get_type_hash,
  &ondrejka_interface__srv__MyService_Request__get_type_description,
  &ondrejka_interface__srv__MyService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ondrejka_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Request)() {
  if (!ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_type_support_handle.typesupport_identifier) {
    ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ondrejka_interface/srv/detail/my_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ondrejka_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__functions.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ondrejka_interface__srv__MyService_Response__init(message_memory);
}

void ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_fini_function(void * message_memory)
{
  ondrejka_interface__srv__MyService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface__srv__MyService_Response, result),  // bytes offset in struct
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
    offsetof(ondrejka_interface__srv__MyService_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_members = {
  "ondrejka_interface__srv",  // message namespace
  "MyService_Response",  // message name
  2,  // number of fields
  sizeof(ondrejka_interface__srv__MyService_Response),
  false,  // has_any_key_member_
  ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_member_array,  // message members
  ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle = {
  0,
  &ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_members,
  get_message_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Response__get_type_hash,
  &ondrejka_interface__srv__MyService_Response__get_type_description,
  &ondrejka_interface__srv__MyService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ondrejka_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Response)() {
  if (!ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle.typesupport_identifier) {
    ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ondrejka_interface/srv/detail/my_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ondrejka_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__functions.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ondrejka_interface/srv/my_service.h"
// Member `request`
// Member `response`
// already included above
// #include "ondrejka_interface/srv/detail/my_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ondrejka_interface__srv__MyService_Event__init(message_memory);
}

void ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_fini_function(void * message_memory)
{
  ondrejka_interface__srv__MyService_Event__fini(message_memory);
}

size_t ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__size_function__MyService_Event__request(
  const void * untyped_member)
{
  const ondrejka_interface__srv__MyService_Request__Sequence * member =
    (const ondrejka_interface__srv__MyService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_const_function__MyService_Event__request(
  const void * untyped_member, size_t index)
{
  const ondrejka_interface__srv__MyService_Request__Sequence * member =
    (const ondrejka_interface__srv__MyService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_function__MyService_Event__request(
  void * untyped_member, size_t index)
{
  ondrejka_interface__srv__MyService_Request__Sequence * member =
    (ondrejka_interface__srv__MyService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__fetch_function__MyService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ondrejka_interface__srv__MyService_Request * item =
    ((const ondrejka_interface__srv__MyService_Request *)
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_const_function__MyService_Event__request(untyped_member, index));
  ondrejka_interface__srv__MyService_Request * value =
    (ondrejka_interface__srv__MyService_Request *)(untyped_value);
  *value = *item;
}

void ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__assign_function__MyService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ondrejka_interface__srv__MyService_Request * item =
    ((ondrejka_interface__srv__MyService_Request *)
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_function__MyService_Event__request(untyped_member, index));
  const ondrejka_interface__srv__MyService_Request * value =
    (const ondrejka_interface__srv__MyService_Request *)(untyped_value);
  *item = *value;
}

bool ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__resize_function__MyService_Event__request(
  void * untyped_member, size_t size)
{
  ondrejka_interface__srv__MyService_Request__Sequence * member =
    (ondrejka_interface__srv__MyService_Request__Sequence *)(untyped_member);
  ondrejka_interface__srv__MyService_Request__Sequence__fini(member);
  return ondrejka_interface__srv__MyService_Request__Sequence__init(member, size);
}

size_t ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__size_function__MyService_Event__response(
  const void * untyped_member)
{
  const ondrejka_interface__srv__MyService_Response__Sequence * member =
    (const ondrejka_interface__srv__MyService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_const_function__MyService_Event__response(
  const void * untyped_member, size_t index)
{
  const ondrejka_interface__srv__MyService_Response__Sequence * member =
    (const ondrejka_interface__srv__MyService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_function__MyService_Event__response(
  void * untyped_member, size_t index)
{
  ondrejka_interface__srv__MyService_Response__Sequence * member =
    (ondrejka_interface__srv__MyService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__fetch_function__MyService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ondrejka_interface__srv__MyService_Response * item =
    ((const ondrejka_interface__srv__MyService_Response *)
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_const_function__MyService_Event__response(untyped_member, index));
  ondrejka_interface__srv__MyService_Response * value =
    (ondrejka_interface__srv__MyService_Response *)(untyped_value);
  *value = *item;
}

void ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__assign_function__MyService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ondrejka_interface__srv__MyService_Response * item =
    ((ondrejka_interface__srv__MyService_Response *)
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_function__MyService_Event__response(untyped_member, index));
  const ondrejka_interface__srv__MyService_Response * value =
    (const ondrejka_interface__srv__MyService_Response *)(untyped_value);
  *item = *value;
}

bool ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__resize_function__MyService_Event__response(
  void * untyped_member, size_t size)
{
  ondrejka_interface__srv__MyService_Response__Sequence * member =
    (ondrejka_interface__srv__MyService_Response__Sequence *)(untyped_member);
  ondrejka_interface__srv__MyService_Response__Sequence__fini(member);
  return ondrejka_interface__srv__MyService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface__srv__MyService_Event, info),  // bytes offset in struct
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
    offsetof(ondrejka_interface__srv__MyService_Event, request),  // bytes offset in struct
    NULL,  // default value
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__size_function__MyService_Event__request,  // size() function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_const_function__MyService_Event__request,  // get_const(index) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_function__MyService_Event__request,  // get(index) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__fetch_function__MyService_Event__request,  // fetch(index, &value) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__assign_function__MyService_Event__request,  // assign(index, value) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__resize_function__MyService_Event__request  // resize(index) function pointer
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
    offsetof(ondrejka_interface__srv__MyService_Event, response),  // bytes offset in struct
    NULL,  // default value
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__size_function__MyService_Event__response,  // size() function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_const_function__MyService_Event__response,  // get_const(index) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__get_function__MyService_Event__response,  // get(index) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__fetch_function__MyService_Event__response,  // fetch(index, &value) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__assign_function__MyService_Event__response,  // assign(index, value) function pointer
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__resize_function__MyService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_members = {
  "ondrejka_interface__srv",  // message namespace
  "MyService_Event",  // message name
  3,  // number of fields
  sizeof(ondrejka_interface__srv__MyService_Event),
  false,  // has_any_key_member_
  ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_member_array,  // message members
  ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_type_support_handle = {
  0,
  &ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_members,
  get_message_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Event__get_type_hash,
  &ondrejka_interface__srv__MyService_Event__get_type_description,
  &ondrejka_interface__srv__MyService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ondrejka_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Event)() {
  ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Request)();
  ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Response)();
  if (!ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_type_support_handle.typesupport_identifier) {
    ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ondrejka_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_members = {
  "ondrejka_interface__srv",  // service namespace
  "MyService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_Request_message_type_support_handle,
  NULL,  // response message
  // ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle
  NULL  // event_message
  // ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle
};


static rosidl_service_type_support_t ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_type_support_handle = {
  0,
  &ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_members,
  get_service_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Request__rosidl_typesupport_introspection_c__MyService_Request_message_type_support_handle,
  &ondrejka_interface__srv__MyService_Response__rosidl_typesupport_introspection_c__MyService_Response_message_type_support_handle,
  &ondrejka_interface__srv__MyService_Event__rosidl_typesupport_introspection_c__MyService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ondrejka_interface,
    srv,
    MyService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ondrejka_interface,
    srv,
    MyService
  ),
  &ondrejka_interface__srv__MyService__get_type_hash,
  &ondrejka_interface__srv__MyService__get_type_description,
  &ondrejka_interface__srv__MyService__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ondrejka_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService)(void) {
  if (!ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_type_support_handle.typesupport_identifier) {
    ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ondrejka_interface, srv, MyService_Event)()->data;
  }

  return &ondrejka_interface__srv__detail__my_service__rosidl_typesupport_introspection_c__MyService_service_type_support_handle;
}
