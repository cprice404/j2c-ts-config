// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::Enumeration
    : public virtual ::java::lang::Object
{

    virtual bool hasMoreElements() = 0;
    virtual ::java::lang::Object* nextElement() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
