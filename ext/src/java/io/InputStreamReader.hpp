// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/nio/fwd-config.hpp>
#include <java/nio/charset/fwd-config.hpp>
#include <sun/nio/cs/fwd-config.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::InputStreamReader
    : public Reader
{

public:
    typedef Reader super;

private:
    ::sun::nio::cs::StreamDecoder* sd {  };

protected:
    void ctor(InputStream* in);
    void ctor(InputStream* in, ::java::lang::String* charsetName);
    void ctor(InputStream* in, ::java::nio::charset::Charset* cs);
    void ctor(InputStream* in, ::java::nio::charset::CharsetDecoder* dec);

public:
    void close() override;
    virtual ::java::lang::String* getEncoding();
    int32_t read() override;
    int32_t read(::char16_tArray* cbuf, int32_t offset, int32_t length) override;
    bool ready() override;

    // Generated
    InputStreamReader(InputStream* in);
    InputStreamReader(InputStream* in, ::java::lang::String* charsetName);
    InputStreamReader(InputStream* in, ::java::nio::charset::Charset* cs);
    InputStreamReader(InputStream* in, ::java::nio::charset::CharsetDecoder* dec);
protected:
    InputStreamReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::java::nio::CharBuffer* target);
    virtual int32_t read(::char16_tArray* cbuf);

private:
    virtual ::java::lang::Class* getClass0();
};
