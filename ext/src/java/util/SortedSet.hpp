// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/Set.hpp>

struct java::util::SortedSet
    : public virtual Set
{

    virtual Comparator* comparator() = 0;
    virtual ::java::lang::Object* first() = 0;
    virtual SortedSet* headSet(::java::lang::Object* toElement) = 0;
    virtual ::java::lang::Object* last() = 0;
    /*Spliterator* spliterator(); (already declared) */
    virtual SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement) = 0;
    virtual SortedSet* tailSet(::java::lang::Object* fromElement) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
