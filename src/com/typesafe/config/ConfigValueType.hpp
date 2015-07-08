// Generated from /config/src/main/java/com/typesafe/config/ConfigValueType.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
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
typedef ::SubArray< ::com::typesafe::config::ConfigValueType, ::java::lang::EnumArray > ConfigValueTypeArray;
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::ConfigValueType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ConfigValueType *OBJECT;
    static ConfigValueType *LIST;
    static ConfigValueType *NUMBER;
    static ConfigValueType *BOOLEAN;
    static ConfigValueType *NULL_;
    static ConfigValueType *STRING;

    // Generated

public:
    ConfigValueType(::java::lang::String* name, int ordinal);
protected:
    ConfigValueType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ConfigValueType* valueOf(::java::lang::String* a0);
    static ConfigValueTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
