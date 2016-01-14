// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: store_mat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "store_mat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace store_mat {

namespace {

const ::google::protobuf::Descriptor* Map_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Map_reflection_ = NULL;
const ::google::protobuf::Descriptor* Pair_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Pair_reflection_ = NULL;
const ::google::protobuf::Descriptor* mat_data_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  mat_data_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_store_5fmat_2eproto() {
  protobuf_AddDesc_store_5fmat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "store_mat.proto");
  GOOGLE_CHECK(file != NULL);
  Map_descriptor_ = file->message_type(0);
  static const int Map_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Map, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Map, pair_),
  };
  Map_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Map_descriptor_,
      Map::default_instance_,
      Map_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Map, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Map, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Map));
  Pair_descriptor_ = file->message_type(1);
  static const int Pair_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pair, str_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pair, mat_),
  };
  Pair_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Pair_descriptor_,
      Pair::default_instance_,
      Pair_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pair, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pair, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Pair));
  mat_data_descriptor_ = file->message_type(2);
  static const int mat_data_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, row_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, col_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, flags_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, step_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, data_),
  };
  mat_data_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      mat_data_descriptor_,
      mat_data::default_instance_,
      mat_data_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(mat_data, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(mat_data));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_store_5fmat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Map_descriptor_, &Map::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Pair_descriptor_, &Pair::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    mat_data_descriptor_, &mat_data::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_store_5fmat_2eproto() {
  delete Map::default_instance_;
  delete Map_reflection_;
  delete Pair::default_instance_;
  delete Pair_reflection_;
  delete mat_data::default_instance_;
  delete mat_data_reflection_;
}

void protobuf_AddDesc_store_5fmat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017store_mat.proto\022\tstore_mat\"2\n\003Map\022\014\n\004s"
    "ize\030\001 \002(\r\022\035\n\004pair\030\002 \003(\0132\017.store_mat.Pair"
    "\"5\n\004Pair\022\013\n\003str\030\001 \002(\t\022 \n\003mat\030\002 \002(\0132\023.sto"
    "re_mat.mat_data\"o\n\010mat_data\022\013\n\003row\030\001 \002(\r"
    "\022\013\n\003col\030\002 \002(\r\022\r\n\005flags\030\003 \002(\r\022\014\n\004step\030\004 \002"
    "(\r\022\014\n\004size\030\005 \002(\r\022\014\n\004type\030\006 \002(\r\022\020\n\004data\030\007"
    " \003(\rB\002\020\001", 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "store_mat.proto", &protobuf_RegisterTypes);
  Map::default_instance_ = new Map();
  Pair::default_instance_ = new Pair();
  mat_data::default_instance_ = new mat_data();
  Map::default_instance_->InitAsDefaultInstance();
  Pair::default_instance_->InitAsDefaultInstance();
  mat_data::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_store_5fmat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_store_5fmat_2eproto {
  StaticDescriptorInitializer_store_5fmat_2eproto() {
    protobuf_AddDesc_store_5fmat_2eproto();
  }
} static_descriptor_initializer_store_5fmat_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Map::kSizeFieldNumber;
const int Map::kPairFieldNumber;
#endif  // !_MSC_VER

Map::Map()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:store_mat.Map)
}

void Map::InitAsDefaultInstance() {
}

Map::Map(const Map& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:store_mat.Map)
}

void Map::SharedCtor() {
  _cached_size_ = 0;
  size_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Map::~Map() {
  // @@protoc_insertion_point(destructor:store_mat.Map)
  SharedDtor();
}

void Map::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Map::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Map::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Map_descriptor_;
}

const Map& Map::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_5fmat_2eproto();
  return *default_instance_;
}

Map* Map::default_instance_ = NULL;

Map* Map::New() const {
  return new Map;
}

void Map::Clear() {
  size_ = 0u;
  pair_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Map::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store_mat.Map)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 size = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pair;
        break;
      }

      // repeated .store_mat.Pair pair = 2;
      case 2: {
        if (tag == 18) {
         parse_pair:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pair()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pair;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store_mat.Map)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store_mat.Map)
  return false;
#undef DO_
}

void Map::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store_mat.Map)
  // required uint32 size = 1;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->size(), output);
  }

  // repeated .store_mat.Pair pair = 2;
  for (int i = 0; i < this->pair_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->pair(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:store_mat.Map)
}

