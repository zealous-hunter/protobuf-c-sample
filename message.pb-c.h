/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message.proto */

#ifndef PROTOBUF_C_message_2eproto__INCLUDED
#define PROTOBUF_C_message_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Message Message;


/* --- enums --- */

typedef enum _Message__ContentType {
  MESSAGE__CONTENT_TYPE__NOOP = 0,
  MESSAGE__CONTENT_TYPE__TEXT_PLAIN = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MESSAGE__CONTENT_TYPE)
} Message__ContentType;

/* --- messages --- */

struct  Message
{
  ProtobufCMessage base;
  uint32_t serial_number;
  Message__ContentType content_type;
  ProtobufCBinaryData payload;
};
#define MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&message__descriptor) \
    , 0, MESSAGE__CONTENT_TYPE__NOOP, {0,NULL} }


/* Message methods */
void   message__init
                     (Message         *message);
size_t message__get_packed_size
                     (const Message   *message);
size_t message__pack
                     (const Message   *message,
                      uint8_t             *out);
size_t message__pack_to_buffer
                     (const Message   *message,
                      ProtobufCBuffer     *buffer);
Message *
       message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   message__free_unpacked
                     (Message *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Message_Closure)
                 (const Message *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor message__descriptor;
extern const ProtobufCEnumDescriptor    message__content_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_message_2eproto__INCLUDED */
