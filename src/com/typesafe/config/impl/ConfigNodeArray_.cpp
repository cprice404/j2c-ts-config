// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeArray.java
#include <com/typesafe/config/impl/ConfigNodeArray_.hpp>

com::typesafe::config::impl::ConfigNodeArray_::ConfigNodeArray_(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeArray_::ConfigNodeArray_(::java::util::Collection* children) 
    : ConfigNodeArray_(*static_cast< ::default_init_tag* >(0))
{
    ctor(children);
}

void com::typesafe::config::impl::ConfigNodeArray_::ctor(::java::util::Collection* children)
{
    super::ctor(children);
}

com::typesafe::config::impl::ConfigNodeArray_* com::typesafe::config::impl::ConfigNodeArray_::newNode(::java::util::Collection* nodes)
{
    return new ConfigNodeArray_(nodes);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeArray_::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeArray", 40);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeArray_::getClass0()
{
    return class_();
}

