// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/FilterReader.hpp>

extern void unimplemented_(const char16_t* name);
java::io::FilterReader::FilterReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FilterReader::FilterReader(Reader* in)
    : FilterReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}


void ::java::io::FilterReader::ctor(Reader* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::FilterReader::ctor(Reader* in)");
}

void java::io::FilterReader::close()
{ /* stub */
    unimplemented_(u"void java::io::FilterReader::close()");
}

void java::io::FilterReader::mark(int32_t readAheadLimit)
{ /* stub */
    unimplemented_(u"void java::io::FilterReader::mark(int32_t readAheadLimit)");
}

bool java::io::FilterReader::markSupported()
{ /* stub */
    unimplemented_(u"bool java::io::FilterReader::markSupported()");
    return 0;
}

int32_t java::io::FilterReader::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::FilterReader::read()");
    return 0;
}

int32_t java::io::FilterReader::read(::char16_tArray* cbuf, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::FilterReader::read(::char16_tArray* cbuf, int32_t off, int32_t len)");
    return 0;
}

bool java::io::FilterReader::ready()
{ /* stub */
    unimplemented_(u"bool java::io::FilterReader::ready()");
    return 0;
}

void java::io::FilterReader::reset()
{ /* stub */
    unimplemented_(u"void java::io::FilterReader::reset()");
}

int64_t java::io::FilterReader::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::io::FilterReader::skip(int64_t n)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::FilterReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FilterReader", 20);
    return c;
}

int32_t java::io::FilterReader::read(::java::nio::CharBuffer* target)
{
    return super::read(target);
}

int32_t java::io::FilterReader::read(::char16_tArray* cbuf)
{
    return super::read(cbuf);
}

java::lang::Class* java::io::FilterReader::getClass0()
{
    return class_();
}

