// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/Iterator.hpp>

struct java::util::ListIterator
    : public virtual Iterator
{

    virtual void add(::java::lang::Object* e) = 0;
    /*bool hasNext(); (already declared) */
    virtual bool hasPrevious() = 0;
    /*::java::lang::Object* next(); (already declared) */
    virtual int32_t nextIndex() = 0;
    virtual ::java::lang::Object* previous() = 0;
    virtual int32_t previousIndex() = 0;
    /*void remove(); (already declared) */
    virtual void set(::java::lang::Object* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
