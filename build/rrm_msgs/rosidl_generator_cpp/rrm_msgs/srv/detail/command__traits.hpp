// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrm_msgs:srv/Command.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rrm_msgs/srv/command.hpp"


#ifndef RRM_MSGS__SRV__DETAIL__COMMAND__TRAITS_HPP_
#define RRM_MSGS__SRV__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrm_msgs/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rrm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Request & msg, bool use_flow_style = false)
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

}  // namespace rrm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rrm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrm_msgs::srv::Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrm_msgs::srv::Command_Request & msg)
{
  return rrm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrm_msgs::srv::Command_Request>()
{
  return "rrm_msgs::srv::Command_Request";
}

template<>
inline const char * name<rrm_msgs::srv::Command_Request>()
{
  return "rrm_msgs/srv/Command_Request";
}

template<>
struct has_fixed_size<rrm_msgs::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rrm_msgs::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rrm_msgs::srv::Command_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_code
  {
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
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
  const Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << "\n";
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

inline std::string to_yaml(const Command_Response & msg, bool use_flow_style = false)
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

}  // namespace rrm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rrm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrm_msgs::srv::Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrm_msgs::srv::Command_Response & msg)
{
  return rrm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrm_msgs::srv::Command_Response>()
{
  return "rrm_msgs::srv::Command_Response";
}

template<>
inline const char * name<rrm_msgs::srv::Command_Response>()
{
  return "rrm_msgs/srv/Command_Response";
}

template<>
struct has_fixed_size<rrm_msgs::srv::Command_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rrm_msgs::srv::Command_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rrm_msgs::srv::Command_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rrm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Event & msg,
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
  const Command_Event & msg,
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

inline std::string to_yaml(const Command_Event & msg, bool use_flow_style = false)
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

}  // namespace rrm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rrm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrm_msgs::srv::Command_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrm_msgs::srv::Command_Event & msg)
{
  return rrm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrm_msgs::srv::Command_Event>()
{
  return "rrm_msgs::srv::Command_Event";
}

template<>
inline const char * name<rrm_msgs::srv::Command_Event>()
{
  return "rrm_msgs/srv/Command_Event";
}

template<>
struct has_fixed_size<rrm_msgs::srv::Command_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rrm_msgs::srv::Command_Event>
  : std::integral_constant<bool, has_bounded_size<rrm_msgs::srv::Command_Request>::value && has_bounded_size<rrm_msgs::srv::Command_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rrm_msgs::srv::Command_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrm_msgs::srv::Command>()
{
  return "rrm_msgs::srv::Command";
}

template<>
inline const char * name<rrm_msgs::srv::Command>()
{
  return "rrm_msgs/srv/Command";
}

template<>
struct has_fixed_size<rrm_msgs::srv::Command>
  : std::integral_constant<
    bool,
    has_fixed_size<rrm_msgs::srv::Command_Request>::value &&
    has_fixed_size<rrm_msgs::srv::Command_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrm_msgs::srv::Command>
  : std::integral_constant<
    bool,
    has_bounded_size<rrm_msgs::srv::Command_Request>::value &&
    has_bounded_size<rrm_msgs::srv::Command_Response>::value
  >
{
};

template<>
struct is_service<rrm_msgs::srv::Command>
  : std::true_type
{
};

template<>
struct is_service_request<rrm_msgs::srv::Command_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrm_msgs::srv::Command_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRM_MSGS__SRV__DETAIL__COMMAND__TRAITS_HPP_
