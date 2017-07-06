/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: secure_multiplication_bitwidth_64.proto */

#ifndef PROTOBUF_C_secure_5fmultiplication_5fbitwidth_5f64_2eproto__INCLUDED
#define PROTOBUF_C_secure_5fmultiplication_5fbitwidth_5f64_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _SecureMultiplication__Msg SecureMultiplication__Msg;


/* --- enums --- */


/* --- messages --- */

struct  _SecureMultiplication__Msg
{
  ProtobufCMessage base;
  size_t n_vector;
  uint64_t *vector;
  uint64_t value;
};
#define SECURE_MULTIPLICATION__MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&secure_multiplication__msg__descriptor) \
    , 0,NULL, 0 }


/* SecureMultiplication__Msg methods */
void   secure_multiplication__msg__init
                     (SecureMultiplication__Msg         *message);
size_t secure_multiplication__msg__get_packed_size
                     (const SecureMultiplication__Msg   *message);
size_t secure_multiplication__msg__pack
                     (const SecureMultiplication__Msg   *message,
                      uint8_t             *out);
size_t secure_multiplication__msg__pack_to_buffer
                     (const SecureMultiplication__Msg   *message,
                      ProtobufCBuffer     *buffer);
SecureMultiplication__Msg *
       secure_multiplication__msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   secure_multiplication__msg__free_unpacked
                     (SecureMultiplication__Msg *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SecureMultiplication__Msg_Closure)
                 (const SecureMultiplication__Msg *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor secure_multiplication__msg__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_secure_5fmultiplication_5fbitwidth_5f64_2eproto__INCLUDED */
