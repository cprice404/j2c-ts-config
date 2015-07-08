// Generated from /config/src/main/java/com/typesafe/config/ConfigResolveOptions.java
#include <com/typesafe/config/ConfigResolveOptions.hpp>

#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::ConfigResolveOptions::ConfigResolveOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigResolveOptions::ConfigResolveOptions(bool useSystemEnvironment, bool allowUnresolved) 
    : ConfigResolveOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(useSystemEnvironment,allowUnresolved);
}

void com::typesafe::config::ConfigResolveOptions::ctor(bool useSystemEnvironment, bool allowUnresolved)
{
    super::ctor();
    this->useSystemEnvironment = useSystemEnvironment;
    this->allowUnresolved = allowUnresolved;
}

com::typesafe::config::ConfigResolveOptions* com::typesafe::config::ConfigResolveOptions::defaults()
{
    clinit();
    return new ConfigResolveOptions(true, false);
}

com::typesafe::config::ConfigResolveOptions* com::typesafe::config::ConfigResolveOptions::noSystem()
{
    clinit();
    return npc(defaults())->setUseSystemEnvironment(false);
}

com::typesafe::config::ConfigResolveOptions* com::typesafe::config::ConfigResolveOptions::setUseSystemEnvironment(bool value)
{
    return new ConfigResolveOptions(value, allowUnresolved);
}

bool com::typesafe::config::ConfigResolveOptions::getUseSystemEnvironment()
{
    return useSystemEnvironment;
}

com::typesafe::config::ConfigResolveOptions* com::typesafe::config::ConfigResolveOptions::setAllowUnresolved(bool value)
{
    return new ConfigResolveOptions(useSystemEnvironment, value);
}

bool com::typesafe::config::ConfigResolveOptions::getAllowUnresolved()
{
    return allowUnresolved;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigResolveOptions::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigResolveOptions", 40);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigResolveOptions::getClass0()
{
    return class_();
}

