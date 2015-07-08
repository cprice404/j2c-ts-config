// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/RandomAccess.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_EmptyList
    : public AbstractList
    , public virtual RandomAccess
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    static constexpr int64_t serialVersionUID { int64_t(8842843931221139166LL) };

    /*void ctor(); (private) */

public:
    bool contains(::java::lang::Object* obj) override;
    bool containsAll(Collection* c) override;
    bool equals(::java::lang::Object* o) override;
    void forEach(::java::util::function::Consumer* action) override;
    ::java::lang::Object* get(int32_t index) override;
    int32_t hashCode() override;
    bool isEmpty() override;
    Iterator* iterator() override;
    ListIterator* listIterator() override;
    /*::java::lang::Object* readResolve(); (private) */
    bool removeIf(::java::util::function::Predicate* filter) override;
    void replaceAll(::java::util::function::UnaryOperator* operator_) override;
    int32_t size() override;
    void sort(Comparator* c) override;
    Spliterator* spliterator() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated
    Collections_EmptyList();
protected:
    Collections_EmptyList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ListIterator* listIterator(int32_t index);

private:
    virtual ::java::lang::Class* getClass0();
};
