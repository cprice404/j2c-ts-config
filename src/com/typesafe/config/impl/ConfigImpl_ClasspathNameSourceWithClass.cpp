// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_ClasspathNameSourceWithClass.hpp>

#include <com/typesafe/config/impl/Parseable.hpp>
#include <java/lang/Class.hpp>

com::typesafe::config::impl::ConfigImpl_ClasspathNameSourceWithClass::ConfigImpl_ClasspathNameSourceWithClass(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_ClasspathNameSourceWithClass::ConfigImpl_ClasspathNameSourceWithClass(::java::lang::Class* klass) 
    : ConfigImpl_ClasspathNameSourceWithClass(*static_cast< ::default_init_tag* >(0))
{
    ctor(klass);
}

void com::typesafe::config::impl::ConfigImpl_ClasspathNameSourceWithClass::ctor(::java::lang::Class* klass)
{
    super::ctor();
    this->klass = klass;
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::ConfigImpl_ClasspathNameSourceWithClass::nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* parseOptions)
{
    return Parseable::newResources(klass, name, parseOptions);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_ClasspathNameSourceWithClass::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.ClasspathNameSourceWithClass", 64);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_ClasspathNameSourceWithClass::getClass0()
{
    return class_();
}

