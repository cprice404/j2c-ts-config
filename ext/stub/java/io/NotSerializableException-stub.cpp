// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/NotSerializableException.hpp>

extern void unimplemented_(const char16_t* name);
java::io::NotSerializableException::NotSerializableException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::NotSerializableException::NotSerializableException()
    : NotSerializableException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::NotSerializableException::NotSerializableException(::java::lang::String* classname)
    : NotSerializableException(*static_cast< ::default_init_tag* >(0))
{
    ctor(classname);
}

constexpr int64_t java::io::NotSerializableException::serialVersionUID;

void ::java::io::NotSerializableException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::NotSerializableException::ctor()");
}

void ::java::io::NotSerializableException::ctor(::java::lang::String* classname)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::NotSerializableException::ctor(::java::lang::String* classname)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::NotSerializableException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.NotSerializableException", 32);
    return c;
}

java::lang::Class* java::io::NotSerializableException::getClass0()
{
    return class_();
}

