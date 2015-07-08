// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::io::ObjectInputStream_PeekInputStream
    : public InputStream
{

public:
    typedef InputStream super;

private:
    InputStream* in {  };
    int32_t peekb {  };

protected:
    void ctor(InputStream* in);

public:
    int32_t available() override;
    void close() override;

public: /* package */
    virtual int32_t peek();

public:
    int32_t read() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;

public: /* package */
    virtual void readFully(::int8_tArray* b, int32_t off, int32_t len);

public:
    int64_t skip(int64_t n) override;

    // Generated

public: /* package */
    ObjectInputStream_PeekInputStream(InputStream* in);
protected:
    ObjectInputStream_PeekInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
