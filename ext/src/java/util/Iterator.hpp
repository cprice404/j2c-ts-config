// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::Iterator
    : public virtual ::java::lang::Object
{

    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual bool hasNext() = 0;
    virtual ::java::lang::Object* next() = 0;
    virtual void remove();

    // Generated
    static ::java::lang::Class *class_();
};