::google::protobuf::uint8* Map::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:store_mat.Map)
  // required uint32 size = 1;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->size(), target);
  }

  // repeated .store_mat.Pair pair = 2;
  for (int i = 0; i < this->pair_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->pair(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store_mat.Map)
  return target;
}

int Map::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 size = 1;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->size());
    }

  }
  // repeated .store_mat.Pair pair = 2;
  total_size += 1 * this->pair_size();
  for (int i = 0; i < this->pair_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pair(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Map::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Map* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Map*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Map::MergeFrom(const Map& from) {
  GOOGLE_CHECK_NE(&from, this);
  pair_.MergeFrom(from.pair_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_size()) {
      set_size(from.size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Map::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Map::CopyFrom(const Map& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Map::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->pair())) return false;
  return true;
}

void Map::Swap(Map* other) {
  if (other != this) {
    std::swap(size_, other->size_);
    pair_.Swap(&other->pair_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Map::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Map_descriptor_;
  metadata.reflection = Map_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Pair::kStrFieldNumber;
const int Pair::kMatFieldNumber;
#endif  // !_MSC_VER

Pair::Pair()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:store_mat.Pair)
}

void Pair::InitAsDefaultInstance() {
  mat_ = const_cast< ::store_mat::mat_data*>(&::store_mat::mat_data::default_instance());
}

Pair::Pair(const Pair& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:store_mat.Pair)
}

void Pair::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mat_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Pair::~Pair() {
  // @@protoc_insertion_point(destructor:store_mat.Pair)
  SharedDtor();
}

void Pair::SharedDtor() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (this != default_instance_) {
    delete mat_;
  }
}

void Pair::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Pair::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pair_descriptor_;
}

const Pair& Pair::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_5fmat_2eproto();
  return *default_instance_;
}

Pair* Pair::default_instance_ = NULL;

Pair* Pair::New() const {
  return new Pair;
}

void Pair::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_str()) {
      if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        str_->clear();
      }
    }
    if (has_mat()) {
      if (mat_ != NULL) mat_->::store_mat::mat_data::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Pair::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store_mat.Pair)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string str = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_mat;
        break;
      }

      // required .store_mat.mat_data mat = 2;
      case 2: {
        if (tag == 18) {
         parse_mat:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_mat()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store_mat.Pair)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store_mat.Pair)
  return false;
#undef DO_
}

void Pair::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store_mat.Pair)
  // required string str = 1;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->str(), output);
  }

  // required .store_mat.mat_data mat = 2;
  if (has_mat()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->mat(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:store_mat.Pair)
}

::google::protobuf::uint8* Pair::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:store_mat.Pair)
  // required string str = 1;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->str(), target);
  }

  // required .store_mat.mat_data mat = 2;
  if (has_mat()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->mat(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store_mat.Pair)
  return target;
}

int Pair::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string str = 1;
    if (has_str()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str());
    }

    // required .store_mat.mat_data mat = 2;
    if (has_mat()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->mat());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Pair::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Pair* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Pair*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Pair::MergeFrom(const Pair& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_str()) {
      set_str(from.str());
    }
    if (from.has_mat()) {
      mutable_mat()->::store_mat::mat_data::MergeFrom(from.mat());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Pair::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pair::CopyFrom(const Pair& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pair::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_mat()) {
    if (!this->mat().IsInitialized()) return false;
  }
  return true;
}

void Pair::Swap(Pair* other) {
  if (other != this) {
    std::swap(str_, other->str_);
    std::swap(mat_, other->mat_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Pair::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Pair_descriptor_;
  metadata.reflection = Pair_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int mat_data::kRowFieldNumber;
const int mat_data::kColFieldNumber;
const int mat_data::kFlagsFieldNumber;
const int mat_data::kStepFieldNumber;
const int mat_data::kSizeFieldNumber;
const int mat_data::kTypeFieldNumber;
const int mat_data::kDataFieldNumber;
#endif  // !_MSC_VER

mat_data::mat_data()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:store_mat.mat_data)
}

void mat_data::InitAsDefaultInstance() {
}

mat_data::mat_data(const mat_data& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:store_mat.mat_data)
}

