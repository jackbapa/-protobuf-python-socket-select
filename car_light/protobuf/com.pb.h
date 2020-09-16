// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/com.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fcom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fcom_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fcom_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fcom_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fcom_2eproto;
namespace demo {
class comu;
class comuDefaultTypeInternal;
extern comuDefaultTypeInternal _comu_default_instance_;
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> ::demo::comu* Arena::CreateMaybeMessage<::demo::comu>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace demo {

// ===================================================================

class comu PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:demo.comu) */ {
 public:
  inline comu() : comu(nullptr) {};
  virtual ~comu();

  comu(const comu& from);
  comu(comu&& from) noexcept
    : comu() {
    *this = ::std::move(from);
  }

  inline comu& operator=(const comu& from) {
    CopyFrom(from);
    return *this;
  }
  inline comu& operator=(comu&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const comu& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const comu* internal_default_instance() {
    return reinterpret_cast<const comu*>(
               &_comu_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(comu& a, comu& b) {
    a.Swap(&b);
  }
  inline void Swap(comu* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(comu* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline comu* New() const final {
    return CreateMaybeMessage<comu>(nullptr);
  }

  comu* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<comu>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const comu& from);
  void MergeFrom(const comu& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(comu* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "demo.comu";
  }
  protected:
  explicit comu(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protobuf_2fcom_2eproto);
    return ::descriptor_table_protobuf_2fcom_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMmmFieldNumber = 1,
  };
  // string mmm = 1;
  void clear_mmm();
  const std::string& mmm() const;
  void set_mmm(const std::string& value);
  void set_mmm(std::string&& value);
  void set_mmm(const char* value);
  void set_mmm(const char* value, size_t size);
  std::string* mutable_mmm();
  std::string* release_mmm();
  void set_allocated_mmm(std::string* mmm);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_mmm();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_mmm(
      std::string* mmm);
  private:
  const std::string& _internal_mmm() const;
  void _internal_set_mmm(const std::string& value);
  std::string* _internal_mutable_mmm();
  public:

  // @@protoc_insertion_point(class_scope:demo.comu)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mmm_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fcom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// comu

// string mmm = 1;
inline void comu::clear_mmm() {
  mmm_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& comu::mmm() const {
  // @@protoc_insertion_point(field_get:demo.comu.mmm)
  return _internal_mmm();
}
inline void comu::set_mmm(const std::string& value) {
  _internal_set_mmm(value);
  // @@protoc_insertion_point(field_set:demo.comu.mmm)
}
inline std::string* comu::mutable_mmm() {
  // @@protoc_insertion_point(field_mutable:demo.comu.mmm)
  return _internal_mutable_mmm();
}
inline const std::string& comu::_internal_mmm() const {
  return mmm_.Get();
}
inline void comu::_internal_set_mmm(const std::string& value) {
  
  mmm_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void comu::set_mmm(std::string&& value) {
  
  mmm_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:demo.comu.mmm)
}
inline void comu::set_mmm(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  mmm_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:demo.comu.mmm)
}
inline void comu::set_mmm(const char* value,
    size_t size) {
  
  mmm_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:demo.comu.mmm)
}
inline std::string* comu::_internal_mutable_mmm() {
  
  return mmm_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* comu::release_mmm() {
  // @@protoc_insertion_point(field_release:demo.comu.mmm)
  return mmm_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void comu::set_allocated_mmm(std::string* mmm) {
  if (mmm != nullptr) {
    
  } else {
    
  }
  mmm_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), mmm,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:demo.comu.mmm)
}
inline std::string* comu::unsafe_arena_release_mmm() {
  // @@protoc_insertion_point(field_unsafe_arena_release:demo.comu.mmm)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return mmm_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void comu::unsafe_arena_set_allocated_mmm(
    std::string* mmm) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (mmm != nullptr) {
    
  } else {
    
  }
  mmm_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      mmm, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:demo.comu.mmm)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace demo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fcom_2eproto
