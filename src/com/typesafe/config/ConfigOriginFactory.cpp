// Generated from /config/src/main/java/com/typesafe/config/ConfigOriginFactory.java
#include <com/typesafe/config/ConfigOriginFactory.hpp>

#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>

com::typesafe::config::ConfigOriginFactory::ConfigOriginFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigOriginFactory::ConfigOriginFactory() 
    : ConfigOriginFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::ConfigOriginFactory::ctor()
{
    super::ctor();
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::ConfigOriginFactory::newSimple()
{
    clinit();
    return newSimple(nullptr);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::ConfigOriginFactory::newSimple(::java::lang::String* description)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::newSimpleOrigin(description);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::ConfigOriginFactory::newFile(::java::lang::String* filename)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::newFileOrigin(filename);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::ConfigOriginFactory::newURL(::java::net::URL* url)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::newURLOrigin(url);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigOriginFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigOriginFactory", 39);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigOriginFactory::getClass0()
{
    return class_();
}

