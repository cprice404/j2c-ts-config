// Generated from /config/src/main/java/com/typesafe/config/impl/OriginType.java
#include <com/typesafe/config/impl/OriginType.hpp>

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
typedef ::SubArray< ::com::typesafe::config::impl::OriginType, ::java::lang::EnumArray > OriginTypeArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

com::typesafe::config::impl::OriginType::OriginType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::OriginType::OriginType(::java::lang::String* name, int ordinal)
    : OriginType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::impl::OriginType* com::typesafe::config::impl::OriginType::GENERIC = new ::com::typesafe::config::impl::OriginType(u"GENERIC"_j, 0);
com::typesafe::config::impl::OriginType* com::typesafe::config::impl::OriginType::FILE = new ::com::typesafe::config::impl::OriginType(u"FILE"_j, 1);
com::typesafe::config::impl::OriginType* com::typesafe::config::impl::OriginType::URL = new ::com::typesafe::config::impl::OriginType(u"URL"_j, 2);
com::typesafe::config::impl::OriginType* com::typesafe::config::impl::OriginType::RESOURCE = new ::com::typesafe::config::impl::OriginType(u"RESOURCE"_j, 3);
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::OriginType::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.OriginType", 35);
    return c;
}

com::typesafe::config::impl::OriginType* com::typesafe::config::impl::OriginType::valueOf(::java::lang::String* a0)
{
    if(FILE->toString()->equals(a0))
        return FILE;
    if(GENERIC->toString()->equals(a0))
        return GENERIC;
    if(RESOURCE->toString()->equals(a0))
        return RESOURCE;
    if(URL->toString()->equals(a0))
        return URL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::OriginTypeArray* com::typesafe::config::impl::OriginType::values()
{
    return new com::typesafe::config::impl::OriginTypeArray({
        FILE,
        GENERIC,
        RESOURCE,
        URL,
    });
}

java::lang::Class* com::typesafe::config::impl::OriginType::getClass0()
{
    return class_();
}

