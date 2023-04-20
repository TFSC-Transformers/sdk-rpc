// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_arena.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5farena_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5farena_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5farena_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5farena_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto;
namespace proto2_arena_unittest {
class ArenaMessage;
struct ArenaMessageDefaultTypeInternal;
extern ArenaMessageDefaultTypeInternal _ArenaMessage_default_instance_;
class NestedMessage;
struct NestedMessageDefaultTypeInternal;
extern NestedMessageDefaultTypeInternal _NestedMessage_default_instance_;
}  // namespace proto2_arena_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::proto2_arena_unittest::ArenaMessage* Arena::CreateMaybeMessage<::proto2_arena_unittest::ArenaMessage>(Arena*);
template<> ::proto2_arena_unittest::NestedMessage* Arena::CreateMaybeMessage<::proto2_arena_unittest::NestedMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto2_arena_unittest {

// ===================================================================

class NestedMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto2_arena_unittest.NestedMessage) */ {
 public:
  inline NestedMessage() : NestedMessage(nullptr) {}
  ~NestedMessage() override;
  explicit PROTOBUF_CONSTEXPR NestedMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NestedMessage(const NestedMessage& from);
  NestedMessage(NestedMessage&& from) noexcept
    : NestedMessage() {
    *this = ::std::move(from);
  }

  inline NestedMessage& operator=(const NestedMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline NestedMessage& operator=(NestedMessage&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NestedMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const NestedMessage* internal_default_instance() {
    return reinterpret_cast<const NestedMessage*>(
               &_NestedMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NestedMessage& a, NestedMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(NestedMessage* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NestedMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NestedMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NestedMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NestedMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NestedMessage& from) {
    NestedMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NestedMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto2_arena_unittest.NestedMessage";
  }
  protected:
  explicit NestedMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDFieldNumber = 1,
  };
  // optional int32 d = 1;
  bool has_d() const;
  private:
  bool _internal_has_d() const;
  public:
  void clear_d();
  int32_t d() const;
  void set_d(int32_t value);
  private:
  int32_t _internal_d() const;
  void _internal_set_d(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:proto2_arena_unittest.NestedMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int32_t d_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5farena_2eproto;
};
// -------------------------------------------------------------------

class ArenaMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto2_arena_unittest.ArenaMessage) */ {
 public:
  inline ArenaMessage() : ArenaMessage(nullptr) {}
  ~ArenaMessage() override;
  explicit PROTOBUF_CONSTEXPR ArenaMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ArenaMessage(const ArenaMessage& from);
  ArenaMessage(ArenaMessage&& from) noexcept
    : ArenaMessage() {
    *this = ::std::move(from);
  }

  inline ArenaMessage& operator=(const ArenaMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArenaMessage& operator=(ArenaMessage&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ArenaMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const ArenaMessage* internal_default_instance() {
    return reinterpret_cast<const ArenaMessage*>(
               &_ArenaMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ArenaMessage& a, ArenaMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ArenaMessage* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ArenaMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ArenaMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ArenaMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ArenaMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ArenaMessage& from) {
    ArenaMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ArenaMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto2_arena_unittest.ArenaMessage";
  }
  protected:
  explicit ArenaMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRepeatedNestedMessageFieldNumber = 1,
  };
  // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
  int repeated_nested_message_size() const;
  private:
  int _internal_repeated_nested_message_size() const;
  public:
  void clear_repeated_nested_message();
  ::proto2_arena_unittest::NestedMessage* mutable_repeated_nested_message(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto2_arena_unittest::NestedMessage >*
      mutable_repeated_nested_message();
  private:
  const ::proto2_arena_unittest::NestedMessage& _internal_repeated_nested_message(int index) const;
  ::proto2_arena_unittest::NestedMessage* _internal_add_repeated_nested_message();
  public:
  const ::proto2_arena_unittest::NestedMessage& repeated_nested_message(int index) const;
  ::proto2_arena_unittest::NestedMessage* add_repeated_nested_message();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto2_arena_unittest::NestedMessage >&
      repeated_nested_message() const;

  // @@protoc_insertion_point(class_scope:proto2_arena_unittest.ArenaMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto2_arena_unittest::NestedMessage > repeated_nested_message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5farena_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NestedMessage

// optional int32 d = 1;
inline bool NestedMessage::_internal_has_d() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NestedMessage::has_d() const {
  return _internal_has_d();
}
inline void NestedMessage::clear_d() {
  _impl_.d_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int32_t NestedMessage::_internal_d() const {
  return _impl_.d_;
}
inline int32_t NestedMessage::d() const {
  // @@protoc_insertion_point(field_get:proto2_arena_unittest.NestedMessage.d)
  return _internal_d();
}
inline void NestedMessage::_internal_set_d(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.d_ = value;
}
inline void NestedMessage::set_d(int32_t value) {
  _internal_set_d(value);
  // @@protoc_insertion_point(field_set:proto2_arena_unittest.NestedMessage.d)
}

// -------------------------------------------------------------------

// ArenaMessage

// repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
inline int ArenaMessage::_internal_repeated_nested_message_size() const {
  return _impl_.repeated_nested_message_.size();
}
inline int ArenaMessage::repeated_nested_message_size() const {
  return _internal_repeated_nested_message_size();
}
inline void ArenaMessage::clear_repeated_nested_message() {
  _impl_.repeated_nested_message_.Clear();
}
inline ::proto2_arena_unittest::NestedMessage* ArenaMessage::mutable_repeated_nested_message(int index) {
  // @@protoc_insertion_point(field_mutable:proto2_arena_unittest.ArenaMessage.repeated_nested_message)
  return _impl_.repeated_nested_message_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto2_arena_unittest::NestedMessage >*
ArenaMessage::mutable_repeated_nested_message() {
  // @@protoc_insertion_point(field_mutable_list:proto2_arena_unittest.ArenaMessage.repeated_nested_message)
  return &_impl_.repeated_nested_message_;
}
inline const ::proto2_arena_unittest::NestedMessage& ArenaMessage::_internal_repeated_nested_message(int index) const {
  return _impl_.repeated_nested_message_.Get(index);
}
inline const ::proto2_arena_unittest::NestedMessage& ArenaMessage::repeated_nested_message(int index) const {
  // @@protoc_insertion_point(field_get:proto2_arena_unittest.ArenaMessage.repeated_nested_message)
  return _internal_repeated_nested_message(index);
}
inline ::proto2_arena_unittest::NestedMessage* ArenaMessage::_internal_add_repeated_nested_message() {
  return _impl_.repeated_nested_message_.Add();
}
inline ::proto2_arena_unittest::NestedMessage* ArenaMessage::add_repeated_nested_message() {
  ::proto2_arena_unittest::NestedMessage* _add = _internal_add_repeated_nested_message();
  // @@protoc_insertion_point(field_add:proto2_arena_unittest.ArenaMessage.repeated_nested_message)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto2_arena_unittest::NestedMessage >&
ArenaMessage::repeated_nested_message() const {
  // @@protoc_insertion_point(field_list:proto2_arena_unittest.ArenaMessage.repeated_nested_message)
  return _impl_.repeated_nested_message_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_arena_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5farena_2eproto
