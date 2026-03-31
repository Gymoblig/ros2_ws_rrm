// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ondrejka_interface:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

#include "ondrejka_interface/srv/detail/inverse_kinematics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__InverseKinematics__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x1b, 0x9e, 0x35, 0xb7, 0x03, 0x6e, 0xd1,
      0xcc, 0x2f, 0xfb, 0xda, 0xef, 0x4c, 0x8c, 0x62,
      0xbb, 0x5b, 0xce, 0xb7, 0xa6, 0x8c, 0x33, 0xa0,
      0x23, 0x4b, 0xf6, 0x77, 0xec, 0xb2, 0xeb, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__InverseKinematics_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x4e, 0xcc, 0x47, 0x5c, 0x5f, 0x83, 0x95,
      0xb5, 0x69, 0xeb, 0x87, 0x25, 0x64, 0x11, 0xab,
      0xc0, 0x50, 0xc9, 0x5f, 0x27, 0x0a, 0x26, 0x50,
      0x24, 0xea, 0x81, 0x7b, 0x05, 0x56, 0xf2, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__InverseKinematics_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x58, 0x5d, 0x81, 0x53, 0x82, 0x11, 0x94,
      0xf4, 0x77, 0x80, 0x43, 0xbd, 0x98, 0xba, 0xcd,
      0x63, 0xa8, 0xdd, 0x95, 0x56, 0x7f, 0xff, 0x41,
      0x51, 0xc0, 0x6c, 0x60, 0x59, 0x81, 0x90, 0x1f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ondrejka_interface
const rosidl_type_hash_t *
ondrejka_interface__srv__InverseKinematics_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x3d, 0x94, 0x15, 0x8d, 0xa1, 0x2a, 0x70,
      0x21, 0x27, 0xd4, 0xa4, 0x10, 0xad, 0x85, 0x88,
      0xc7, 0x5f, 0xe2, 0xff, 0x76, 0xe5, 0x38, 0x36,
      0x77, 0x0b, 0x01, 0xe4, 0x18, 0x63, 0xa3, 0x30,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ondrejka_interface__srv__InverseKinematics__TYPE_NAME[] = "ondrejka_interface/srv/InverseKinematics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ondrejka_interface__srv__InverseKinematics_Event__TYPE_NAME[] = "ondrejka_interface/srv/InverseKinematics_Event";
