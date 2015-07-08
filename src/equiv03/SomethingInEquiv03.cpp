// Generated from /config/src/test/scala/equiv03/SomethingInEquiv03.java
#include <equiv03/SomethingInEquiv03.hpp>

equiv03::SomethingInEquiv03::SomethingInEquiv03(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

equiv03::SomethingInEquiv03::SomethingInEquiv03()
    : SomethingInEquiv03(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* equiv03::SomethingInEquiv03::class_()
{
    static ::java::lang::Class* c = ::class_(u"equiv03.SomethingInEquiv03", 26);
    return c;
}

java::lang::Class* equiv03::SomethingInEquiv03::getClass0()
{
    return class_();
}

