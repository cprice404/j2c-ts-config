// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/ObjectInputStream_PeekInputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::io::ObjectInputStream_PeekInputStream::ObjectInputStream_PeekInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ObjectInputStream_PeekInputStream::ObjectInputStream_PeekInputStream(InputStream* in)
    : ObjectInputStream_PeekInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}


void ::java::io::ObjectInputStream_PeekInputStream::ctor(InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ObjectInputStream_PeekInputStream::ctor(InputStream* in)");
}

int32_t java::io::ObjectInputStream_PeekInputStream::available()
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectInputStream_PeekInputStream::available()");
    return 0;
}

void java::io::ObjectInputStream_PeekInputStream::close()
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_PeekInputStream::close()");
}

int32_t java::io::ObjectInputStream_PeekInputStream::peek()
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectInputStream_PeekInputStream::peek()");
    return 0;
}

int32_t java::io::ObjectInputStream_PeekInputStream::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectInputStream_PeekInputStream::read()");
    return 0;
}

int32_t java::io::ObjectInputStream_PeekInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectInputStream_PeekInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

void java::io::ObjectInputStream_PeekInputStream::readFully(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_PeekInputStream::readFully(::int8_tArray* b, int32_t off, int32_t len)");
}

int64_t java::io::ObjectInputStream_PeekInputStream::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::io::ObjectInputStream_PeekInputStream::skip(int64_t n)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::ObjectInputStream_PeekInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ObjectInputStream.PeekInputStream", 41);
    return c;
}

int32_t java::io::ObjectInputStream_PeekInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* java::io::ObjectInputStream_PeekInputStream::getClass0()
{
    return class_();
}

