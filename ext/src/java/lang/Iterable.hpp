// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Iterable
    : public virtual Object
{

    virtual void forEach(::java::util::function::Consumer* action);
    virtual ::java::util::Iterator* iterator() = 0;
    virtual ::java::util::Spliterator* spliterator();

    // Generated
    static ::java::lang::Class *class_();
};
