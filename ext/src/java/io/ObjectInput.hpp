// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/DataInput.hpp>
#include <java/lang/AutoCloseable.hpp>

struct java::io::ObjectInput
    : public virtual DataInput
    , public virtual ::java::lang::AutoCloseable
{

    virtual int32_t available() = 0;
    /*void close(); (already declared) */
    virtual int32_t read() = 0;
    virtual int32_t read(::int8_tArray* b) = 0;
    virtual int32_t read(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual ::java::lang::Object* readObject() = 0;
    virtual int64_t skip(int64_t n) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
