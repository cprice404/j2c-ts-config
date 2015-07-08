// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/lang/Iterable.hpp>

struct java::util::Collection
    : public virtual ::java::lang::Iterable
{

    virtual bool add(::java::lang::Object* e) = 0;
    virtual bool addAll(Collection* c) = 0;
    virtual void clear() = 0;
    virtual bool contains(::java::lang::Object* o) = 0;
    virtual bool containsAll(Collection* c) = 0;
    /*virtual bool equals(::java::lang::Object* o); (already declared) */
    /*virtual int32_t hashCode(); (already declared) */
    virtual bool isEmpty() = 0;
    /*Iterator* iterator(); (already declared) */
    virtual ::java::util::stream::Stream* parallelStream();
    virtual bool remove(::java::lang::Object* o) = 0;
    virtual bool removeAll(Collection* c) = 0;
    virtual bool removeIf(::java::util::function::Predicate* filter);
    virtual bool retainAll(Collection* c) = 0;
    virtual int32_t size() = 0;
    /*Spliterator* spliterator(); (already declared) */
    virtual ::java::util::stream::Stream* stream();
    virtual ::java::lang::ObjectArray* toArray_() = 0;
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
