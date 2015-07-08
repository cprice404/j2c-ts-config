// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/SecurityException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::SecurityException::SecurityException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::SecurityException::SecurityException()
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::SecurityException::SecurityException(String* s)
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::SecurityException::SecurityException(Throwable* cause)
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::SecurityException::SecurityException(String* message, Throwable* cause)
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, cause);
}

constexpr int64_t java::lang::SecurityException::serialVersionUID;

void ::java::lang::SecurityException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::SecurityException::ctor()");
}

void ::java::lang::SecurityException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::SecurityException::ctor(String* s)");
}

void ::java::lang::SecurityException::ctor(Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::SecurityException::ctor(Throwable* cause)");
}

void ::java::lang::SecurityException::ctor(String* message, Throwable* cause)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::SecurityException::ctor(String* message, Throwable* cause)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::SecurityException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.SecurityException", 27);
    return c;
}

java::lang::Class* java::lang::SecurityException::getClass0()
{
    return class_();
}