static char ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME[] = "ondrejka_interface/srv/InverseKinematics_Request";
static char ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME[] = "ondrejka_interface/srv/InverseKinematics_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ondrejka_interface__srv__InverseKinematics__FIELD_NAME__request_message[] = "request_message";
static char ondrejka_interface__srv__InverseKinematics__FIELD_NAME__response_message[] = "response_message";
static char ondrejka_interface__srv__InverseKinematics__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ondrejka_interface__srv__InverseKinematics__FIELDS[] = {
  {
    {ondrejka_interface__srv__InverseKinematics__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ondrejka_interface__srv__InverseKinematics_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ondrejka_interface__srv__InverseKinematics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__InverseKinematics__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ondrejka_interface__srv__InverseKinematics__TYPE_NAME, 40, 40},
      {ondrejka_interface__srv__InverseKinematics__FIELDS, 3, 3},
    },
    {ondrejka_interface__srv__InverseKinematics__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ondrejka_interface__srv__InverseKinematics_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ondrejka_interface__srv__InverseKinematics_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ondrejka_interface__srv__InverseKinematics_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ondrejka_interface__srv__InverseKinematics_Request__FIELD_NAME__x[] = "x";
static char ondrejka_interface__srv__InverseKinematics_Request__FIELD_NAME__y[] = "y";
static char ondrejka_interface__srv__InverseKinematics_Request__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field ondrejka_interface__srv__InverseKinematics_Request__FIELDS[] = {
  {
    {ondrejka_interface__srv__InverseKinematics_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Request__FIELD_NAME__z, 1, 1},
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
ondrejka_interface__srv__InverseKinematics_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME, 48, 48},
      {ondrejka_interface__srv__InverseKinematics_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ondrejka_interface__srv__InverseKinematics_Response__FIELD_NAME__success[] = "success";
static char ondrejka_interface__srv__InverseKinematics_Response__FIELD_NAME__angles[] = "angles";
static char ondrejka_interface__srv__InverseKinematics_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ondrejka_interface__srv__InverseKinematics_Response__FIELDS[] = {
  {
    {ondrejka_interface__srv__InverseKinematics_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Response__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__InverseKinematics_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME, 49, 49},
      {ondrejka_interface__srv__InverseKinematics_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ondrejka_interface__srv__InverseKinematics_Event__FIELD_NAME__info[] = "info";
static char ondrejka_interface__srv__InverseKinematics_Event__FIELD_NAME__request[] = "request";
static char ondrejka_interface__srv__InverseKinematics_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ondrejka_interface__srv__InverseKinematics_Event__FIELDS[] = {
  {
    {ondrejka_interface__srv__InverseKinematics_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ondrejka_interface__srv__InverseKinematics_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ondrejka_interface__srv__InverseKinematics_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ondrejka_interface__srv__InverseKinematics_Event__TYPE_NAME, 46, 46},
      {ondrejka_interface__srv__InverseKinematics_Event__FIELDS, 3, 3},
    },
    {ondrejka_interface__srv__InverseKinematics_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ondrejka_interface__srv__InverseKinematics_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ondrejka_interface__srv__InverseKinematics_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# REQUEST\n"
  "float64 x        # \\xc5\\xbdiadan\\xc3\\xa1 s\\xc3\\xbaradnica X v metroch\n"
  "float64 y        # \\xc5\\xbdiadan\\xc3\\xa1 s\\xc3\\xbaradnica Y v metroch\n"
  "float64 z        # \\xc5\\xbdiadan\\xc3\\xa1 s\\xc3\\xbaradnica Z v metroch\n"
  "\n"
  "---\n"
  "# RESPONSE\n"
  "bool success     # \\xc4\\x8ci sa podarilo n\\xc3\\xa1js\\xc5\\xa5 rie\\xc5\\xa1enie (\\xc4\\x8di je bod v dosahu)\n"
  "float64[] angles # Volite\\xc4\\xben\\xc3\\xa9: vr\\xc3\\xa1ten\\xc3\\xa9 vypo\\xc4\\x8d\\xc3\\xadtan\\xc3\\xa9 uhly q0, q1, q2\n"
  "string message   # Inform\\xc3\\xa1cia pre pou\\xc5\\xbe\\xc3\\xadvate\\xc4\\xbea (\"OK\", \"Cie\\xc4\\xbe je pr\\xc3\\xadli\\xc5\\xa1 \\xc4\\x8faleko\", at\\xc4\\x8f.)";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__InverseKinematics__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ondrejka_interface__srv__InverseKinematics__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 391, 391},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__InverseKinematics_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ondrejka_interface__srv__InverseKinematics_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__InverseKinematics_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ondrejka_interface__srv__InverseKinematics_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ondrejka_interface__srv__InverseKinematics_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ondrejka_interface__srv__InverseKinematics_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__InverseKinematics__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ondrejka_interface__srv__InverseKinematics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ondrejka_interface__srv__InverseKinematics_Event__get_individual_type_description_source(NULL);
    sources[3] = *ondrejka_interface__srv__InverseKinematics_Request__get_individual_type_description_source(NULL);
    sources[4] = *ondrejka_interface__srv__InverseKinematics_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__InverseKinematics_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ondrejka_interface__srv__InverseKinematics_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__InverseKinematics_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ondrejka_interface__srv__InverseKinematics_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ondrejka_interface__srv__InverseKinematics_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ondrejka_interface__srv__InverseKinematics_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ondrejka_interface__srv__InverseKinematics_Request__get_individual_type_description_source(NULL);
    sources[3] = *ondrejka_interface__srv__InverseKinematics_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
