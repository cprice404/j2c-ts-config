// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_Parse.hpp>

com::typesafe::config::ConfigException_Parse::ConfigException_Parse(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_Parse::ConfigException_Parse(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_Parse(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message,cause);
}

com::typesafe::config::ConfigException_Parse::ConfigException_Parse(ConfigOrigin* origin, ::java::lang::String* message) 
    : ConfigException_Parse(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message);
}

constexpr int64_t com::typesafe::config::ConfigException_Parse::serialVersionUID;

void com::typesafe::config::ConfigException_Parse::ctor(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(origin, message, cause);
}

void com::typesafe::config::ConfigException_Parse::ctor(ConfigOrigin* origin, ::java::lang::String* message)
{
    ctor(origin, message, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_Parse::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.Parse", 41);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_Parse::getClass0()
{
    return class_();
}

