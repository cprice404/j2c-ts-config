// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigString.java
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>

com::typesafe::config::impl::ConfigString_Quoted::ConfigString_Quoted(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigString_Quoted::ConfigString_Quoted(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value) 
    : ConfigString_Quoted(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value);
}

void com::typesafe::config::impl::ConfigString_Quoted::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value)
{
    super::ctor(origin, value);
}

com::typesafe::config::impl::ConfigString_Quoted* com::typesafe::config::impl::ConfigString_Quoted::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return new ConfigString_Quoted(origin, value);
}

java::lang::Object* com::typesafe::config::impl::ConfigString_Quoted::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigString_Quoted::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigString.Quoted", 44);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigString_Quoted::getClass0()
{
    return class_();
}

