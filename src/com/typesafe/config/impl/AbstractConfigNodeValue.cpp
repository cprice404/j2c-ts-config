// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigNodeValue.java
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>

com::typesafe::config::impl::AbstractConfigNodeValue::AbstractConfigNodeValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::AbstractConfigNodeValue::AbstractConfigNodeValue()
    : AbstractConfigNodeValue(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::AbstractConfigNodeValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.AbstractConfigNodeValue", 48);
    return c;
}

java::lang::Class* com::typesafe::config::impl::AbstractConfigNodeValue::getClass0()
{
    return class_();
}

