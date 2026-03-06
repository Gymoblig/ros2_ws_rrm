// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/my_service.hpp"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__TRAITS_HPP_
#define ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ondrejka_interface/srv/detail/my_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ondrejka_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const MyService_Request & msg,
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

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: save
  {
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyService_Request & msg,
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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyService_Request & msg, bool use_flow_style = false)
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
  const ondrejka_interface::srv::MyService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ondrejka_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ondrejka_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ondrejka_interface::srv::MyService_Request & msg)
{
  return ondrejka_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ondrejka_interface::srv::MyService_Request>()
{
  return "ondrejka_interface::srv::MyService_Request";
}

template<>
inline const char * name<ondrejka_interface::srv::MyService_Request>()
{
  return "ondrejka_interface/srv/MyService_Request";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::MyService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ondrejka_interface::srv::MyService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ondrejka_interface::srv::MyService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ondrejka_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const MyService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
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
  const MyService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
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

inline std::string to_yaml(const MyService_Response & msg, bool use_flow_style = false)
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
  const ondrejka_interface::srv::MyService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ondrejka_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ondrejka_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ondrejka_interface::srv::MyService_Response & msg)
{
  return ondrejka_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ondrejka_interface::srv::MyService_Response>()
{
  return "ondrejka_interface::srv::MyService_Response";
}

template<>
inline const char * name<ondrejka_interface::srv::MyService_Response>()
{
  return "ondrejka_interface/srv/MyService_Response";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::MyService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ondrejka_interface::srv::MyService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ondrejka_interface::srv::MyService_Response>
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
  const MyService_Event & msg,
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
  const MyService_Event & msg,
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

inline std::string to_yaml(const MyService_Event & msg, bool use_flow_style = false)
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
  const ondrejka_interface::srv::MyService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ondrejka_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ondrejka_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ondrejka_interface::srv::MyService_Event & msg)
{
  return ondrejka_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ondrejka_interface::srv::MyService_Event>()
{
  return "ondrejka_interface::srv::MyService_Event";
}

template<>
inline const char * name<ondrejka_interface::srv::MyService_Event>()
{
  return "ondrejka_interface/srv/MyService_Event";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::MyService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ondrejka_interface::srv::MyService_Event>
  : std::integral_constant<bool, has_bounded_size<ondrejka_interface::srv::MyService_Request>::value && has_bounded_size<ondrejka_interface::srv::MyService_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ondrejka_interface::srv::MyService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ondrejka_interface::srv::MyService>()
{
  return "ondrejka_interface::srv::MyService";
}

template<>
inline const char * name<ondrejka_interface::srv::MyService>()
{
  return "ondrejka_interface/srv/MyService";
}

template<>
struct has_fixed_size<ondrejka_interface::srv::MyService>
  : std::integral_constant<
    bool,
    has_fixed_size<ondrejka_interface::srv::MyService_Request>::value &&
    has_fixed_size<ondrejka_interface::srv::MyService_Response>::value
  >
{
};

template<>
struct has_bounded_size<ondrejka_interface::srv::MyService>
  : std::integral_constant<
    bool,
    has_bounded_size<ondrejka_interface::srv::MyService_Request>::value &&
    has_bounded_size<ondrejka_interface::srv::MyService_Response>::value
  >
{
};

template<>
struct is_service<ondrejka_interface::srv::MyService>
  : std::true_type
{
};

template<>
struct is_service_request<ondrejka_interface::srv::MyService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ondrejka_interface::srv::MyService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__TRAITS_HPP_
