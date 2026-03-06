// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ondrejka_interface:srv/MyService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ondrejka_interface/srv/my_service.h"


#ifndef ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__FUNCTIONS_H_
#define ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "ondrejka_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ondrejka_interface/srv/detail/my_service__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__MyService__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__MyService__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__MyService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__MyService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/MyService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ondrejka_interface__srv__MyService_Request
 * )) before or use
 * ondrejka_interface__srv__MyService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Request__init(ondrejka_interface__srv__MyService_Request * msg);

/// Finalize srv/MyService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Request__fini(ondrejka_interface__srv__MyService_Request * msg);

/// Create srv/MyService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ondrejka_interface__srv__MyService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
ondrejka_interface__srv__MyService_Request *
ondrejka_interface__srv__MyService_Request__create(void);

/// Destroy srv/MyService message.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Request__destroy(ondrejka_interface__srv__MyService_Request * msg);

/// Check for srv/MyService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Request__are_equal(const ondrejka_interface__srv__MyService_Request * lhs, const ondrejka_interface__srv__MyService_Request * rhs);

/// Copy a srv/MyService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Request__copy(
  const ondrejka_interface__srv__MyService_Request * input,
  ondrejka_interface__srv__MyService_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__MyService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__MyService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__MyService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__MyService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MyService messages.
/**
 * It allocates the memory for the number of elements and calls
 * ondrejka_interface__srv__MyService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Request__Sequence__init(ondrejka_interface__srv__MyService_Request__Sequence * array, size_t size);

/// Finalize array of srv/MyService messages.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Request__Sequence__fini(ondrejka_interface__srv__MyService_Request__Sequence * array);

/// Create array of srv/MyService messages.
/**
 * It allocates the memory for the array and calls
 * ondrejka_interface__srv__MyService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
ondrejka_interface__srv__MyService_Request__Sequence *
ondrejka_interface__srv__MyService_Request__Sequence__create(size_t size);

/// Destroy array of srv/MyService messages.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Request__Sequence__destroy(ondrejka_interface__srv__MyService_Request__Sequence * array);

/// Check for srv/MyService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Request__Sequence__are_equal(const ondrejka_interface__srv__MyService_Request__Sequence * lhs, const ondrejka_interface__srv__MyService_Request__Sequence * rhs);

/// Copy an array of srv/MyService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Request__Sequence__copy(
  const ondrejka_interface__srv__MyService_Request__Sequence * input,
  ondrejka_interface__srv__MyService_Request__Sequence * output);

/// Initialize srv/MyService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ondrejka_interface__srv__MyService_Response
 * )) before or use
 * ondrejka_interface__srv__MyService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Response__init(ondrejka_interface__srv__MyService_Response * msg);

/// Finalize srv/MyService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Response__fini(ondrejka_interface__srv__MyService_Response * msg);

/// Create srv/MyService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ondrejka_interface__srv__MyService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
ondrejka_interface__srv__MyService_Response *
ondrejka_interface__srv__MyService_Response__create(void);

/// Destroy srv/MyService message.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Response__destroy(ondrejka_interface__srv__MyService_Response * msg);

/// Check for srv/MyService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Response__are_equal(const ondrejka_interface__srv__MyService_Response * lhs, const ondrejka_interface__srv__MyService_Response * rhs);

/// Copy a srv/MyService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Response__copy(
  const ondrejka_interface__srv__MyService_Response * input,
  ondrejka_interface__srv__MyService_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__MyService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__MyService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__MyService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__MyService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MyService messages.
/**
 * It allocates the memory for the number of elements and calls
 * ondrejka_interface__srv__MyService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Response__Sequence__init(ondrejka_interface__srv__MyService_Response__Sequence * array, size_t size);

/// Finalize array of srv/MyService messages.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Response__Sequence__fini(ondrejka_interface__srv__MyService_Response__Sequence * array);

/// Create array of srv/MyService messages.
/**
 * It allocates the memory for the array and calls
 * ondrejka_interface__srv__MyService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
ondrejka_interface__srv__MyService_Response__Sequence *
ondrejka_interface__srv__MyService_Response__Sequence__create(size_t size);

/// Destroy array of srv/MyService messages.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Response__Sequence__destroy(ondrejka_interface__srv__MyService_Response__Sequence * array);

/// Check for srv/MyService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Response__Sequence__are_equal(const ondrejka_interface__srv__MyService_Response__Sequence * lhs, const ondrejka_interface__srv__MyService_Response__Sequence * rhs);

/// Copy an array of srv/MyService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Response__Sequence__copy(
  const ondrejka_interface__srv__MyService_Response__Sequence * input,
  ondrejka_interface__srv__MyService_Response__Sequence * output);

/// Initialize srv/MyService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ondrejka_interface__srv__MyService_Event
 * )) before or use
 * ondrejka_interface__srv__MyService_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Event__init(ondrejka_interface__srv__MyService_Event * msg);

/// Finalize srv/MyService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Event__fini(ondrejka_interface__srv__MyService_Event * msg);

/// Create srv/MyService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ondrejka_interface__srv__MyService_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
ondrejka_interface__srv__MyService_Event *
ondrejka_interface__srv__MyService_Event__create(void);

/// Destroy srv/MyService message.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Event__destroy(ondrejka_interface__srv__MyService_Event * msg);

/// Check for srv/MyService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Event__are_equal(const ondrejka_interface__srv__MyService_Event * lhs, const ondrejka_interface__srv__MyService_Event * rhs);

/// Copy a srv/MyService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Event__copy(
  const ondrejka_interface__srv__MyService_Event * input,
  ondrejka_interface__srv__MyService_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__MyService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__MyService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__MyService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__MyService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MyService messages.
/**
 * It allocates the memory for the number of elements and calls
 * ondrejka_interface__srv__MyService_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Event__Sequence__init(ondrejka_interface__srv__MyService_Event__Sequence * array, size_t size);

/// Finalize array of srv/MyService messages.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Event__Sequence__fini(ondrejka_interface__srv__MyService_Event__Sequence * array);

/// Create array of srv/MyService messages.
/**
 * It allocates the memory for the array and calls
 * ondrejka_interface__srv__MyService_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
ondrejka_interface__srv__MyService_Event__Sequence *
ondrejka_interface__srv__MyService_Event__Sequence__create(size_t size);

/// Destroy array of srv/MyService messages.
/**
 * It calls
 * ondrejka_interface__srv__MyService_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
void
ondrejka_interface__srv__MyService_Event__Sequence__destroy(ondrejka_interface__srv__MyService_Event__Sequence * array);

/// Check for srv/MyService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Event__Sequence__are_equal(const ondrejka_interface__srv__MyService_Event__Sequence * lhs, const ondrejka_interface__srv__MyService_Event__Sequence * rhs);

/// Copy an array of srv/MyService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
bool
ondrejka_interface__srv__MyService_Event__Sequence__copy(
  const ondrejka_interface__srv__MyService_Event__Sequence * input,
  ondrejka_interface__srv__MyService_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // ONDREJKA_INTERFACE__SRV__DETAIL__MY_SERVICE__FUNCTIONS_H_
