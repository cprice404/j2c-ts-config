// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Spliterator_OfPrimitive.hpp>

struct java::util::Spliterator_OfDouble
    : public virtual Spliterator_OfPrimitive
{

    virtual void forEachRemaining(::java::util::function::DoubleConsumer* action);
    /*void forEachRemaining(::java::util::function::Consumer* action); (already declared) */
    virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) = 0;
    /*bool tryAdvance(::java::util::function::Consumer* action); (already declared) */
    Spliterator_OfDouble* trySplit() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual bool tryAdvance(::java::util::function::Consumer* action) = 0;
};
