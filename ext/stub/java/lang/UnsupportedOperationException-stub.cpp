// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/UnsupportedOperationException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::UnsupportedOperationException::UnsupportedOperationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::UnsupportedOperationException::UnsupportedOperationException()
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::UnsupportedOperationException::UnsupportedOperationException(String* message)
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::UnsupportedOperationException::UnsupportedOperationException(Throwable* cause)
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::UnsupportedOperationException::UnsupportedOperationException(String* message, Throwable* cause)
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, cause);
}

constexpr int64_t java::lang::UnsupportedOperationException::serialVersionUID;

void ::java::lang::UnsupportedOperationException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::UnsupportedOperationException::ctor()");
}

void ::java::lang::UnsupportedOperationException::ctor(String* message)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::UnsupportedOperationException::ctor(String* message)");
}

void ::java::lang::UnsupportedOperationException::ctor(Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::UnsupportedOperationException::ctor(Throwable* cause)");
}

void ::java::lang::UnsupportedOperationException::ctor(String* message, Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::UnsupportedOperationException::ctor(String* message, Throwable* cause)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::UnsupportedOperationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.UnsupportedOperationException", 39);
    return c;
}

java::lang::Class* java::lang::UnsupportedOperationException::getClass0()
{
    return class_();
}

