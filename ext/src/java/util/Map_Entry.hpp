// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::util::Map_Entry
    : public virtual ::java::lang::Object
{

    static Comparator* comparingByKey();
    static Comparator* comparingByKey(Comparator* cmp);
    static Comparator* comparingByValue();
    static Comparator* comparingByValue(Comparator* cmp);
    /*virtual bool equals(::java::lang::Object* o); (already declared) */
    virtual ::java::lang::Object* getKey() = 0;
    virtual ::java::lang::Object* getValue() = 0;
    /*virtual int32_t hashCode(); (already declared) */
    virtual ::java::lang::Object* setValue(::java::lang::Object* value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
