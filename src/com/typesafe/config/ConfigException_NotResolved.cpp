// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_NotResolved.hpp>

com::typesafe::config::ConfigException_NotResolved::ConfigException_NotResolved(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_NotResolved::ConfigException_NotResolved(::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_NotResolved(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

com::typesafe::config::ConfigException_NotResolved::ConfigException_NotResolved(::java::lang::String* message) 
    : ConfigException_NotResolved(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

constexpr int64_t com::typesafe::config::ConfigException_NotResolved::serialVersionUID;

void com::typesafe::config::ConfigException_NotResolved::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}

void com::typesafe::config::ConfigException_NotResolved::ctor(::java::lang::String* message)
{
    ctor(message, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_NotResolved::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.NotResolved", 47);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_NotResolved::getClass0()
{
    return class_();
}

