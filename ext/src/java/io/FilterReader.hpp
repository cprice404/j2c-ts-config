// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/nio/fwd-config.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::FilterReader
    : public Reader
{

public:
    typedef Reader super;

public: /* protected */
    Reader* in {  };

protected:
    void ctor(Reader* in);

public:
    void close() override;
    void mark(int32_t readAheadLimit) override;
    bool markSupported() override;
    int32_t read() override;
    int32_t read(::char16_tArray* cbuf, int32_t off, int32_t len) override;
    bool ready() override;
    void reset() override;
    int64_t skip(int64_t n) override;

    // Generated

public: /* protected */
    FilterReader(Reader* in);
protected:
    FilterReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::java::nio::CharBuffer* target);
    virtual int32_t read(::char16_tArray* cbuf);

private:
    virtual ::java::lang::Class* getClass0();
};
