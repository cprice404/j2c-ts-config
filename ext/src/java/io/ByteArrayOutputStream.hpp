// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::ByteArrayOutputStream
    : public OutputStream
{

public:
    typedef OutputStream super;

private:
    static constexpr int32_t MAX_ARRAY_SIZE { int32_t(2147483639) };

public: /* protected */
    ::int8_tArray* buf {  };
    int32_t count {  };

protected:
    void ctor();
    void ctor(int32_t size);

public:
    void close() override;
    /*void ensureCapacity(int32_t minCapacity); (private) */
    /*void grow(int32_t minCapacity); (private) */
    /*static int32_t hugeCapacity(int32_t minCapacity); (private) */
    virtual void reset();
    virtual int32_t size();
    virtual ::int8_tArray* toByteArray_();
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* toString(::java::lang::String* charsetName);
    virtual ::java::lang::String* toString(int32_t hibyte);
    void write(int32_t b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;
    virtual void writeTo(OutputStream* out);

    // Generated
    ByteArrayOutputStream();
    ByteArrayOutputStream(int32_t size);
protected:
    ByteArrayOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
