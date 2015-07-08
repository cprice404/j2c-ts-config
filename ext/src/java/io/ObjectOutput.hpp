// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/DataOutput.hpp>
#include <java/lang/AutoCloseable.hpp>

struct java::io::ObjectOutput
    : public virtual DataOutput
    , public virtual ::java::lang::AutoCloseable
{

    /*void close(); (already declared) */
    virtual void flush() = 0;
    /*void write(int32_t b); (already declared) */
    /*void write(::int8_tArray* b); (already declared) */
    /*void write(::int8_tArray* b, int32_t off, int32_t len); (already declared) */
    virtual void writeObject(::java::lang::Object* obj) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
