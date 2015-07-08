// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/ByteArrayOutputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::io::ByteArrayOutputStream::ByteArrayOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ByteArrayOutputStream::ByteArrayOutputStream()
    : ByteArrayOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::ByteArrayOutputStream::ByteArrayOutputStream(int32_t size)
    : ByteArrayOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(size);
}

constexpr int32_t java::io::ByteArrayOutputStream::MAX_ARRAY_SIZE;

void ::java::io::ByteArrayOutputStream::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ByteArrayOutputStream::ctor()");
}

void ::java::io::ByteArrayOutputStream::ctor(int32_t size)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ByteArrayOutputStream::ctor(int32_t size)");
}

void java::io::ByteArrayOutputStream::close()
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayOutputStream::close()");
}

/* private: void java::io::ByteArrayOutputStream::ensureCapacity(int32_t minCapacity) */
/* private: void java::io::ByteArrayOutputStream::grow(int32_t minCapacity) */
/* private: int32_t java::io::ByteArrayOutputStream::hugeCapacity(int32_t minCapacity) */
void java::io::ByteArrayOutputStream::reset()
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayOutputStream::reset()");
}

int32_t java::io::ByteArrayOutputStream::size()
{ /* stub */
    unimplemented_(u"int32_t java::io::ByteArrayOutputStream::size()");
    return 0;
}

int8_tArray* java::io::ByteArrayOutputStream::toByteArray_()
{ /* stub */
    unimplemented_(u"int8_tArray* java::io::ByteArrayOutputStream::toByteArray_()");
    return 0;
}

java::lang::String* java::io::ByteArrayOutputStream::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::ByteArrayOutputStream::toString()");
    return 0;
}

java::lang::String* java::io::ByteArrayOutputStream::toString(::java::lang::String* charsetName)
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::ByteArrayOutputStream::toString(::java::lang::String* charsetName)");
    return 0;
}

java::lang::String* java::io::ByteArrayOutputStream::toString(int32_t hibyte)
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::ByteArrayOutputStream::toString(int32_t hibyte)");
    return 0;
}

void java::io::ByteArrayOutputStream::write(int32_t b)
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayOutputStream::write(int32_t b)");
}

void java::io::ByteArrayOutputStream::write(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayOutputStream::write(::int8_tArray* b, int32_t off, int32_t len)");
}

void java::io::ByteArrayOutputStream::writeTo(OutputStream* out)
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayOutputStream::writeTo(OutputStream* out)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::ByteArrayOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ByteArrayOutputStream", 29);
    return c;
}

void java::io::ByteArrayOutputStream::write(::int8_tArray* b)
{
    super::write(b);
}

java::lang::Class* java::io::ByteArrayOutputStream::getClass0()
{
    return class_();
}

