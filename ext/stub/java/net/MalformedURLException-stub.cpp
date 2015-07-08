// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/net/MalformedURLException.hpp>

extern void unimplemented_(const char16_t* name);
java::net::MalformedURLException::MalformedURLException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::MalformedURLException::MalformedURLException()
    : MalformedURLException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::net::MalformedURLException::MalformedURLException(::java::lang::String* msg)
    : MalformedURLException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

constexpr int64_t java::net::MalformedURLException::serialVersionUID;

void ::java::net::MalformedURLException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::MalformedURLException::ctor()");
}

void ::java::net::MalformedURLException::ctor(::java::lang::String* msg)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::MalformedURLException::ctor(::java::lang::String* msg)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::net::MalformedURLException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.MalformedURLException", 30);
    return c;
}

java::lang::Class* java::net::MalformedURLException::getClass0()
{
    return class_();
}

