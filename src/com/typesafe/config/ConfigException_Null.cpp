// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_Null.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::ConfigException_Null::ConfigException_Null(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_Null::ConfigException_Null(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::Throwable* cause) 
    : ConfigException_Null(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,expected,cause);
}

com::typesafe::config::ConfigException_Null::ConfigException_Null(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected) 
    : ConfigException_Null(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,path,expected);
}

constexpr int64_t com::typesafe::config::ConfigException_Null::serialVersionUID;

java::lang::String* com::typesafe::config::ConfigException_Null::makeMessage(::java::lang::String* path, ::java::lang::String* expected)
{
    clinit();
    if(expected != nullptr) {
        return ::java::lang::StringBuilder().append(u"Configuration key '"_j)->append(path)
            ->append(u"' is set to null but expected "_j)
            ->append(expected)->toString();
    } else {
        return ::java::lang::StringBuilder().append(u"Configuration key '"_j)->append(path)
            ->append(u"' is null"_j)->toString();
    }
}

void com::typesafe::config::ConfigException_Null::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::Throwable* cause)
{
    super::ctor(origin, makeMessage(path, expected), cause);
}

void com::typesafe::config::ConfigException_Null::ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected)
{
    ctor(origin, path, expected, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_Null::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.Null", 40);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_Null::getClass0()
{
    return class_();
}

