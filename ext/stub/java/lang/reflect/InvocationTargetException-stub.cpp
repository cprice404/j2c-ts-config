// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/reflect/InvocationTargetException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::reflect::InvocationTargetException::InvocationTargetException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::InvocationTargetException::InvocationTargetException()
    : InvocationTargetException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::reflect::InvocationTargetException::InvocationTargetException(::java::lang::Throwable* target)
    : InvocationTargetException(*static_cast< ::default_init_tag* >(0))
{
    ctor(target);
}

java::lang::reflect::InvocationTargetException::InvocationTargetException(::java::lang::Throwable* target, ::java::lang::String* s)
    : InvocationTargetException(*static_cast< ::default_init_tag* >(0))
{
    ctor(target, s);
}

constexpr int64_t java::lang::reflect::InvocationTargetException::serialVersionUID;

void ::java::lang::reflect::InvocationTargetException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::reflect::InvocationTargetException::ctor()");
}

void ::java::lang::reflect::InvocationTargetException::ctor(::java::lang::Throwable* target)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::reflect::InvocationTargetException::ctor(::java::lang::Throwable* target)");
}

void ::java::lang::reflect::InvocationTargetException::ctor(::java::lang::Throwable* target, ::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::reflect::InvocationTargetException::ctor(::java::lang::Throwable* target, ::java::lang::String* s)");
}

java::lang::Throwable* java::lang::reflect::InvocationTargetException::getCause()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* java::lang::reflect::InvocationTargetException::getCause()");
    return 0;
}

java::lang::Throwable* java::lang::reflect::InvocationTargetException::getTargetException()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* java::lang::reflect::InvocationTargetException::getTargetException()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::reflect::InvocationTargetException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.InvocationTargetException", 43);
    return c;
}

java::lang::Class* java::lang::reflect::InvocationTargetException::getClass0()
{
    return class_();
}

