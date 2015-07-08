// Generated from /config/src/main/java/com/typesafe/config/impl/FromMapMode.java
#include <com/typesafe/config/impl/FromMapMode.hpp>

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
typedef ::SubArray< ::com::typesafe::config::impl::FromMapMode, ::java::lang::EnumArray > FromMapModeArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

com::typesafe::config::impl::FromMapMode::FromMapMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::FromMapMode::FromMapMode(::java::lang::String* name, int ordinal)
    : FromMapMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::impl::FromMapMode* com::typesafe::config::impl::FromMapMode::KEYS_ARE_PATHS = new ::com::typesafe::config::impl::FromMapMode(u"KEYS_ARE_PATHS"_j, 0);
com::typesafe::config::impl::FromMapMode* com::typesafe::config::impl::FromMapMode::KEYS_ARE_KEYS = new ::com::typesafe::config::impl::FromMapMode(u"KEYS_ARE_KEYS"_j, 1);
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::FromMapMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.FromMapMode", 36);
    return c;
}

com::typesafe::config::impl::FromMapMode* com::typesafe::config::impl::FromMapMode::valueOf(::java::lang::String* a0)
{
    if(KEYS_ARE_KEYS->toString()->equals(a0))
        return KEYS_ARE_KEYS;
    if(KEYS_ARE_PATHS->toString()->equals(a0))
        return KEYS_ARE_PATHS;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::FromMapModeArray* com::typesafe::config::impl::FromMapMode::values()
{
    return new com::typesafe::config::impl::FromMapModeArray({
        KEYS_ARE_KEYS,
        KEYS_ARE_PATHS,
    });
}

java::lang::Class* com::typesafe::config::impl::FromMapMode::getClass0()
{
    return class_();
}