void mat_data::SharedCtor() {
  _cached_size_ = 0;
  row_ = 0u;
  col_ = 0u;
  flags_ = 0u;
  step_ = 0u;
  size_ = 0u;
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

mat_data::~mat_data() {
  // @@protoc_insertion_point(destructor:store_mat.mat_data)
  SharedDtor();
}

void mat_data::SharedDtor() {
  if (this != default_instance_) {
  }
}

void mat_data::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* mat_data::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return mat_data_descriptor_;
}

const mat_data& mat_data::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_5fmat_2eproto();
  return *default_instance_;
}

mat_data* mat_data::default_instance_ = NULL;

mat_data* mat_data::New() const {
  return new mat_data;
}

void mat_data::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<mat_data*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(row_, type_);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool mat_data::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store_mat.mat_data)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 row = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &row_)));
          set_has_row();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_col;
        break;
      }

      // required uint32 col = 2;
      case 2: {
        if (tag == 16) {
         parse_col:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &col_)));
          set_has_col();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_flags;
        break;
      }

      // required uint32 flags = 3;
      case 3: {
        if (tag == 24) {
         parse_flags:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flags_)));
          set_has_flags();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_step;
        break;
      }

      // required uint32 step = 4;
      case 4: {
        if (tag == 32) {
         parse_step:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &step_)));
          set_has_step();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_size;
        break;
      }

      // required uint32 size = 5;
      case 5: {
        if (tag == 40) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_type;
        break;
      }

      // required uint32 type = 6;
      case 6: {
        if (tag == 48) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_data;
        break;
      }

      // repeated uint32 data = 7 [packed = true];
      case 7: {
        if (tag == 58) {
         parse_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_data())));
        } else if (tag == 56) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 58, input, this->mutable_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store_mat.mat_data)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store_mat.mat_data)
  return false;
#undef DO_
}

void mat_data::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store_mat.mat_data)
  // required uint32 row = 1;
  if (has_row()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->row(), output);
  }

  // required uint32 col = 2;
  if (has_col()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->col(), output);
  }

  // required uint32 flags = 3;
  if (has_flags()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->flags(), output);
  }

  // required uint32 step = 4;
  if (has_step()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->step(), output);
  }

  // required uint32 size = 5;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->size(), output);
  }

  // required uint32 type = 6;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->type(), output);
  }

  // repeated uint32 data = 7 [packed = true];
  if (this->data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(7, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_data_cached_byte_size_);
  }
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:store_mat.mat_data)
}

::google::protobuf::uint8* mat_data::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:store_mat.mat_data)
  // required uint32 row = 1;
  if (has_row()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->row(), target);
  }

  // required uint32 col = 2;
  if (has_col()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->col(), target);
  }

  // required uint32 flags = 3;
  if (has_flags()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->flags(), target);
  }

  // required uint32 step = 4;
  if (has_step()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->step(), target);
  }

  // required uint32 size = 5;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->size(), target);
  }

  // required uint32 type = 6;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->type(), target);
  }

  // repeated uint32 data = 7 [packed = true];
  if (this->data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      7,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _data_cached_byte_size_, target);
  }
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store_mat.mat_data)
  return target;
}

int mat_data::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 row = 1;
    if (has_row()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->row());
    }

    // required uint32 col = 2;
    if (has_col()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->col());
    }

    // required uint32 flags = 3;
    if (has_flags()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->flags());
    }

    // required uint32 step = 4;
    if (has_step()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->step());
    }

    // required uint32 size = 5;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->size());
    }

    // required uint32 type = 6;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

  }
  // repeated uint32 data = 7 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->data_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->data(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _data_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void mat_data::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const mat_data* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const mat_data*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void mat_data::MergeFrom(const mat_data& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_row()) {
      set_row(from.row());
    }
    if (from.has_col()) {
      set_col(from.col());
    }
    if (from.has_flags()) {
      set_flags(from.flags());
    }
    if (from.has_step()) {
      set_step(from.step());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void mat_data::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void mat_data::CopyFrom(const mat_data& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool mat_data::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void mat_data::Swap(mat_data* other) {
  if (other != this) {
    std::swap(row_, other->row_);
    std::swap(col_, other->col_);
    std::swap(flags_, other->flags_);
    std::swap(step_, other->step_);
    std::swap(size_, other->size_);
    std::swap(type_, other->type_);
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata mat_data::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = mat_data_descriptor_;
  metadata.reflection = mat_data_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace store_mat

// @@protoc_insertion_point(global_scope)
