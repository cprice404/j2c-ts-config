// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/nio/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::BufferedReader
    : public Reader
{

public:
    typedef Reader super;

private:
    static constexpr int32_t INVALIDATED { int32_t(-2) };
    static constexpr int32_t UNMARKED { int32_t(-1) };
    ::char16_tArray* cb {  };
    static int32_t defaultCharBufferSize_;
    static int32_t defaultExpectedLineLength_;
    Reader* in {  };
    int32_t markedChar {  };
    bool markedSkipLF {  };
    int32_t nChars {  };
    int32_t nextChar {  };
    int32_t readAheadLimit {  };
    bool skipLF {  };

protected:
    void ctor(Reader* in);
    void ctor(Reader* in, int32_t sz);

public:
    void close() override;
    /*void ensureOpen(); (private) */
    /*void fill(); (private) */
    virtual ::java::util::stream::Stream* lines();
    void mark(int32_t readAheadLimit) override;
    bool markSupported() override;
    int32_t read() override;
    int32_t read(::char16_tArray* cbuf, int32_t off, int32_t len) override;
    /*int32_t read1(::char16_tArray* cbuf, int32_t off, int32_t len); (private) */
    virtual ::java::lang::String* readLine();

public: /* package */
    virtual ::java::lang::String* readLine(bool ignoreLF);

public:
    bool ready() override;
    void reset() override;
    int64_t skip(int64_t n) override;

    // Generated
    BufferedReader(Reader* in);
    BufferedReader(Reader* in, int32_t sz);
protected:
    BufferedReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::java::nio::CharBuffer* target);
    virtual int32_t read(::char16_tArray* cbuf);

private:
    static int32_t& defaultCharBufferSize();
    static int32_t& defaultExpectedLineLength();
    virtual ::java::lang::Class* getClass0();
};
