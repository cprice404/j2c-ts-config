// Generated from /config/src/main/java/com/typesafe/config/ConfigSyntax.java
#include <com/typesafe/config/ConfigSyntax.hpp>

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
typedef ::SubArray< ::com::typesafe::config::ConfigSyntax, ::java::lang::EnumArray > ConfigSyntaxArray;
}  // namespace config
}  // namespace typesafe
}  // namespace com

com::typesafe::config::ConfigSyntax::ConfigSyntax(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigSyntax::ConfigSyntax(::java::lang::String* name, int ordinal)
    : ConfigSyntax(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::ConfigSyntax::JSON = new ::com::typesafe::config::ConfigSyntax(u"JSON"_j, 0);
com::typesafe::config::ConfigSyntax* com::typesafe::config::ConfigSyntax::CONF = new ::com::typesafe::config::ConfigSyntax(u"CONF"_j, 1);
com::typesafe::config::ConfigSyntax* com::typesafe::config::ConfigSyntax::PROPERTIES = new ::com::typesafe::config::ConfigSyntax(u"PROPERTIES"_j, 2);
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigSyntax::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigSyntax", 32);
    return c;
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::ConfigSyntax::valueOf(::java::lang::String* a0)
{
    if(CONF->toString()->equals(a0))
        return CONF;
    if(JSON->toString()->equals(a0))
        return JSON;
    if(PROPERTIES->toString()->equals(a0))
        return PROPERTIES;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::ConfigSyntaxArray* com::typesafe::config::ConfigSyntax::values()
{
    return new com::typesafe::config::ConfigSyntaxArray({
        CONF,
        JSON,
        PROPERTIES,
    });
}

java::lang::Class* com::typesafe::config::ConfigSyntax::getClass0()
{
    return class_();
}

