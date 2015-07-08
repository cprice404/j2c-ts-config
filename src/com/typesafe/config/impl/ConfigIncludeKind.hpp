// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigIncludeKind.java

#pragma once

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
typedef ::SubArray< ::com::typesafe::config::impl::ConfigIncludeKind, ::java::lang::EnumArray > ConfigIncludeKindArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::impl::ConfigIncludeKind final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ConfigIncludeKind *URL;
    static ConfigIncludeKind *FILE;
    static ConfigIncludeKind *CLASSPATH;
    static ConfigIncludeKind *HEURISTIC;

    // Generated

public:
    ConfigIncludeKind(::java::lang::String* name, int ordinal);
protected:
    ConfigIncludeKind(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ConfigIncludeKind* valueOf(::java::lang::String* a0);
    static ConfigIncludeKindArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
