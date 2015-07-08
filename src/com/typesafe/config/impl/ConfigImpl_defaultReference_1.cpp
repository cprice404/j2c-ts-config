// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_defaultReference_1.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigImpl_defaultReference_1::ConfigImpl_defaultReference_1(::java::lang::ClassLoader* loader)
    : super(*static_cast< ::default_init_tag* >(0))
    , loader(loader)
{
    clinit();
    ctor();
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl_defaultReference_1::call()
{
    auto unresolvedResources = npc(npc(Parseable::newResources(u"reference.conf"_j, npc(::com::typesafe::config::ConfigParseOptions::defaults())->setClassLoader(loader)))->parse())->toConfig();
    return npc(npc(ConfigImpl::systemPropertiesAsConfig())->withFallback(unresolvedResources))->resolve();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_defaultReference_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_defaultReference_1::getClass0()
{
    return class_();
}

