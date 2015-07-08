// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/ExceptionInInitializerError.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ExceptionInInitializerError::ExceptionInInitializerError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ExceptionInInitializerError::ExceptionInInitializerError()
    : ExceptionInInitializerError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ExceptionInInitializerError::ExceptionInInitializerError(Throwable* thrown)
    : ExceptionInInitializerError(*static_cast< ::default_init_tag* >(0))
{
    ctor(thrown);
}

java::lang::ExceptionInInitializerError::ExceptionInInitializerError(String* s)
    : ExceptionInInitializerError(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::ExceptionInInitializerError::serialVersionUID;

void ::java::lang::ExceptionInInitializerError::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ExceptionInInitializerError::ctor()");
}

void ::java::lang::ExceptionInInitializerError::ctor(Throwable* thrown)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ExceptionInInitializerError::ctor(Throwable* thrown)");
}

void ::java::lang::ExceptionInInitializerError::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ExceptionInInitializerError::ctor(String* s)");
}

java::lang::Throwable* java::lang::ExceptionInInitializerError::getCause()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* java::lang::ExceptionInInitializerError::getCause()");
    return 0;
}

java::lang::Throwable* java::lang::ExceptionInInitializerError::getException()
{ /* stub */
return exception ; /* getter */
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::ExceptionInInitializerError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ExceptionInInitializerError", 37);
    return c;
}

java::lang::Class* java::lang::ExceptionInInitializerError::getClass0()
{
    return class_();
}

