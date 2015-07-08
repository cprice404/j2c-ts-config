// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_ClasspathNameSource.hpp>

#include <com/typesafe/config/impl/Parseable.hpp>

com::typesafe::config::impl::ConfigImpl_ClasspathNameSource::ConfigImpl_ClasspathNameSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_ClasspathNameSource::ConfigImpl_ClasspathNameSource()
    : ConfigImpl_ClasspathNameSource(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::ConfigImpl_ClasspathNameSource::nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* parseOptions)
{
    return Parseable::newResources(name, parseOptions);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_ClasspathNameSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.ClasspathNameSource", 55);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_ClasspathNameSource::getClass0()
{
    return class_();
}

