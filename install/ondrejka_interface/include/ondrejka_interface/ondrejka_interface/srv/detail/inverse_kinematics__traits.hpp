// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ondrejka_interface:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/inverse_kinematics.hpp"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
#define ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ondrejka_interface/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ondrejka_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ondrejka_interface

namespace rosidl_generator_traits
{

[[deprecated("use ondrejka_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ondrejka_interface::srv::InverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ondrejka_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ondrejka_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ondrejka_interface::srv::InverseKinematics_Request & msg)
{
  return ondrejka_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ondrejka_interface::srv::InverseKinematics_Request>()
{
  return "ondrejka_interface::srv::InverseKinematics_Request";
}

template<>
inline const char * name<ondrejka_interface::srv::InverseKinematics_Request>()
{
  return "ondrejka_interface/srv/InverseKinematics_Request";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::InverseKinematics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ondrejka_interface::srv::InverseKinematics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ondrejka_interface::srv::InverseKinematics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ondrejka_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ondrejka_interface

namespace rosidl_generator_traits
{

[[deprecated("use ondrejka_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ondrejka_interface::srv::InverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ondrejka_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ondrejka_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ondrejka_interface::srv::InverseKinematics_Response & msg)
{
  return ondrejka_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ondrejka_interface::srv::InverseKinematics_Response>()
{
  return "ondrejka_interface::srv::InverseKinematics_Response";
}

template<>
inline const char * name<ondrejka_interface::srv::InverseKinematics_Response>()
{
  return "ondrejka_interface/srv/InverseKinematics_Response";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::InverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ondrejka_interface::srv::InverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ondrejka_interface::srv::InverseKinematics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ondrejka_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ondrejka_interface

namespace rosidl_generator_traits
{

[[deprecated("use ondrejka_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ondrejka_interface::srv::InverseKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ondrejka_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ondrejka_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ondrejka_interface::srv::InverseKinematics_Event & msg)
{
  return ondrejka_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ondrejka_interface::srv::InverseKinematics_Event>()
{
  return "ondrejka_interface::srv::InverseKinematics_Event";
}

template<>
inline const char * name<ondrejka_interface::srv::InverseKinematics_Event>()
{
  return "ondrejka_interface/srv/InverseKinematics_Event";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::InverseKinematics_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ondrejka_interface::srv::InverseKinematics_Event>
  : std::integral_constant<bool, has_bounded_size<ondrejka_interface::srv::InverseKinematics_Request>::value && has_bounded_size<ondrejka_interface::srv::InverseKinematics_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ondrejka_interface::srv::InverseKinematics_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ondrejka_interface::srv::InverseKinematics>()
{
  return "ondrejka_interface::srv::InverseKinematics";
}

template<>
inline const char * name<ondrejka_interface::srv::InverseKinematics>()
{
  return "ondrejka_interface/srv/InverseKinematics";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::InverseKinematics>
  : std::integral_constant<
    bool,
    has_fixed_size<ondrejka_interface::srv::InverseKinematics_Request>::value &&
    has_fixed_size<ondrejka_interface::srv::InverseKinematics_Response>::value
  >
{
};

template<>
struct has_bounded_size<ondrejka_interface::srv::InverseKinematics>
  : std::integral_constant<
    bool,
    has_bounded_size<ondrejka_interface::srv::InverseKinematics_Request>::value &&
    has_bounded_size<ondrejka_interface::srv::InverseKinematics_Response>::value
  >
{
};

template<>
struct is_service<ondrejka_interface::srv::InverseKinematics>
  : std::true_type
{
};

template<>
struct is_service_request<ondrejka_interface::srv::InverseKinematics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ondrejka_interface::srv::InverseKinematics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
