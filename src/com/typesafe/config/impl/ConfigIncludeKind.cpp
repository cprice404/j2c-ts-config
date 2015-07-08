// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigIncludeKind.java
#include <com/typesafe/config/impl/ConfigIncludeKind.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

com::typesafe::config::impl::ConfigIncludeKind::ConfigIncludeKind(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigIncludeKind::ConfigIncludeKind(::java::lang::String* name, int ordinal)
    : ConfigIncludeKind(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::impl::ConfigIncludeKind* com::typesafe::config::impl::ConfigIncludeKind::URL = new ::com::typesafe::config::impl::ConfigIncludeKind(u"URL"_j, 0);
com::typesafe::config::impl::ConfigIncludeKind* com::typesafe::config::impl::ConfigIncludeKind::FILE = new ::com::typesafe::config::impl::ConfigIncludeKind(u"FILE"_j, 1);
com::typesafe::config::impl::ConfigIncludeKind* com::typesafe::config::impl::ConfigIncludeKind::CLASSPATH = new ::com::typesafe::config::impl::ConfigIncludeKind(u"CLASSPATH"_j, 2);
com::typesafe::config::impl::ConfigIncludeKind* com::typesafe::config::impl::ConfigIncludeKind::HEURISTIC = new ::com::typesafe::config::impl::ConfigIncludeKind(u"HEURISTIC"_j, 3);
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigIncludeKind::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigIncludeKind", 42);
    return c;
}

com::typesafe::config::impl::ConfigIncludeKind* com::typesafe::config::impl::ConfigIncludeKind::valueOf(::java::lang::String* a0)
{
    if(CLASSPATH->toString()->equals(a0))
        return CLASSPATH;
    if(FILE->toString()->equals(a0))
        return FILE;
    if(HEURISTIC->toString()->equals(a0))
        return HEURISTIC;
    if(URL->toString()->equals(a0))
        return URL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::ConfigIncludeKindArray* com::typesafe::config::impl::ConfigIncludeKind::values()
{
    return new com::typesafe::config::impl::ConfigIncludeKindArray({
        CLASSPATH,
        FILE,
        HEURISTIC,
        URL,
    });
}

java::lang::Class* com::typesafe::config::impl::ConfigIncludeKind::getClass0()
{
    return class_();
}

