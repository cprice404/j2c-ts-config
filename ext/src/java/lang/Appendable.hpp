// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Appendable
    : public virtual Object
{

    virtual Appendable* append(CharSequence* csq) = 0;
    virtual Appendable* append(char16_t c) = 0;
    virtual Appendable* append(CharSequence* csq, int32_t start, int32_t end) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
