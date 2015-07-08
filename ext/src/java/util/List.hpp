// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Collection.hpp>

struct java::util::List
    : public virtual Collection
{

    /*bool add(::java::lang::Object* e); (already declared) */
    virtual void add(int32_t index, ::java::lang::Object* element) = 0;
    /*bool addAll(Collection* c); (already declared) */
    virtual bool addAll(int32_t index, Collection* c) = 0;
    /*void clear(); (already declared) */
    /*bool contains(::java::lang::Object* o); (already declared) */
    /*bool containsAll(Collection* c); (already declared) */
    /*bool equals(::java::lang::Object* o); (already declared) */
    virtual ::java::lang::Object* get(int32_t index) = 0;
    /*int32_t hashCode(); (already declared) */
    virtual int32_t indexOf(::java::lang::Object* o) = 0;
    /*bool isEmpty(); (already declared) */
    /*Iterator* iterator(); (already declared) */
    virtual int32_t lastIndexOf(::java::lang::Object* o) = 0;
    virtual ListIterator* listIterator() = 0;
    virtual ListIterator* listIterator(int32_t index) = 0;
    /*bool remove(::java::lang::Object* o); (already declared) */
    virtual ::java::lang::Object* remove(int32_t index) = 0;
    /*bool removeAll(Collection* c); (already declared) */
    virtual void replaceAll(::java::util::function::UnaryOperator* operator_);
    /*bool retainAll(Collection* c); (already declared) */
    virtual ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) = 0;
    /*int32_t size(); (already declared) */
    virtual void sort(Comparator* c);
    /*Spliterator* spliterator(); (already declared) */
    virtual List* subList(int32_t fromIndex, int32_t toIndex) = 0;
    /*::java::lang::ObjectArray* toArray_(); (already declared) */
    /*::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
    virtual bool add(::java::lang::Object* e) = 0;
    virtual bool addAll(Collection* c) = 0;
    virtual bool remove(::java::lang::Object* o) = 0;
};
