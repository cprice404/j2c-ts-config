// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>

com::typesafe::config::ConfigException_BugOrBroken::ConfigException_BugOrBroken(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_BugOrBroken::ConfigException_BugOrBroken(::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException_BugOrBroken(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

com::typesafe::config::ConfigException_BugOrBroken::ConfigException_BugOrBroken(::java::lang::String* message) 
    : ConfigException_BugOrBroken(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

constexpr int64_t com::typesafe::config::ConfigException_BugOrBroken::serialVersionUID;

void com::typesafe::config::ConfigException_BugOrBroken::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}

void com::typesafe::config::ConfigException_BugOrBroken::ctor(::java::lang::String* message)
{
    ctor(message, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_BugOrBroken::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.BugOrBroken", 47);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_BugOrBroken::getClass0()
{
    return class_();
}

