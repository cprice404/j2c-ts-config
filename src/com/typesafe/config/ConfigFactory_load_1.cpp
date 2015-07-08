// Generated from /config/src/main/java/com/typesafe/config/ConfigFactory.java
#include <com/typesafe/config/ConfigFactory_load_1.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigFactory.hpp>

com::typesafe::config::ConfigFactory_load_1::ConfigFactory_load_1(::java::lang::ClassLoader* loader, ConfigParseOptions* withLoader)
    : super(*static_cast< ::default_init_tag* >(0))
    , loader(loader)
    , withLoader(withLoader)
{
    clinit();
    ctor();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory_load_1::call()
{
    return ConfigFactory::load(loader, ConfigFactory::defaultApplication(withLoader));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigFactory_load_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigFactory_load_1::getClass0()
{
    return class_();
}

