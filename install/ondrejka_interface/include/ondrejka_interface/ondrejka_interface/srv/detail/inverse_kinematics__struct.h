// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ondrejka_interface:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/inverse_kinematics.h"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
#define ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InverseKinematics in the package ondrejka_interface.
typedef struct ondrejka_interface__srv__InverseKinematics_Request
{
  /// Žiadaná súradnica X v metroch
  double x;
  /// Žiadaná súradnica Y v metroch
  double y;
  /// Žiadaná súradnica Z v metroch
  double z;
} ondrejka_interface__srv__InverseKinematics_Request;

// Struct for a sequence of ondrejka_interface__srv__InverseKinematics_Request.
typedef struct ondrejka_interface__srv__InverseKinematics_Request__Sequence
{
  ondrejka_interface__srv__InverseKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ondrejka_interface__srv__InverseKinematics_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InverseKinematics in the package ondrejka_interface.
typedef struct ondrejka_interface__srv__InverseKinematics_Response
{
  /// Či sa podarilo nájsť riešenie (či je bod v dosahu)
  bool success;
  /// Voliteľné: vrátené vypočítané uhly q0, q1, q2
  rosidl_runtime_c__double__Sequence angles;
  /// Informácia pre používateľa ("OK", "Cieľ je príliš ďaleko", atď.)
  rosidl_runtime_c__String message;
} ondrejka_interface__srv__InverseKinematics_Response;

// Struct for a sequence of ondrejka_interface__srv__InverseKinematics_Response.
typedef struct ondrejka_interface__srv__InverseKinematics_Response__Sequence
{
  ondrejka_interface__srv__InverseKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ondrejka_interface__srv__InverseKinematics_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ondrejka_interface__srv__InverseKinematics_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ondrejka_interface__srv__InverseKinematics_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/InverseKinematics in the package ondrejka_interface.
typedef struct ondrejka_interface__srv__InverseKinematics_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ondrejka_interface__srv__InverseKinematics_Request__Sequence request;
  ondrejka_interface__srv__InverseKinematics_Response__Sequence response;
} ondrejka_interface__srv__InverseKinematics_Event;

// Struct for a sequence of ondrejka_interface__srv__InverseKinematics_Event.
typedef struct ondrejka_interface__srv__InverseKinematics_Event__Sequence
{
  ondrejka_interface__srv__InverseKinematics_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ondrejka_interface__srv__InverseKinematics_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
