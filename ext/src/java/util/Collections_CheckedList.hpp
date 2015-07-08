// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/Collections_CheckedCollection.hpp>
#include <java/util/List.hpp>

struct default_init_tag;

class java::util::Collections_CheckedList
    : public Collections_CheckedCollection
    , public virtual List
{

public:
    typedef Collections_CheckedCollection super;

public: /* package */
    List* list {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(65247728283967356LL) };

protected:
    void ctor(List* list, ::java::lang::Class* type);

public:
    void add(int32_t index, ::java::lang::Object* element) override;
    bool addAll(int32_t index, Collection* c) override;
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* get(int32_t index) override;
    int32_t hashCode() override;
    int32_t indexOf(::java::lang::Object* o) override;
    int32_t lastIndexOf(::java::lang::Object* o) override;
    ListIterator* listIterator() override;
    ListIterator* listIterator(int32_t index) override;
    ::java::lang::Object* remove(int32_t index) override;
    void replaceAll(::java::util::function::UnaryOperator* operator_) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;
    void sort(Comparator* c) override;
    List* subList(int32_t fromIndex, int32_t toIndex) override;

    // Generated

public: /* package */
    Collections_CheckedList(List* list, ::java::lang::Class* type);
protected:
    Collections_CheckedList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void forEach(::java::util::function::Consumer* action);
    virtual ::java::util::stream::Stream* parallelStream();
    virtual bool removeIf(::java::util::function::Predicate* filter);
    virtual ::java::util::stream::Stream* stream();
    bool add(::java::lang::Object* e);
    bool addAll(Collection* c);
    void clear();
    bool contains(::java::lang::Object* o);
    bool containsAll(Collection* c);
    bool isEmpty();
    Iterator* iterator();
    bool remove(::java::lang::Object* o);
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    int32_t size();
    Spliterator* spliterator();
    ::java::lang::ObjectArray* toArray_();
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);

private:
    virtual ::java::lang::Class* getClass0();
};
