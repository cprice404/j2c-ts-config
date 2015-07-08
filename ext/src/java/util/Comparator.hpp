// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::Comparator
    : public virtual ::java::lang::Object
{

    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) = 0;
    static Comparator* comparing(::java::util::function::Function* keyExtractor);
    static Comparator* comparing(::java::util::function::Function* keyExtractor, Comparator* keyComparator);
    static Comparator* comparingDouble(::java::util::function::ToDoubleFunction* keyExtractor);
    static Comparator* comparingInt(::java::util::function::ToIntFunction* keyExtractor);
    static Comparator* comparingLong(::java::util::function::ToLongFunction* keyExtractor);
    /*virtual bool equals(::java::lang::Object* obj); (already declared) */
    static Comparator* naturalOrder();
    static Comparator* nullsFirst(Comparator* comparator);
    static Comparator* nullsLast(Comparator* comparator);
    static Comparator* reverseOrder();
    virtual Comparator* reversed();
    virtual Comparator* thenComparing(Comparator* other);
    virtual Comparator* thenComparing(::java::util::function::Function* keyExtractor);
    virtual Comparator* thenComparing(::java::util::function::Function* keyExtractor, Comparator* keyComparator);
    virtual Comparator* thenComparingDouble(::java::util::function::ToDoubleFunction* keyExtractor);
    virtual Comparator* thenComparingInt(::java::util::function::ToIntFunction* keyExtractor);
    virtual Comparator* thenComparingLong(::java::util::function::ToLongFunction* keyExtractor);

    // Generated
    static ::java::lang::Class *class_();
};
