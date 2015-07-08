// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/beans/IntrospectionException.hpp>

extern void unimplemented_(const char16_t* name);
java::beans::IntrospectionException::IntrospectionException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::beans::IntrospectionException::IntrospectionException(::java::lang::String* mess)
    : IntrospectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(mess);
}

constexpr int64_t java::beans::IntrospectionException::serialVersionUID;

void ::java::beans::IntrospectionException::ctor(::java::lang::String* mess)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::beans::IntrospectionException::ctor(::java::lang::String* mess)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::beans::IntrospectionException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.beans.IntrospectionException", 33);
    return c;
}

java::lang::Class* java::beans::IntrospectionException::getClass0()
{
    return class_();
}

