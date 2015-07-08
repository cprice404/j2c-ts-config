// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/NoSuchFieldException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::NoSuchFieldException::NoSuchFieldException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NoSuchFieldException::NoSuchFieldException()
    : NoSuchFieldException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::NoSuchFieldException::NoSuchFieldException(String* s)
    : NoSuchFieldException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::NoSuchFieldException::serialVersionUID;

void ::java::lang::NoSuchFieldException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::NoSuchFieldException::ctor()");
}

void ::java::lang::NoSuchFieldException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::NoSuchFieldException::ctor(String* s)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::NoSuchFieldException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NoSuchFieldException", 30);
    return c;
}

java::lang::Class* java::lang::NoSuchFieldException::getClass0()
{
    return class_();
}

