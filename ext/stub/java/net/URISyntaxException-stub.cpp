// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/net/URISyntaxException.hpp>

extern void unimplemented_(const char16_t* name);
java::net::URISyntaxException::URISyntaxException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URISyntaxException::URISyntaxException(::java::lang::String* input, ::java::lang::String* reason)
    : URISyntaxException(*static_cast< ::default_init_tag* >(0))
{
    ctor(input, reason);
}

java::net::URISyntaxException::URISyntaxException(::java::lang::String* input, ::java::lang::String* reason, int32_t index)
    : URISyntaxException(*static_cast< ::default_init_tag* >(0))
{
    ctor(input, reason, index);
}

constexpr int64_t java::net::URISyntaxException::serialVersionUID;

void ::java::net::URISyntaxException::ctor(::java::lang::String* input, ::java::lang::String* reason)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URISyntaxException::ctor(::java::lang::String* input, ::java::lang::String* reason)");
}

void ::java::net::URISyntaxException::ctor(::java::lang::String* input, ::java::lang::String* reason, int32_t index)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URISyntaxException::ctor(::java::lang::String* input, ::java::lang::String* reason, int32_t index)");
}

int32_t java::net::URISyntaxException::getIndex()
{ /* stub */
return index ; /* getter */
}

java::lang::String* java::net::URISyntaxException::getInput()
{ /* stub */
return input ; /* getter */
}

java::lang::String* java::net::URISyntaxException::getMessage()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URISyntaxException::getMessage()");
    return 0;
}

java::lang::String* java::net::URISyntaxException::getReason()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URISyntaxException::getReason()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::net::URISyntaxException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URISyntaxException", 27);
    return c;
}

java::lang::Class* java::net::URISyntaxException::getClass0()
{
    return class_();
}

