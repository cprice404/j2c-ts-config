// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeConcatenation.java
#include <com/typesafe/config/impl/ConfigNodeConcatenation.hpp>

com::typesafe::config::impl::ConfigNodeConcatenation::ConfigNodeConcatenation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeConcatenation::ConfigNodeConcatenation(::java::util::Collection* children) 
    : ConfigNodeConcatenation(*static_cast< ::default_init_tag* >(0))
{
    ctor(children);
}

void com::typesafe::config::impl::ConfigNodeConcatenation::ctor(::java::util::Collection* children)
{
    super::ctor(children);
}

com::typesafe::config::impl::ConfigNodeConcatenation* com::typesafe::config::impl::ConfigNodeConcatenation::newNode(::java::util::Collection* nodes)
{
    return new ConfigNodeConcatenation(nodes);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeConcatenation::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeConcatenation", 48);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeConcatenation::getClass0()
{
    return class_();
}

