// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/nio/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Readable
    : public virtual Object
{

    virtual int32_t read(::java::nio::CharBuffer* cb) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
