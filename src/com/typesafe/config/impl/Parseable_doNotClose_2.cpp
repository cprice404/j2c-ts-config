// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_doNotClose_2.hpp>

com::typesafe::config::impl::Parseable_doNotClose_2::Parseable_doNotClose_2(::java::io::Reader* in)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(in);
}

void com::typesafe::config::impl::Parseable_doNotClose_2::close()
{
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_doNotClose_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Parseable_doNotClose_2::getClass0()
{
    return class_();
}

