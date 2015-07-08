// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/UnsupportedEncodingException.hpp>

extern void unimplemented_(const char16_t* name);
java::io::UnsupportedEncodingException::UnsupportedEncodingException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::UnsupportedEncodingException::UnsupportedEncodingException()
    : UnsupportedEncodingException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::UnsupportedEncodingException::UnsupportedEncodingException(::java::lang::String* s)
    : UnsupportedEncodingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::io::UnsupportedEncodingException::serialVersionUID;

void ::java::io::UnsupportedEncodingException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::UnsupportedEncodingException::ctor()");
}

void ::java::io::UnsupportedEncodingException::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::UnsupportedEncodingException::ctor(::java::lang::String* s)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::UnsupportedEncodingException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.UnsupportedEncodingException", 36);
    return c;
}

java::lang::Class* java::io::UnsupportedEncodingException::getClass0()
{
    return class_();
}

