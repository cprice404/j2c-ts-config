// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_IO.hpp>

com::typesafe::config::ConfigException_IO::ConfigException_IO(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_IO::ConfigException_IO(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_IO(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message,cause);
}

com::typesafe::config::ConfigException_IO::ConfigException_IO(ConfigOrigin* origin, ::java::lang::String* message) 
    : ConfigException_IO(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message);
}

constexpr int64_t com::typesafe::config::ConfigException_IO::serialVersionUID;

void com::typesafe::config::ConfigException_IO::ctor(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(origin, message, cause);
}

void com::typesafe::config::ConfigException_IO::ctor(ConfigOrigin* origin, ::java::lang::String* message)
{
    ctor(origin, message, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_IO::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.IO", 38);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_IO::getClass0()
{
    return class_();
}

