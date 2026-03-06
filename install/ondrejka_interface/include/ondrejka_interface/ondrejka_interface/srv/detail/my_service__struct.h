// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/my_service.h"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__STRUCT_H_
#define ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MyService in the package ondrejka_interface.
typedef struct ondrejka_interface__srv__MyService_Request
{
  rosidl_runtime_c__double__Sequence positions;
  double velocity;
  bool save;
} ondrejka_interface__srv__MyService_Request;

// Struct for a sequence of ondrejka_interface__srv__MyService_Request.
typedef struct ondrejka_interface__srv__MyService_Request__Sequence
{
  ondrejka_interface__srv__MyService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ondrejka_interface__srv__MyService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MyService in the package ondrejka_interface.
typedef struct ondrejka_interface__srv__MyService_Response
{
  bool result;
  rosidl_runtime_c__String message;
} ondrejka_interface__srv__MyService_Response;

// Struct for a sequence of ondrejka_interface__srv__MyService_Response.
typedef struct ondrejka_interface__srv__MyService_Response__Sequence
{
  ondrejka_interface__srv__MyService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ondrejka_interface__srv__MyService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ondrejka_interface__srv__MyService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ondrejka_interface__srv__MyService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MyService in the package ondrejka_interface.
typedef struct ondrejka_interface__srv__MyService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ondrejka_interface__srv__MyService_Request__Sequence request;
  ondrejka_interface__srv__MyService_Response__Sequence response;
} ondrejka_interface__srv__MyService_Event;

// Struct for a sequence of ondrejka_interface__srv__MyService_Event.
typedef struct ondrejka_interface__srv__MyService_Event__Sequence
{
  ondrejka_interface__srv__MyService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ondrejka_interface__srv__MyService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__STRUCT_H_
