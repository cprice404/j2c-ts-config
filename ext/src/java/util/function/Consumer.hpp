// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::function::Consumer
    : public virtual ::java::lang::Object
{

    virtual void accept(::java::lang::Object* t) = 0;
    virtual Consumer* andThen(Consumer* after);

    // Generated
    static ::java::lang::Class *class_();
};
