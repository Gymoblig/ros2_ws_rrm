// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rrm_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#include "rrm_msgs/msg/detail/command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rrm_msgs
const rosidl_type_hash_t *
rrm_msgs__msg__Command__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xf6, 0x09, 0xeb, 0xd5, 0xda, 0x38, 0xdc,
      0xeb, 0xe4, 0x7b, 0xf5, 0xd9, 0x00, 0xcf, 0xe5,
      0xca, 0xf6, 0x7e, 0xc1, 0x93, 0xee, 0x00, 0xe5,
      0x3f, 0x14, 0x53, 0x62, 0xec, 0xe8, 0xf7, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rrm_msgs__msg__Command__TYPE_NAME[] = "rrm_msgs/msg/Command";

// Define type names, field names, and default values
static char rrm_msgs__msg__Command__FIELD_NAME__joint_id[] = "joint_id";
static char rrm_msgs__msg__Command__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field rrm_msgs__msg__Command__FIELDS[] = {
  {
    {rrm_msgs__msg__Command__FIELD_NAME__joint_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rrm_msgs__msg__Command__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rrm_msgs__msg__Command__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rrm_msgs__msg__Command__TYPE_NAME, 20, 20},
      {rrm_msgs__msg__Command__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 joint_id\n"
  "float64 position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rrm_msgs__msg__Command__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rrm_msgs__msg__Command__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rrm_msgs__msg__Command__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rrm_msgs__msg__Command__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
