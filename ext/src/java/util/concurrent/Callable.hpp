// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::concurrent::Callable
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::Object* call() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
