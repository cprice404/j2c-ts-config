// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/IllegalAccessException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::IllegalAccessException::IllegalAccessException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalAccessException::IllegalAccessException()
    : IllegalAccessException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::IllegalAccessException::IllegalAccessException(String* s)
    : IllegalAccessException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::IllegalAccessException::serialVersionUID;

void ::java::lang::IllegalAccessException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IllegalAccessException::ctor()");
}

void ::java::lang::IllegalAccessException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::IllegalAccessException::ctor(String* s)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::IllegalAccessException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalAccessException", 32);
    return c;
}

java::lang::Class* java::lang::IllegalAccessException::getClass0()
{
    return class_();
}

