// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveStatus.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
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
typedef ::SubArray< ::com::typesafe::config::impl::ResolveStatus, ::java::lang::EnumArray > ResolveStatusArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::impl::ResolveStatus final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ResolveStatus *UNRESOLVED;
    static ResolveStatus *RESOLVED;
    static ResolveStatus* fromValues(::java::util::Collection* values);
    static ResolveStatus* fromBoolean(bool resolved);

    // Generated

public:
    ResolveStatus(::java::lang::String* name, int ordinal);
protected:
    ResolveStatus(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ResolveStatus* valueOf(::java::lang::String* a0);
    static ResolveStatusArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
