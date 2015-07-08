// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_BadPath.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>

com::typesafe::config::ConfigException_BadPath::ConfigException_BadPath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_BadPath::ConfigException_BadPath(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_BadPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,message,cause);
}

com::typesafe::config::ConfigException_BadPath::ConfigException_BadPath(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message) 
    : ConfigException_BadPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,message);
}

com::typesafe::config::ConfigException_BadPath::ConfigException_BadPath(::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_BadPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,message,cause);
}

com::typesafe::config::ConfigException_BadPath::ConfigException_BadPath(::java::lang::String* path, ::java::lang::String* message) 
    : ConfigException_BadPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,message);
}

com::typesafe::config::ConfigException_BadPath::ConfigException_BadPath(ConfigOrigin* origin, ::java::lang::String* message) 
    : ConfigException_BadPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message);
}

constexpr int64_t com::typesafe::config::ConfigException_BadPath::serialVersionUID;

void com::typesafe::config::ConfigException_BadPath::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(origin, path != nullptr ? (::java::lang::StringBuilder().append(u"Invalid path '"_j)->append(path)
        ->append(u"': "_j)
        ->append(message)->toString()) : message, cause);
}

void com::typesafe::config::ConfigException_BadPath::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* message)
{
    ctor(origin, path, message, nullptr);
}

void com::typesafe::config::ConfigException_BadPath::ctor(::java::lang::String* path, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(path != nullptr ? (::java::lang::StringBuilder().append(u"Invalid path '"_j)->append(path)
        ->append(u"': "_j)
        ->append(message)->toString()) : message, cause);
}

void com::typesafe::config::ConfigException_BadPath::ctor(::java::lang::String* path, ::java::lang::String* message)
{
    ctor(path, message, static_cast< ::java::lang::Throwable* >(nullptr));
}

void com::typesafe::config::ConfigException_BadPath::ctor(ConfigOrigin* origin, ::java::lang::String* message)
{
    ctor(origin, static_cast< ::java::lang::String* >(nullptr), message);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_BadPath::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.BadPath", 43);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_BadPath::getClass0()
{
    return class_();
}

