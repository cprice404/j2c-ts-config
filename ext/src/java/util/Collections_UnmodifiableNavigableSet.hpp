// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/Collections_UnmodifiableSortedSet.hpp>
#include <java/util/NavigableSet.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableNavigableSet
    : public Collections_UnmodifiableSortedSet
    , public virtual NavigableSet
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_UnmodifiableSortedSet super;

private:
    static NavigableSet* EMPTY_NAVIGABLE_SET_;
    NavigableSet* ns {  };
    static constexpr int64_t serialVersionUID { int64_t(-6027448201786391929LL) };

protected:
    void ctor(NavigableSet* s);

public:
    ::java::lang::Object* ceiling(::java::lang::Object* e) override;
    Iterator* descendingIterator() override;
    NavigableSet* descendingSet() override;
    ::java::lang::Object* floor(::java::lang::Object* e) override;
    NavigableSet* headSet(::java::lang::Object* toElement, bool inclusive) override;
    ::java::lang::Object* higher(::java::lang::Object* e) override;
    ::java::lang::Object* lower(::java::lang::Object* e) override;
    ::java::lang::Object* pollFirst() override;
    ::java::lang::Object* pollLast() override;
    NavigableSet* subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive) override;
    NavigableSet* tailSet(::java::lang::Object* fromElement, bool inclusive) override;

    // Generated

public: /* package */
    Collections_UnmodifiableNavigableSet(NavigableSet* s);
protected:
    Collections_UnmodifiableNavigableSet(const ::default_init_tag&);


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
    bool equals(::java::lang::Object* o);
    int32_t hashCode();
    bool isEmpty();
    Iterator* iterator();
    bool remove(::java::lang::Object* o);
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    int32_t size();
    ::java::lang::ObjectArray* toArray_();
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);
    virtual Comparator* comparator();
    virtual ::java::lang::Object* first();
    virtual SortedSet* headSet(::java::lang::Object* toElement);
    virtual ::java::lang::Object* last();
    Spliterator* spliterator();
    virtual SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement);
    virtual SortedSet* tailSet(::java::lang::Object* fromElement);

private:
    static NavigableSet*& EMPTY_NAVIGABLE_SET();
    virtual ::java::lang::Class* getClass0();
};
