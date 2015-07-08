// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/DataOutput.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_BlockDataOutputStream
    : public OutputStream
    , public virtual DataOutput
{

public:
    typedef OutputStream super;

private:
    static constexpr int32_t CHAR_BUF_SIZE { int32_t(256) };
    static constexpr int32_t MAX_BLOCK_SIZE { int32_t(1024) };
    static constexpr int32_t MAX_HEADER_SIZE { int32_t(5) };
    bool blkmode {  };
    ::int8_tArray* buf {  };
    ::char16_tArray* cbuf {  };
    DataOutputStream* dout {  };
    ::int8_tArray* hbuf {  };
    OutputStream* out {  };
    int32_t pos {  };

protected:
    void ctor(OutputStream* out);

public:
    void close() override;

public: /* package */
    virtual void drain();

public:
    void flush() override;

public: /* package */
    virtual bool getBlockDataMode();
    virtual int64_t getUTFLength(::java::lang::String* s);
    virtual bool setBlockDataMode(bool mode);

public:
    void write(int32_t b) override;
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;

public: /* package */
    virtual void write(::int8_tArray* b, int32_t off, int32_t len, bool copy);
    /*void writeBlockHeader(int32_t len); (private) */

public:
    void writeBoolean(bool v) override;

public: /* package */
    virtual void writeBooleans(::boolArray* v, int32_t off, int32_t len);

public:
    void writeByte(int32_t v) override;
    void writeBytes(::java::lang::String* s) override;
    void writeChar(int32_t v) override;
    void writeChars(::java::lang::String* s) override;

public: /* package */
    virtual void writeChars(::char16_tArray* v, int32_t off, int32_t len);

public:
    void writeDouble(double v) override;

public: /* package */
    virtual void writeDoubles(::doubleArray* v, int32_t off, int32_t len);

public:
    void writeFloat(float v) override;

public: /* package */
    virtual void writeFloats(::floatArray* v, int32_t off, int32_t len);

public:
    void writeInt(int32_t v) override;

public: /* package */
    virtual void writeInts(::int32_tArray* v, int32_t off, int32_t len);

public:
    void writeLong(int64_t v) override;

public: /* package */
    virtual void writeLongUTF(::java::lang::String* s);
    virtual void writeLongUTF(::java::lang::String* s, int64_t utflen);
    virtual void writeLongs(::int64_tArray* v, int32_t off, int32_t len);

public:
    void writeShort(int32_t v) override;

public: /* package */
    virtual void writeShorts(::int16_tArray* v, int32_t off, int32_t len);

public:
    void writeUTF(::java::lang::String* s) override;

public: /* package */
    virtual void writeUTF(::java::lang::String* s, int64_t utflen);
    /*void writeUTFBody(::java::lang::String* s); (private) */

    // Generated
    ObjectOutputStream_BlockDataOutputStream(OutputStream* out);
protected:
    ObjectOutputStream_BlockDataOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
