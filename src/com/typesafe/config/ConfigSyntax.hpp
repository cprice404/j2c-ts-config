// Generated from /config/src/main/java/com/typesafe/config/ConfigSyntax.java

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
typedef ::SubArray< ::com::typesafe::config::ConfigSyntax, ::java::lang::EnumArray > ConfigSyntaxArray;
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::ConfigSyntax final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ConfigSyntax *JSON;
    static ConfigSyntax *CONF;
    static ConfigSyntax *PROPERTIES;

    // Generated

public:
    ConfigSyntax(::java::lang::String* name, int ordinal);
protected:
    ConfigSyntax(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ConfigSyntax* valueOf(::java::lang::String* a0);
    static ConfigSyntaxArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
