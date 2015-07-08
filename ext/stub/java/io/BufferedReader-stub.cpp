// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/BufferedReader.hpp>

extern void unimplemented_(const char16_t* name);
java::io::BufferedReader::BufferedReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::BufferedReader::BufferedReader(Reader* in)
    : BufferedReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::io::BufferedReader::BufferedReader(Reader* in, int32_t sz)
    : BufferedReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, sz);
}

constexpr int32_t java::io::BufferedReader::INVALIDATED;
constexpr int32_t java::io::BufferedReader::UNMARKED;
int32_t& java::io::BufferedReader::defaultCharBufferSize()
{
    clinit();
    return defaultCharBufferSize_;
}
int32_t java::io::BufferedReader::defaultCharBufferSize_;
int32_t& java::io::BufferedReader::defaultExpectedLineLength()
{
    clinit();
    return defaultExpectedLineLength_;
}
int32_t java::io::BufferedReader::defaultExpectedLineLength_;

void ::java::io::BufferedReader::ctor(Reader* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::BufferedReader::ctor(Reader* in)");
}

void ::java::io::BufferedReader::ctor(Reader* in, int32_t sz)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::BufferedReader::ctor(Reader* in, int32_t sz)");
}

void java::io::BufferedReader::close()
{ /* stub */
    unimplemented_(u"void java::io::BufferedReader::close()");
}

/* private: void java::io::BufferedReader::ensureOpen() */
/* private: void java::io::BufferedReader::fill() */
java::util::stream::Stream* java::io::BufferedReader::lines()
{ /* stub */
    unimplemented_(u"java::util::stream::Stream* java::io::BufferedReader::lines()");
    return 0;
}

void java::io::BufferedReader::mark(int32_t readAheadLimit)
{ /* stub */
    unimplemented_(u"void java::io::BufferedReader::mark(int32_t readAheadLimit)");
}

bool java::io::BufferedReader::markSupported()
{ /* stub */
    unimplemented_(u"bool java::io::BufferedReader::markSupported()");
    return 0;
}

int32_t java::io::BufferedReader::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::BufferedReader::read()");
    return 0;
}

int32_t java::io::BufferedReader::read(::char16_tArray* cbuf, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::BufferedReader::read(::char16_tArray* cbuf, int32_t off, int32_t len)");
    return 0;
}

/* private: int32_t java::io::BufferedReader::read1(::char16_tArray* cbuf, int32_t off, int32_t len) */
java::lang::String* java::io::BufferedReader::readLine()
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::BufferedReader::readLine()");
    return 0;
}

java::lang::String* java::io::BufferedReader::readLine(bool ignoreLF)
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::BufferedReader::readLine(bool ignoreLF)");
    return 0;
}

bool java::io::BufferedReader::ready()
{ /* stub */
    unimplemented_(u"bool java::io::BufferedReader::ready()");
    return 0;
}

void java::io::BufferedReader::reset()
{ /* stub */
    unimplemented_(u"void java::io::BufferedReader::reset()");
}

int64_t java::io::BufferedReader::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::io::BufferedReader::skip(int64_t n)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::BufferedReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.BufferedReader", 22);
    return c;
}

int32_t java::io::BufferedReader::read(::java::nio::CharBuffer* target)
{
    return super::read(target);
}

int32_t java::io::BufferedReader::read(::char16_tArray* cbuf)
{
    return super::read(cbuf);
}

java::lang::Class* java::io::BufferedReader::getClass0()
{
    return class_();
}

