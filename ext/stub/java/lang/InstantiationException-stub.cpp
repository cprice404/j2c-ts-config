// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/InstantiationException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::InstantiationException::InstantiationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::InstantiationException::InstantiationException()
    : InstantiationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::InstantiationException::InstantiationException(String* s)
    : InstantiationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::InstantiationException::serialVersionUID;

void ::java::lang::InstantiationException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::InstantiationException::ctor()");
}

void ::java::lang::InstantiationException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::InstantiationException::ctor(String* s)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::InstantiationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.InstantiationException", 32);
    return c;
}

java::lang::Class* java::lang::InstantiationException::getClass0()
{
    return class_();
}

