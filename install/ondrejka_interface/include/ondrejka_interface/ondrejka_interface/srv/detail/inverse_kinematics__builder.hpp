// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ondrejka_interface:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/inverse_kinematics.hpp"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
#define ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ondrejka_interface/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ondrejka_interface
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Request_z
{
public:
  explicit Init_InverseKinematics_Request_z(::ondrejka_interface::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  ::ondrejka_interface::srv::InverseKinematics_Request z(::ondrejka_interface::srv::InverseKinematics_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_y
{
public:
  explicit Init_InverseKinematics_Request_y(::ondrejka_interface::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_z y(::ondrejka_interface::srv::InverseKinematics_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_InverseKinematics_Request_z(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_x
{
public:
  Init_InverseKinematics_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Request_y x(::ondrejka_interface::srv::InverseKinematics_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_InverseKinematics_Request_y(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ondrejka_interface::srv::InverseKinematics_Request>()
{
  return ondrejka_interface::srv::builder::Init_InverseKinematics_Request_x();
}

}  // namespace ondrejka_interface


namespace ondrejka_interface
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Response_message
{
public:
  explicit Init_InverseKinematics_Response_message(::ondrejka_interface::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  ::ondrejka_interface::srv::InverseKinematics_Response message(::ondrejka_interface::srv::InverseKinematics_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_angles
{
public:
  explicit Init_InverseKinematics_Response_angles(::ondrejka_interface::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Response_message angles(::ondrejka_interface::srv::InverseKinematics_Response::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_InverseKinematics_Response_message(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_success
{
public:
  Init_InverseKinematics_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Response_angles success(::ondrejka_interface::srv::InverseKinematics_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InverseKinematics_Response_angles(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ondrejka_interface::srv::InverseKinematics_Response>()
{
  return ondrejka_interface::srv::builder::Init_InverseKinematics_Response_success();
}

}  // namespace ondrejka_interface


namespace ondrejka_interface
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Event_response
{
public:
  explicit Init_InverseKinematics_Event_response(::ondrejka_interface::srv::InverseKinematics_Event & msg)
  : msg_(msg)
  {}
  ::ondrejka_interface::srv::InverseKinematics_Event response(::ondrejka_interface::srv::InverseKinematics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Event msg_;
};

class Init_InverseKinematics_Event_request
{
public:
  explicit Init_InverseKinematics_Event_request(::ondrejka_interface::srv::InverseKinematics_Event & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Event_response request(::ondrejka_interface::srv::InverseKinematics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InverseKinematics_Event_response(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Event msg_;
};

class Init_InverseKinematics_Event_info
{
public:
  Init_InverseKinematics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Event_request info(::ondrejka_interface::srv::InverseKinematics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InverseKinematics_Event_request(msg_);
  }

private:
  ::ondrejka_interface::srv::InverseKinematics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ondrejka_interface::srv::InverseKinematics_Event>()
{
  return ondrejka_interface::srv::builder::Init_InverseKinematics_Event_info();
}

}  // namespace ondrejka_interface

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
