/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: chatmessage.proto */

#ifndef PROTOBUF_C_chatmessage_2eproto__INCLUDED
#define PROTOBUF_C_chatmessage_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _ChatApp__Message ChatApp__Message;


/* --- enums --- */

typedef enum _ChatApp__Message__Option {
  CHAT_APP__MESSAGE__OPTION__LISTCLIENTS = 0,
  CHAT_APP__MESSAGE__OPTION__CHAT = 1,
  CHAT_APP__MESSAGE__OPTION__RESPONSE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CHAT_APP__MESSAGE__OPTION)
} ChatApp__Message__Option;

/* --- messages --- */

struct  _ChatApp__Message
{
  ProtobufCMessage base;
  char *sourceip;
  char *destip;
  char *hostname;
  char *texttosend;
  int32_t messagelength;
  protobuf_c_boolean has_opt;
  ChatApp__Message__Option opt;
};
#define CHAT_APP__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&chat_app__message__descriptor) \
    , NULL, NULL, NULL, NULL, 0, 0, CHAT_APP__MESSAGE__OPTION__LISTCLIENTS }


/* ChatApp__Message methods */
void   chat_app__message__init
                     (ChatApp__Message         *message);
size_t chat_app__message__get_packed_size
                     (const ChatApp__Message   *message);
size_t chat_app__message__pack
                     (const ChatApp__Message   *message,
                      uint8_t             *out);
size_t chat_app__message__pack_to_buffer
                     (const ChatApp__Message   *message,
                      ProtobufCBuffer     *buffer);
ChatApp__Message *
       chat_app__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   chat_app__message__free_unpacked
                     (ChatApp__Message *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ChatApp__Message_Closure)
                 (const ChatApp__Message *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor chat_app__message__descriptor;
extern const ProtobufCEnumDescriptor    chat_app__message__option__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_chatmessage_2eproto__INCLUDED */