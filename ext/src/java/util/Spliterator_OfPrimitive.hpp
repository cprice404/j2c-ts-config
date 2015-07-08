// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Spliterator.hpp>

struct java::util::Spliterator_OfPrimitive
    : public virtual Spliterator
{

    virtual void forEachRemaining(::java::lang::Object* action);
    virtual bool tryAdvance(::java::lang::Object* action) = 0;
    Spliterator_OfPrimitive* trySplit() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual bool tryAdvance(::java::util::function::Consumer* action) = 0;
};
