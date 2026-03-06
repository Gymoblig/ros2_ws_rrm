// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/my_service.hpp"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__BUILDER_HPP_
#define ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ondrejka_interface/srv/detail/my_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ondrejka_interface
{

namespace srv
{

namespace builder
{

class Init_MyService_Request_save
{
public:
  explicit Init_MyService_Request_save(::ondrejka_interface::srv::MyService_Request & msg)
  : msg_(msg)
  {}
  ::ondrejka_interface::srv::MyService_Request save(::ondrejka_interface::srv::MyService_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Request msg_;
};

class Init_MyService_Request_velocity
{
public:
  explicit Init_MyService_Request_velocity(::ondrejka_interface::srv::MyService_Request & msg)
  : msg_(msg)
  {}
  Init_MyService_Request_save velocity(::ondrejka_interface::srv::MyService_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MyService_Request_save(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Request msg_;
};

class Init_MyService_Request_positions
{
public:
  Init_MyService_Request_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyService_Request_velocity positions(::ondrejka_interface::srv::MyService_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_MyService_Request_velocity(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ondrejka_interface::srv::MyService_Request>()
{
  return ondrejka_interface::srv::builder::Init_MyService_Request_positions();
}

}  // namespace ondrejka_interface


namespace ondrejka_interface
{

namespace srv
{

namespace builder
{

class Init_MyService_Response_message
{
public:
  explicit Init_MyService_Response_message(::ondrejka_interface::srv::MyService_Response & msg)
  : msg_(msg)
  {}
  ::ondrejka_interface::srv::MyService_Response message(::ondrejka_interface::srv::MyService_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Response msg_;
};

class Init_MyService_Response_result
{
public:
  Init_MyService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyService_Response_message result(::ondrejka_interface::srv::MyService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MyService_Response_message(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ondrejka_interface::srv::MyService_Response>()
{
  return ondrejka_interface::srv::builder::Init_MyService_Response_result();
}

}  // namespace ondrejka_interface


namespace ondrejka_interface
{

namespace srv
{

namespace builder
{

class Init_MyService_Event_response
{
public:
  explicit Init_MyService_Event_response(::ondrejka_interface::srv::MyService_Event & msg)
  : msg_(msg)
  {}
  ::ondrejka_interface::srv::MyService_Event response(::ondrejka_interface::srv::MyService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Event msg_;
};

class Init_MyService_Event_request
{
public:
  explicit Init_MyService_Event_request(::ondrejka_interface::srv::MyService_Event & msg)
  : msg_(msg)
  {}
  Init_MyService_Event_response request(::ondrejka_interface::srv::MyService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MyService_Event_response(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Event msg_;
};

class Init_MyService_Event_info
{
public:
  Init_MyService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyService_Event_request info(::ondrejka_interface::srv::MyService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MyService_Event_request(msg_);
  }

private:
  ::ondrejka_interface::srv::MyService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ondrejka_interface::srv::MyService_Event>()
{
  return ondrejka_interface::srv::builder::Init_MyService_Event_info();
}

}  // namespace ondrejka_interface

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__BUILDER_HPP_
