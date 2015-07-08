// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::lang::CharSequence
    : public virtual Object
{

    virtual char16_t charAt(int32_t index) = 0;
    virtual ::java::util::stream::IntStream* chars();
    virtual ::java::util::stream::IntStream* codePoints();
    virtual int32_t length() = 0;
    virtual CharSequence* subSequence(int32_t start, int32_t end) = 0;
    /*virtual String* toString(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
