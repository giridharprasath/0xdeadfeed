// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chatmessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_chatmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_chatmessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_chatmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_chatmessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_chatmessage_2eproto;
namespace chatApp {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace chatApp
PROTOBUF_NAMESPACE_OPEN
template<> ::chatApp::Message* Arena::CreateMaybeMessage<::chatApp::Message>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace chatApp {

enum Message_Option : int {
  Message_Option_LISTCLIENTS = 0,
  Message_Option_CHAT = 1,
  Message_Option_RESPONSE = 2
};
bool Message_Option_IsValid(int value);
constexpr Message_Option Message_Option_Option_MIN = Message_Option_LISTCLIENTS;
constexpr Message_Option Message_Option_Option_MAX = Message_Option_RESPONSE;
constexpr int Message_Option_Option_ARRAYSIZE = Message_Option_Option_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Message_Option_descriptor();
template<typename T>
inline const std::string& Message_Option_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Message_Option>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Message_Option_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Message_Option_descriptor(), enum_t_value);
}
inline bool Message_Option_Parse(
    const std::string& name, Message_Option* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Message_Option>(
    Message_Option_descriptor(), name, value);
}
// ===================================================================

class Message :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:chatApp.Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Message& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Message* other);
  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chatApp.Message";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_chatmessage_2eproto);
    return ::descriptor_table_chatmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Message_Option Option;
  static constexpr Option LISTCLIENTS =
    Message_Option_LISTCLIENTS;
  static constexpr Option CHAT =
    Message_Option_CHAT;
  static constexpr Option RESPONSE =
    Message_Option_RESPONSE;
  static inline bool Option_IsValid(int value) {
    return Message_Option_IsValid(value);
  }
  static constexpr Option Option_MIN =
    Message_Option_Option_MIN;
  static constexpr Option Option_MAX =
    Message_Option_Option_MAX;
  static constexpr int Option_ARRAYSIZE =
    Message_Option_Option_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Option_descriptor() {
    return Message_Option_descriptor();
  }
  template<typename T>
  static inline const std::string& Option_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Option>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Option_Name.");
    return Message_Option_Name(enum_t_value);
  }
  static inline bool Option_Parse(const std::string& name,
      Option* value) {
    return Message_Option_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string sourceIp = 1;
  bool has_sourceip() const;
  void clear_sourceip();
  static const int kSourceIpFieldNumber = 1;
  const std::string& sourceip() const;
  void set_sourceip(const std::string& value);
  void set_sourceip(std::string&& value);
  void set_sourceip(const char* value);
  void set_sourceip(const char* value, size_t size);
  std::string* mutable_sourceip();
  std::string* release_sourceip();
  void set_allocated_sourceip(std::string* sourceip);

  // optional string destIp = 2;
  bool has_destip() const;
  void clear_destip();
  static const int kDestIpFieldNumber = 2;
  const std::string& destip() const;
  void set_destip(const std::string& value);
  void set_destip(std::string&& value);
  void set_destip(const char* value);
  void set_destip(const char* value, size_t size);
  std::string* mutable_destip();
  std::string* release_destip();
  void set_allocated_destip(std::string* destip);

  // required string hostName = 4;
  bool has_hostname() const;
  void clear_hostname();
  static const int kHostNameFieldNumber = 4;
  const std::string& hostname() const;
  void set_hostname(const std::string& value);
  void set_hostname(std::string&& value);
  void set_hostname(const char* value);
  void set_hostname(const char* value, size_t size);
  std::string* mutable_hostname();
  std::string* release_hostname();
  void set_allocated_hostname(std::string* hostname);

  // optional string textToSend = 5;
  bool has_texttosend() const;
  void clear_texttosend();
  static const int kTextToSendFieldNumber = 5;
  const std::string& texttosend() const;
  void set_texttosend(const std::string& value);
  void set_texttosend(std::string&& value);
  void set_texttosend(const char* value);
  void set_texttosend(const char* value, size_t size);
  std::string* mutable_texttosend();
  std::string* release_texttosend();
  void set_allocated_texttosend(std::string* texttosend);

  // required int32 messageLength = 3;
  bool has_messagelength() const;
  void clear_messagelength();
  static const int kMessageLengthFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int32 messagelength() const;
  void set_messagelength(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional .chatApp.Message.Option opt = 6 [default = LISTCLIENTS];
  bool has_opt() const;
  void clear_opt();
  static const int kOptFieldNumber = 6;
  ::chatApp::Message_Option opt() const;
  void set_opt(::chatApp::Message_Option value);

  // @@protoc_insertion_point(class_scope:chatApp.Message)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sourceip_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr destip_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hostname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr texttosend_;
  ::PROTOBUF_NAMESPACE_ID::int32 messagelength_;
  int opt_;
  friend struct ::TableStruct_chatmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message

// required string sourceIp = 1;
inline bool Message::has_sourceip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::clear_sourceip() {
  sourceip_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Message::sourceip() const {
  // @@protoc_insertion_point(field_get:chatApp.Message.sourceIp)
  return sourceip_.GetNoArena();
}
inline void Message::set_sourceip(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  sourceip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chatApp.Message.sourceIp)
}
inline void Message::set_sourceip(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  sourceip_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chatApp.Message.sourceIp)
}
inline void Message::set_sourceip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  sourceip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chatApp.Message.sourceIp)
}
inline void Message::set_sourceip(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  sourceip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chatApp.Message.sourceIp)
}
inline std::string* Message::mutable_sourceip() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:chatApp.Message.sourceIp)
  return sourceip_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message::release_sourceip() {
  // @@protoc_insertion_point(field_release:chatApp.Message.sourceIp)
  if (!has_sourceip()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return sourceip_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_sourceip(std::string* sourceip) {
  if (sourceip != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  sourceip_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sourceip);
  // @@protoc_insertion_point(field_set_allocated:chatApp.Message.sourceIp)
}

// optional string destIp = 2;
inline bool Message::has_destip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::clear_destip() {
  destip_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Message::destip() const {
  // @@protoc_insertion_point(field_get:chatApp.Message.destIp)
  return destip_.GetNoArena();
}
inline void Message::set_destip(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  destip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chatApp.Message.destIp)
}
inline void Message::set_destip(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  destip_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chatApp.Message.destIp)
}
inline void Message::set_destip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  destip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chatApp.Message.destIp)
}
inline void Message::set_destip(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  destip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chatApp.Message.destIp)
}
inline std::string* Message::mutable_destip() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:chatApp.Message.destIp)
  return destip_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message::release_destip() {
  // @@protoc_insertion_point(field_release:chatApp.Message.destIp)
  if (!has_destip()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return destip_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_destip(std::string* destip) {
  if (destip != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  destip_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), destip);
  // @@protoc_insertion_point(field_set_allocated:chatApp.Message.destIp)
}

// required string hostName = 4;
inline bool Message::has_hostname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Message::clear_hostname() {
  hostname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Message::hostname() const {
  // @@protoc_insertion_point(field_get:chatApp.Message.hostName)
  return hostname_.GetNoArena();
}
inline void Message::set_hostname(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  hostname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chatApp.Message.hostName)
}
inline void Message::set_hostname(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  hostname_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chatApp.Message.hostName)
}
inline void Message::set_hostname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  hostname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chatApp.Message.hostName)
}
inline void Message::set_hostname(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  hostname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chatApp.Message.hostName)
}
inline std::string* Message::mutable_hostname() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:chatApp.Message.hostName)
  return hostname_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message::release_hostname() {
  // @@protoc_insertion_point(field_release:chatApp.Message.hostName)
  if (!has_hostname()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return hostname_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_hostname(std::string* hostname) {
  if (hostname != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  hostname_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hostname);
  // @@protoc_insertion_point(field_set_allocated:chatApp.Message.hostName)
}

// optional string textToSend = 5;
inline bool Message::has_texttosend() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Message::clear_texttosend() {
  texttosend_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& Message::texttosend() const {
  // @@protoc_insertion_point(field_get:chatApp.Message.textToSend)
  return texttosend_.GetNoArena();
}
inline void Message::set_texttosend(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  texttosend_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chatApp.Message.textToSend)
}
inline void Message::set_texttosend(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  texttosend_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chatApp.Message.textToSend)
}
inline void Message::set_texttosend(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  texttosend_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chatApp.Message.textToSend)
}
inline void Message::set_texttosend(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  texttosend_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chatApp.Message.textToSend)
}
inline std::string* Message::mutable_texttosend() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:chatApp.Message.textToSend)
  return texttosend_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message::release_texttosend() {
  // @@protoc_insertion_point(field_release:chatApp.Message.textToSend)
  if (!has_texttosend()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return texttosend_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_texttosend(std::string* texttosend) {
  if (texttosend != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  texttosend_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), texttosend);
  // @@protoc_insertion_point(field_set_allocated:chatApp.Message.textToSend)
}

// required int32 messageLength = 3;
inline bool Message::has_messagelength() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Message::clear_messagelength() {
  messagelength_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Message::messagelength() const {
  // @@protoc_insertion_point(field_get:chatApp.Message.messageLength)
  return messagelength_;
}
inline void Message::set_messagelength(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  messagelength_ = value;
  // @@protoc_insertion_point(field_set:chatApp.Message.messageLength)
}

// optional .chatApp.Message.Option opt = 6 [default = LISTCLIENTS];
inline bool Message::has_opt() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Message::clear_opt() {
  opt_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::chatApp::Message_Option Message::opt() const {
  // @@protoc_insertion_point(field_get:chatApp.Message.opt)
  return static_cast< ::chatApp::Message_Option >(opt_);
}
inline void Message::set_opt(::chatApp::Message_Option value) {
  assert(::chatApp::Message_Option_IsValid(value));
  _has_bits_[0] |= 0x00000020u;
  opt_ = value;
  // @@protoc_insertion_point(field_set:chatApp.Message.opt)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace chatApp

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::chatApp::Message_Option> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::chatApp::Message_Option>() {
  return ::chatApp::Message_Option_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_chatmessage_2eproto