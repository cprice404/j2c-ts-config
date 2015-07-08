// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_BadValue.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>

com::typesafe::config::ConfigException_BadValue::ConfigException_BadValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_BadValue::ConfigException_BadValue(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_BadValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,message,cause);
}

com::typesafe::config::ConfigException_BadValue::ConfigException_BadValue(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message) 
    : ConfigException_BadValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,message);
}

com::typesafe::config::ConfigException_BadValue::ConfigException_BadValue(::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_BadValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,message,cause);
}

com::typesafe::config::ConfigException_BadValue::ConfigException_BadValue(::java::lang::String* path, ::java::lang::String* message) 
    : ConfigException_BadValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,message);
}

constexpr int64_t com::typesafe::config::ConfigException_BadValue::serialVersionUID;

void com::typesafe::config::ConfigException_BadValue::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(origin, ::java::lang::StringBuilder().append(u"Invalid value at '"_j)->append(path)
        ->append(u"': "_j)
        ->append(message)->toString(), cause);
}

void com::typesafe::config::ConfigException_BadValue::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message)
{
    ctor(origin, path, message, nullptr);
}

void com::typesafe::config::ConfigException_BadValue::ctor(::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(::java::lang::StringBuilder().append(u"Invalid value at '"_j)->append(path)
        ->append(u"': "_j)
        ->append(message)->toString(), cause);
}

void com::typesafe::config::ConfigException_BadValue::ctor(::java::lang::String* path, ::java::lang::String* message)
{
    ctor(path, message, static_cast< ::java::lang::Throwable* >(nullptr));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_BadValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.BadValue", 44);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_BadValue::getClass0()
{
    return class_();
}

