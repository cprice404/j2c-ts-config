// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/NumberFormatException.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::NumberFormatException::NumberFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NumberFormatException::NumberFormatException()
    : NumberFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::NumberFormatException::NumberFormatException(String* s)
    : NumberFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::NumberFormatException::serialVersionUID;

void ::java::lang::NumberFormatException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::NumberFormatException::ctor()");
}

void ::java::lang::NumberFormatException::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::NumberFormatException::ctor(String* s)");
}

java::lang::NumberFormatException* java::lang::NumberFormatException::forInputString(String* s)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::NumberFormatException* java::lang::NumberFormatException::forInputString(String* s)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::NumberFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NumberFormatException", 31);
    return c;
}

java::lang::Class* java::lang::NumberFormatException::getClass0()
{
    return class_();
}

