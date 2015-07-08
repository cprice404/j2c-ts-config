// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_WrongType.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::ConfigException_WrongType::ConfigException_WrongType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_WrongType::ConfigException_WrongType(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::String* actual, ::java::lang::Throwable* cause) 
    : ConfigException_WrongType(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,expected,actual,cause);
}

com::typesafe::config::ConfigException_WrongType::ConfigException_WrongType(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::String* actual) 
    : ConfigException_WrongType(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,expected,actual);
}

com::typesafe::config::ConfigException_WrongType::ConfigException_WrongType(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_WrongType(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message,cause);
}

com::typesafe::config::ConfigException_WrongType::ConfigException_WrongType(ConfigOrigin* origin, ::java::lang::String* message) 
    : ConfigException_WrongType(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message);
}

constexpr int64_t com::typesafe::config::ConfigException_WrongType::serialVersionUID;

void com::typesafe::config::ConfigException_WrongType::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::String* actual, ::java::lang::Throwable* cause)
{
    super::ctor(origin, ::java::lang::StringBuilder().append(path)->append(u" has type "_j)
        ->append(actual)
        ->append(u" rather than "_j)
        ->append(expected)->toString(), cause);
}

void com::typesafe::config::ConfigException_WrongType::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::String* actual)
{
    ctor(origin, path, expected, actual, nullptr);
}

void com::typesafe::config::ConfigException_WrongType::ctor(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(origin, message, cause);
}

void com::typesafe::config::ConfigException_WrongType::ctor(ConfigOrigin* origin, ::java::lang::String* message)
{
    super::ctor(origin, message, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_WrongType::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.WrongType", 45);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_WrongType::getClass0()
{
    return class_();
}

