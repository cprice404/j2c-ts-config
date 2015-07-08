// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/SortedMap.hpp>

struct java::util::NavigableMap
    : public virtual SortedMap
{

    virtual Map_Entry* ceilingEntry(::java::lang::Object* key) = 0;
    virtual ::java::lang::Object* ceilingKey(::java::lang::Object* key) = 0;
    virtual NavigableSet* descendingKeySet() = 0;
    virtual NavigableMap* descendingMap() = 0;
    virtual Map_Entry* firstEntry() = 0;
    virtual Map_Entry* floorEntry(::java::lang::Object* key) = 0;
    virtual ::java::lang::Object* floorKey(::java::lang::Object* key) = 0;
    /*SortedMap* headMap(::java::lang::Object* toKey); (already declared) */
    virtual NavigableMap* headMap(::java::lang::Object* toKey, bool inclusive) = 0;
    virtual Map_Entry* higherEntry(::java::lang::Object* key) = 0;
    virtual ::java::lang::Object* higherKey(::java::lang::Object* key) = 0;
    virtual Map_Entry* lastEntry() = 0;
    virtual Map_Entry* lowerEntry(::java::lang::Object* key) = 0;
    virtual ::java::lang::Object* lowerKey(::java::lang::Object* key) = 0;
    virtual NavigableSet* navigableKeySet() = 0;
    virtual Map_Entry* pollFirstEntry() = 0;
    virtual Map_Entry* pollLastEntry() = 0;
    /*SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey); (already declared) */
    virtual NavigableMap* subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive) = 0;
    /*SortedMap* tailMap(::java::lang::Object* fromKey); (already declared) */
    virtual NavigableMap* tailMap(::java::lang::Object* fromKey, bool inclusive) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual SortedMap* headMap(::java::lang::Object* toKey) = 0;
    virtual SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey) = 0;
    virtual SortedMap* tailMap(::java::lang::Object* fromKey) = 0;
};
