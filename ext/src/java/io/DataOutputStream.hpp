// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <java/io/DataOutput.hpp>

struct default_init_tag;

class java::io::DataOutputStream
    : public FilterOutputStream
    , public virtual DataOutput
{

public:
    typedef FilterOutputStream super;

private:
    ::int8_tArray* bytearr {  };
    ::int8_tArray* writeBuffer {  };

public: /* protected */
    int32_t written {  };

protected:
    void ctor(OutputStream* out);

public:
    void flush() override;
    /*void incCount(int32_t value); (private) */
    int32_t size();
    void write(int32_t b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;
    void writeBoolean(bool v) override;
    void writeByte(int32_t v) override;
    void writeBytes(::java::lang::String* s) override;
    void writeChar(int32_t v) override;
    void writeChars(::java::lang::String* s) override;
    void writeDouble(double v) override;
    void writeFloat(float v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;
    void writeUTF(::java::lang::String* str) override;

public: /* package */
    static int32_t writeUTF(::java::lang::String* str, DataOutput* out);

    // Generated

public:
    DataOutputStream(OutputStream* out);
protected:
    DataOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
