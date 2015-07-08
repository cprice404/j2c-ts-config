// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
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
typedef ::SubArray< ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType, ::java::lang::EnumArray > SerializedConfigValue_SerializedValueTypeArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::impl::SerializedConfigValue_SerializedValueType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static SerializedConfigValue_SerializedValueType *NULL_;
    static SerializedConfigValue_SerializedValueType *BOOLEAN;
    static SerializedConfigValue_SerializedValueType *INT;
    static SerializedConfigValue_SerializedValueType *LONG;
    static SerializedConfigValue_SerializedValueType *DOUBLE;
    static SerializedConfigValue_SerializedValueType *STRING;
    static SerializedConfigValue_SerializedValueType *LIST;
    static SerializedConfigValue_SerializedValueType *OBJECT;
    ::com::typesafe::config::ConfigValueType* configType {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::com::typesafe::config::ConfigValueType* configType);

public: /* package */
    static SerializedConfigValue_SerializedValueType* forInt(int32_t b);
    static SerializedConfigValue_SerializedValueType* forValue(::com::typesafe::config::ConfigValue* value);

    // Generated

private:
    SerializedConfigValue_SerializedValueType(::java::lang::String* name, int ordinal, ::com::typesafe::config::ConfigValueType* configType);
protected:
    SerializedConfigValue_SerializedValueType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static SerializedConfigValue_SerializedValueType* valueOf(::java::lang::String* a0);
    static SerializedConfigValue_SerializedValueTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SerializedConfigValue;
    friend class SerializedConfigValue_SerializedField;
    friend class SerializedConfigValue_FieldOut;
};
