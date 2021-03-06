/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "message.pb-c.h"
void   message__init
                     (Message         *message)
{
  static const Message init_value = MESSAGE__INIT;
  *message = init_value;
}
size_t message__get_packed_size
                     (const Message *message)
{
  assert(message->base.descriptor == &message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t message__pack
                     (const Message *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t message__pack_to_buffer
                     (const Message *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Message *
       message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Message *)
     protobuf_c_message_unpack (&message__descriptor,
                                allocator, len, data);
}
void   message__free_unpacked
                     (Message *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue message__content_type__enum_values_by_number[2] =
{
  { "NOOP", "MESSAGE__CONTENT_TYPE__NOOP", 0 },
  { "TEXT_PLAIN", "MESSAGE__CONTENT_TYPE__TEXT_PLAIN", 1 },
};
static const ProtobufCIntRange message__content_type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex message__content_type__enum_values_by_name[2] =
{
  { "NOOP", 0 },
  { "TEXT_PLAIN", 1 },
};
const ProtobufCEnumDescriptor message__content_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Message.ContentType",
  "ContentType",
  "Message__ContentType",
  "",
  2,
  message__content_type__enum_values_by_number,
  2,
  message__content_type__enum_values_by_name,
  1,
  message__content_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor message__field_descriptors[3] =
{
  {
    "serial_number",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Message, serial_number),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "content_type",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Message, content_type),
    &message__content_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Message, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned message__field_indices_by_name[] = {
  1,   /* field[1] = content_type */
  2,   /* field[2] = payload */
  0,   /* field[0] = serial_number */
};
static const ProtobufCIntRange message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Message",
  "Message",
  "Message",
  "",
  sizeof(Message),
  3,
  message__field_descriptors,
  message__field_indices_by_name,
  1,  message__number_ranges,
  (ProtobufCMessageInit) message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
