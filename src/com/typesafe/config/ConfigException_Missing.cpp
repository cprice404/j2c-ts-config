// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_Missing.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>

com::typesafe::config::ConfigException_Missing::ConfigException_Missing(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_Missing::ConfigException_Missing(::java::lang::String* path, ::java::lang::Throwable* cause) 
    : ConfigException_Missing(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,cause);
}

com::typesafe::config::ConfigException_Missing::ConfigException_Missing(::java::lang::String* path) 
    : ConfigException_Missing(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

com::typesafe::config::ConfigException_Missing::ConfigException_Missing(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_Missing(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message,cause);
}

com::typesafe::config::ConfigException_Missing::ConfigException_Missing(ConfigOrigin* origin, ::java::lang::String* message) 
    : ConfigException_Missing(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message);
}

constexpr int64_t com::typesafe::config::ConfigException_Missing::serialVersionUID;

void com::typesafe::config::ConfigException_Missing::ctor(::java::lang::String* path, ::java::lang::Throwable* cause)
{
    super::ctor(::java::lang::StringBuilder().append(u"No configuration setting found for key '"_j)->append(path)
        ->append(u"'"_j)->toString(), cause);
}

void com::typesafe::config::ConfigException_Missing::ctor(::java::lang::String* path)
{
    ctor(path, static_cast< ::java::lang::Throwable* >(nullptr));
}

void com::typesafe::config::ConfigException_Missing::ctor(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(origin, message, cause);
}

void com::typesafe::config::ConfigException_Missing::ctor(ConfigOrigin* origin, ::java::lang::String* message)
{
    ctor(origin, message, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_Missing::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.Missing", 43);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_Missing::getClass0()
{
    return class_();
}

