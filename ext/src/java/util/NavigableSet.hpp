// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/SortedSet.hpp>

struct java::util::NavigableSet
    : public virtual SortedSet
{

    virtual ::java::lang::Object* ceiling(::java::lang::Object* e) = 0;
    virtual Iterator* descendingIterator() = 0;
    virtual NavigableSet* descendingSet() = 0;
    virtual ::java::lang::Object* floor(::java::lang::Object* e) = 0;
    /*SortedSet* headSet(::java::lang::Object* toElement); (already declared) */
    virtual NavigableSet* headSet(::java::lang::Object* toElement, bool inclusive) = 0;
    virtual ::java::lang::Object* higher(::java::lang::Object* e) = 0;
    /*Iterator* iterator(); (already declared) */
    virtual ::java::lang::Object* lower(::java::lang::Object* e) = 0;
    virtual ::java::lang::Object* pollFirst() = 0;
    virtual ::java::lang::Object* pollLast() = 0;
    /*SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement); (already declared) */
    virtual NavigableSet* subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive) = 0;
    /*SortedSet* tailSet(::java::lang::Object* fromElement); (already declared) */
    virtual NavigableSet* tailSet(::java::lang::Object* fromElement, bool inclusive) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual SortedSet* headSet(::java::lang::Object* toElement) = 0;
    virtual SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement) = 0;
    virtual SortedSet* tailSet(::java::lang::Object* fromElement) = 0;
};
