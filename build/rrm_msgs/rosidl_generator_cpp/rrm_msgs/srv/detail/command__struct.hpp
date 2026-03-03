// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrm_msgs:srv/Command.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rrm_msgs/srv/command.hpp"


#ifndef RRM_MSGS__SRV__DETAIL__COMMAND__STRUCT_HPP_
#define RRM_MSGS__SRV__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrm_msgs__srv__Command_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrm_msgs__srv__Command_Request __declspec(deprecated)
#endif

namespace rrm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Request_
{
  using Type = Command_Request_<ContainerAllocator>;

  explicit Command_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Command_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _velocities_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocities_type velocities;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrm_msgs::srv::Command_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrm_msgs::srv::Command_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrm_msgs::srv::Command_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrm_msgs::srv::Command_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrm_msgs__srv__Command_Request
    std::shared_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrm_msgs__srv__Command_Request
    std::shared_ptr<rrm_msgs::srv::Command_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Request_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Request_

// alias to use template instance with default allocator
using Command_Request =
  rrm_msgs::srv::Command_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrm_msgs


#ifndef _WIN32
# define DEPRECATED__rrm_msgs__srv__Command_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrm_msgs__srv__Command_Response __declspec(deprecated)
#endif

namespace rrm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Response_
{
  using Type = Command_Response_<ContainerAllocator>;

  explicit Command_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0l;
      this->message = "";
    }
  }

  explicit Command_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _result_code_type =
    int32_t;
  _result_code_type result_code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__result_code(
    const int32_t & _arg)
  {
    this->result_code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrm_msgs::srv::Command_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrm_msgs::srv::Command_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrm_msgs::srv::Command_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrm_msgs::srv::Command_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrm_msgs__srv__Command_Response
    std::shared_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrm_msgs__srv__Command_Response
    std::shared_ptr<rrm_msgs::srv::Command_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Response_ & other) const
  {
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Response_

// alias to use template instance with default allocator
using Command_Response =
  rrm_msgs::srv::Command_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrm_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rrm_msgs__srv__Command_Event __attribute__((deprecated))
#else
# define DEPRECATED__rrm_msgs__srv__Command_Event __declspec(deprecated)
#endif

namespace rrm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Event_
{
  using Type = Command_Event_<ContainerAllocator>;

  explicit Command_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Command_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rrm_msgs::srv::Command_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rrm_msgs::srv::Command_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rrm_msgs::srv::Command_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rrm_msgs::srv::Command_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rrm_msgs::srv::Command_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rrm_msgs::srv::Command_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rrm_msgs::srv::Command_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rrm_msgs::srv::Command_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrm_msgs::srv::Command_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrm_msgs::srv::Command_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrm_msgs::srv::Command_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrm_msgs::srv::Command_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrm_msgs__srv__Command_Event
    std::shared_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrm_msgs__srv__Command_Event
    std::shared_ptr<rrm_msgs::srv::Command_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Event_

// alias to use template instance with default allocator
using Command_Event =
  rrm_msgs::srv::Command_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrm_msgs

namespace rrm_msgs
{

namespace srv
{

struct Command
{
  using Request = rrm_msgs::srv::Command_Request;
  using Response = rrm_msgs::srv::Command_Response;
  using Event = rrm_msgs::srv::Command_Event;
};

}  // namespace srv

}  // namespace rrm_msgs

#endif  // RRM_MSGS__SRV__DETAIL__COMMAND__STRUCT_HPP_
