// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
}  // namespace lang

namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
}  // namespace lang
}  // namespace java

namespace com {
namespace typesafe {
namespace config {
namespace impl {
typedef ::SubArray< ::com::typesafe::config::impl::SerializedConfigValue_SerializedField, ::java::lang::EnumArray > SerializedConfigValue_SerializedFieldArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::impl::SerializedConfigValue_SerializedField final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static SerializedConfigValue_SerializedField *UNKNOWN;
    static SerializedConfigValue_SerializedField *END_MARKER;
    static SerializedConfigValue_SerializedField *ROOT_VALUE;
    static SerializedConfigValue_SerializedField *ROOT_WAS_CONFIG;
    static SerializedConfigValue_SerializedField *VALUE_DATA;
    static SerializedConfigValue_SerializedField *VALUE_ORIGIN;
    static SerializedConfigValue_SerializedField *ORIGIN_DESCRIPTION;
    static SerializedConfigValue_SerializedField *ORIGIN_LINE_NUMBER;
    static SerializedConfigValue_SerializedField *ORIGIN_END_LINE_NUMBER;
    static SerializedConfigValue_SerializedField *ORIGIN_TYPE;
    static SerializedConfigValue_SerializedField *ORIGIN_URL;
    static SerializedConfigValue_SerializedField *ORIGIN_COMMENTS;
    static SerializedConfigValue_SerializedField *ORIGIN_NULL_URL;
    static SerializedConfigValue_SerializedField *ORIGIN_NULL_COMMENTS;
    static SerializedConfigValue_SerializedField *ORIGIN_RESOURCE;
    static SerializedConfigValue_SerializedField *ORIGIN_NULL_RESOURCE;
    static SerializedConfigValue_SerializedField* forInt(int32_t b);

    // Generated

public:
    SerializedConfigValue_SerializedField(::java::lang::String* name, int ordinal);
protected:
    SerializedConfigValue_SerializedField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static SerializedConfigValue_SerializedField* valueOf(::java::lang::String* a0);
    static SerializedConfigValue_SerializedFieldArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SerializedConfigValue;
    friend class SerializedConfigValue_SerializedValueType;
    friend class SerializedConfigValue_FieldOut;
};
