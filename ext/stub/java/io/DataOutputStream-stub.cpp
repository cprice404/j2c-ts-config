// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/DataOutputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::io::DataOutputStream::DataOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::DataOutputStream::DataOutputStream(OutputStream* out)
    : DataOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}


void ::java::io::DataOutputStream::ctor(OutputStream* out)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::DataOutputStream::ctor(OutputStream* out)");
}

void java::io::DataOutputStream::flush()
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::flush()");
}

/* private: void java::io::DataOutputStream::incCount(int32_t value) */
int32_t java::io::DataOutputStream::size()
{ /* stub */
    unimplemented_(u"int32_t java::io::DataOutputStream::size()");
    return 0;
}

void java::io::DataOutputStream::write(int32_t b)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::write(int32_t b)");
}

void java::io::DataOutputStream::write(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::write(::int8_tArray* b, int32_t off, int32_t len)");
}

void java::io::DataOutputStream::writeBoolean(bool v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeBoolean(bool v)");
}

void java::io::DataOutputStream::writeByte(int32_t v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeByte(int32_t v)");
}

void java::io::DataOutputStream::writeBytes(::java::lang::String* s)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeBytes(::java::lang::String* s)");
}

void java::io::DataOutputStream::writeChar(int32_t v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeChar(int32_t v)");
}

void java::io::DataOutputStream::writeChars(::java::lang::String* s)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeChars(::java::lang::String* s)");
}

void java::io::DataOutputStream::writeDouble(double v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeDouble(double v)");
}

void java::io::DataOutputStream::writeFloat(float v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeFloat(float v)");
}

void java::io::DataOutputStream::writeInt(int32_t v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeInt(int32_t v)");
}

void java::io::DataOutputStream::writeLong(int64_t v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeLong(int64_t v)");
}

void java::io::DataOutputStream::writeShort(int32_t v)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeShort(int32_t v)");
}

void java::io::DataOutputStream::writeUTF(::java::lang::String* str)
{ /* stub */
    unimplemented_(u"void java::io::DataOutputStream::writeUTF(::java::lang::String* str)");
}

int32_t java::io::DataOutputStream::writeUTF(::java::lang::String* str, DataOutput* out)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::io::DataOutputStream::writeUTF(::java::lang::String* str, DataOutput* out)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::DataOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.DataOutputStream", 24);
    return c;
}

void java::io::DataOutputStream::write(::int8_tArray* b)
{
    FilterOutputStream::write(b);
}

java::lang::Class* java::io::DataOutputStream::getClass0()
{
    return class_();
}

