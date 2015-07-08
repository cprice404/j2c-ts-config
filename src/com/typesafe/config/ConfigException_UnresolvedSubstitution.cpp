// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_UnresolvedSubstitution.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::ConfigException_UnresolvedSubstitution::ConfigException_UnresolvedSubstitution(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_UnresolvedSubstitution::ConfigException_UnresolvedSubstitution(ConfigOrigin* origin, ::java::lang::String* detail, ::java::lang::Throwable* cause) 
    : ConfigException_UnresolvedSubstitution(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,detail,cause);
}

com::typesafe::config::ConfigException_UnresolvedSubstitution::ConfigException_UnresolvedSubstitution(ConfigOrigin* origin, ::java::lang::String* detail) 
    : ConfigException_UnresolvedSubstitution(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,detail);
}

constexpr int64_t com::typesafe::config::ConfigException_UnresolvedSubstitution::serialVersionUID;

void com::typesafe::config::ConfigException_UnresolvedSubstitution::ctor(ConfigOrigin* origin, ::java::lang::String* detail, ::java::lang::Throwable* cause)
{
    super::ctor(origin, ::java::lang::StringBuilder().append(u"Could not resolve substitution to a value: "_j)->append(detail)->toString(), cause);
}

void com::typesafe::config::ConfigException_UnresolvedSubstitution::ctor(ConfigOrigin* origin, ::java::lang::String* detail)
{
    ctor(origin, detail, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_UnresolvedSubstitution::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.UnresolvedSubstitution", 58);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_UnresolvedSubstitution::getClass0()
{
    return class_();
}

