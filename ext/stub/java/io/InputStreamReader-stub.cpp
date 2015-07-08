// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/InputStreamReader.hpp>

extern void unimplemented_(const char16_t* name);
java::io::InputStreamReader::InputStreamReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::InputStreamReader::InputStreamReader(InputStream* in)
    : InputStreamReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::io::InputStreamReader::InputStreamReader(InputStream* in, ::java::lang::String* charsetName)
    : InputStreamReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, charsetName);
}

java::io::InputStreamReader::InputStreamReader(InputStream* in, ::java::nio::charset::Charset* cs)
    : InputStreamReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, cs);
}

java::io::InputStreamReader::InputStreamReader(InputStream* in, ::java::nio::charset::CharsetDecoder* dec)
    : InputStreamReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, dec);
}


void ::java::io::InputStreamReader::ctor(InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::InputStreamReader::ctor(InputStream* in)");
}

void ::java::io::InputStreamReader::ctor(InputStream* in, ::java::lang::String* charsetName)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::InputStreamReader::ctor(InputStream* in, ::java::lang::String* charsetName)");
}

void ::java::io::InputStreamReader::ctor(InputStream* in, ::java::nio::charset::Charset* cs)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::InputStreamReader::ctor(InputStream* in, ::java::nio::charset::Charset* cs)");
}

void ::java::io::InputStreamReader::ctor(InputStream* in, ::java::nio::charset::CharsetDecoder* dec)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::InputStreamReader::ctor(InputStream* in, ::java::nio::charset::CharsetDecoder* dec)");
}

void java::io::InputStreamReader::close()
{ /* stub */
    unimplemented_(u"void java::io::InputStreamReader::close()");
}

java::lang::String* java::io::InputStreamReader::getEncoding()
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::InputStreamReader::getEncoding()");
    return 0;
}

int32_t java::io::InputStreamReader::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::InputStreamReader::read()");
    return 0;
}

int32_t java::io::InputStreamReader::read(::char16_tArray* cbuf, int32_t offset, int32_t length)
{ /* stub */
    unimplemented_(u"int32_t java::io::InputStreamReader::read(::char16_tArray* cbuf, int32_t offset, int32_t length)");
    return 0;
}

bool java::io::InputStreamReader::ready()
{ /* stub */
    unimplemented_(u"bool java::io::InputStreamReader::ready()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::InputStreamReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.InputStreamReader", 25);
    return c;
}

int32_t java::io::InputStreamReader::read(::java::nio::CharBuffer* target)
{
    return super::read(target);
}

int32_t java::io::InputStreamReader::read(::char16_tArray* cbuf)
{
    return super::read(cbuf);
}

java::lang::Class* java::io::InputStreamReader::getClass0()
{
    return class_();
}

