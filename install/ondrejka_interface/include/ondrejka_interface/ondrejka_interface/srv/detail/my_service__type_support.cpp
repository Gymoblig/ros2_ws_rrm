// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ondrejka_interface/srv/detail/my_service__functions.h"
#include "ondrejka_interface/srv/detail/my_service__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ondrejka_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MyService_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ondrejka_interface::srv::MyService_Request(_init);
}

void MyService_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ondrejka_interface::srv::MyService_Request *>(message_memory);
  typed_message->~MyService_Request();
}

size_t size_function__MyService_Request__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MyService_Request__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MyService_Request__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MyService_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MyService_Request__positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MyService_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MyService_Request__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MyService_Request__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MyService_Request_message_member_array[3] = {
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Request, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MyService_Request__positions,  // size() function pointer
    get_const_function__MyService_Request__positions,  // get_const(index) function pointer
    get_function__MyService_Request__positions,  // get(index) function pointer
    fetch_function__MyService_Request__positions,  // fetch(index, &value) function pointer
    assign_function__MyService_Request__positions,  // assign(index, value) function pointer
    resize_function__MyService_Request__positions  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Request, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "save",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Request, save),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MyService_Request_message_members = {
  "ondrejka_interface::srv",  // message namespace
  "MyService_Request",  // message name
  3,  // number of fields
  sizeof(ondrejka_interface::srv::MyService_Request),
  false,  // has_any_key_member_
  MyService_Request_message_member_array,  // message members
  MyService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MyService_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MyService_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyService_Request_message_members,
  get_message_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Request__get_type_hash,
  &ondrejka_interface__srv__MyService_Request__get_type_description,
  &ondrejka_interface__srv__MyService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ondrejka_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ondrejka_interface::srv::MyService_Request>()
{
  return &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ondrejka_interface, srv, MyService_Request)() {
  return &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__functions.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ondrejka_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MyService_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ondrejka_interface::srv::MyService_Response(_init);
}

void MyService_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ondrejka_interface::srv::MyService_Response *>(message_memory);
  typed_message->~MyService_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MyService_Response_message_member_array[2] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MyService_Response_message_members = {
  "ondrejka_interface::srv",  // message namespace
  "MyService_Response",  // message name
  2,  // number of fields
  sizeof(ondrejka_interface::srv::MyService_Response),
  false,  // has_any_key_member_
  MyService_Response_message_member_array,  // message members
  MyService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MyService_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MyService_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyService_Response_message_members,
  get_message_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Response__get_type_hash,
  &ondrejka_interface__srv__MyService_Response__get_type_description,
  &ondrejka_interface__srv__MyService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ondrejka_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ondrejka_interface::srv::MyService_Response>()
{
  return &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ondrejka_interface, srv, MyService_Response)() {
  return &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__functions.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ondrejka_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MyService_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ondrejka_interface::srv::MyService_Event(_init);
}

void MyService_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ondrejka_interface::srv::MyService_Event *>(message_memory);
  typed_message->~MyService_Event();
}

size_t size_function__MyService_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ondrejka_interface::srv::MyService_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MyService_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ondrejka_interface::srv::MyService_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__MyService_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ondrejka_interface::srv::MyService_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__MyService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ondrejka_interface::srv::MyService_Request *>(
    get_const_function__MyService_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ondrejka_interface::srv::MyService_Request *>(untyped_value);
  value = item;
}

void assign_function__MyService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ondrejka_interface::srv::MyService_Request *>(
    get_function__MyService_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ondrejka_interface::srv::MyService_Request *>(untyped_value);
  item = value;
}

void resize_function__MyService_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ondrejka_interface::srv::MyService_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MyService_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ondrejka_interface::srv::MyService_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MyService_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ondrejka_interface::srv::MyService_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__MyService_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ondrejka_interface::srv::MyService_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__MyService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ondrejka_interface::srv::MyService_Response *>(
    get_const_function__MyService_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ondrejka_interface::srv::MyService_Response *>(untyped_value);
  value = item;
}

void assign_function__MyService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ondrejka_interface::srv::MyService_Response *>(
    get_function__MyService_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ondrejka_interface::srv::MyService_Response *>(untyped_value);
  item = value;
}

void resize_function__MyService_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ondrejka_interface::srv::MyService_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MyService_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ondrejka_interface::srv::MyService_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__MyService_Event__request,  // size() function pointer
    get_const_function__MyService_Event__request,  // get_const(index) function pointer
    get_function__MyService_Event__request,  // get(index) function pointer
    fetch_function__MyService_Event__request,  // fetch(index, &value) function pointer
    assign_function__MyService_Event__request,  // assign(index, value) function pointer
    resize_function__MyService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ondrejka_interface::srv::MyService_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ondrejka_interface::srv::MyService_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__MyService_Event__response,  // size() function pointer
    get_const_function__MyService_Event__response,  // get_const(index) function pointer
    get_function__MyService_Event__response,  // get(index) function pointer
    fetch_function__MyService_Event__response,  // fetch(index, &value) function pointer
    assign_function__MyService_Event__response,  // assign(index, value) function pointer
    resize_function__MyService_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MyService_Event_message_members = {
  "ondrejka_interface::srv",  // message namespace
  "MyService_Event",  // message name
  3,  // number of fields
  sizeof(ondrejka_interface::srv::MyService_Event),
  false,  // has_any_key_member_
  MyService_Event_message_member_array,  // message members
  MyService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  MyService_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MyService_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyService_Event_message_members,
  get_message_typesupport_handle_function,
  &ondrejka_interface__srv__MyService_Event__get_type_hash,
  &ondrejka_interface__srv__MyService_Event__get_type_description,
  &ondrejka_interface__srv__MyService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ondrejka_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ondrejka_interface::srv::MyService_Event>()
{
  return &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ondrejka_interface, srv, MyService_Event)() {
  return &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__functions.h"
// already included above
// #include "ondrejka_interface/srv/detail/my_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ondrejka_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MyService_service_members = {
  "ondrejka_interface::srv",  // service namespace
  "MyService",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<ondrejka_interface::srv::MyService>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t MyService_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyService_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ondrejka_interface::srv::MyService_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ondrejka_interface::srv::MyService_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ondrejka_interface::srv::MyService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ondrejka_interface::srv::MyService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ondrejka_interface::srv::MyService>,
  &ondrejka_interface__srv__MyService__get_type_hash,
  &ondrejka_interface__srv__MyService__get_type_description,
  &ondrejka_interface__srv__MyService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ondrejka_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ondrejka_interface::srv::MyService>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ondrejka_interface::srv::rosidl_typesupport_introspection_cpp::MyService_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ondrejka_interface::srv::MyService_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ondrejka_interface::srv::MyService_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ondrejka_interface::srv::MyService_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ondrejka_interface, srv, MyService)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ondrejka_interface::srv::MyService>();
}

#ifdef __cplusplus
}
#endif
