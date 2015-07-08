// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Spliterator_OfPrimitive.hpp>

struct java::util::Spliterator_OfLong
    : public virtual Spliterator_OfPrimitive
{

    virtual void forEachRemaining(::java::util::function::LongConsumer* action);
    /*void forEachRemaining(::java::util::function::Consumer* action); (already declared) */
    virtual bool tryAdvance(::java::util::function::LongConsumer* action) = 0;
    /*bool tryAdvance(::java::util::function::Consumer* action); (already declared) */
    Spliterator_OfLong* trySplit() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual bool tryAdvance(::java::util::function::Consumer* action) = 0;
};
