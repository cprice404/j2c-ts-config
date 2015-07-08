// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::FilterOutputStream
    : public OutputStream
{

public:
    typedef OutputStream super;

public: /* protected */
    OutputStream* out {  };

protected:
    void ctor(OutputStream* out);

public:
    void close() override;
    void flush() override;
    void write(int32_t b) override;
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;

    // Generated
    FilterOutputStream(OutputStream* out);
protected:
    FilterOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
