// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/my_service.hpp"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__STRUCT_HPP_
#define ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ondrejka_interface__srv__MyService_Request __attribute__((deprecated))
#else
# define DEPRECATED__ondrejka_interface__srv__MyService_Request __declspec(deprecated)
#endif

namespace ondrejka_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyService_Request_
{
  using Type = MyService_Request_<ContainerAllocator>;

  explicit MyService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->save = false;
    }
  }

  explicit MyService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->save = false;
    }
  }

  // field types and members
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _save_type =
    bool;
  _save_type save;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__save(
    const bool & _arg)
  {
    this->save = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ondrejka_interface::srv::MyService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ondrejka_interface::srv::MyService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ondrejka_interface__srv__MyService_Request
    std::shared_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ondrejka_interface__srv__MyService_Request
    std::shared_ptr<ondrejka_interface::srv::MyService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyService_Request_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->save != other.save) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyService_Request_

// alias to use template instance with default allocator
using MyService_Request =
  ondrejka_interface::srv::MyService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ondrejka_interface


#ifndef _WIN32
# define DEPRECATED__ondrejka_interface__srv__MyService_Response __attribute__((deprecated))
#else
# define DEPRECATED__ondrejka_interface__srv__MyService_Response __declspec(deprecated)
#endif

namespace ondrejka_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyService_Response_
{
  using Type = MyService_Response_<ContainerAllocator>;

  explicit MyService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->message = "";
    }
  }

  explicit MyService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->message = "";
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
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
    ondrejka_interface::srv::MyService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ondrejka_interface::srv::MyService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ondrejka_interface__srv__MyService_Response
    std::shared_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ondrejka_interface__srv__MyService_Response
    std::shared_ptr<ondrejka_interface::srv::MyService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyService_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyService_Response_

// alias to use template instance with default allocator
using MyService_Response =
  ondrejka_interface::srv::MyService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ondrejka_interface


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ondrejka_interface__srv__MyService_Event __attribute__((deprecated))
#else
# define DEPRECATED__ondrejka_interface__srv__MyService_Event __declspec(deprecated)
#endif

namespace ondrejka_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyService_Event_
{
  using Type = MyService_Event_<ContainerAllocator>;

  explicit MyService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MyService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ondrejka_interface::srv::MyService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ondrejka_interface::srv::MyService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ondrejka_interface::srv::MyService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ondrejka_interface::srv::MyService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ondrejka_interface::srv::MyService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ondrejka_interface::srv::MyService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ondrejka_interface__srv__MyService_Event
    std::shared_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ondrejka_interface__srv__MyService_Event
    std::shared_ptr<ondrejka_interface::srv::MyService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyService_Event_ & other) const
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
  bool operator!=(const MyService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyService_Event_

// alias to use template instance with default allocator
using MyService_Event =
  ondrejka_interface::srv::MyService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ondrejka_interface

namespace ondrejka_interface
{

namespace srv
{

struct MyService
{
  using Request = ondrejka_interface::srv::MyService_Request;
  using Response = ondrejka_interface::srv::MyService_Response;
  using Event = ondrejka_interface::srv::MyService_Event;
};

}  // namespace srv

}  // namespace ondrejka_interface

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__STRUCT_HPP_
