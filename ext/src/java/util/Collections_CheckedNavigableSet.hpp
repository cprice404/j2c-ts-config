// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/Collections_CheckedSortedSet.hpp>
#include <java/util/NavigableSet.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_CheckedNavigableSet
    : public Collections_CheckedSortedSet
    , public virtual NavigableSet
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_CheckedSortedSet super;

private:
    NavigableSet* ns {  };
    static constexpr int64_t serialVersionUID { int64_t(-5429120189805438922LL) };

protected:
    void ctor(NavigableSet* s, ::java::lang::Class* type);

public:
    ::java::lang::Object* ceiling(::java::lang::Object* e) override;
    Iterator* descendingIterator() override;
    NavigableSet* descendingSet() override;
    ::java::lang::Object* floor(::java::lang::Object* e) override;
    NavigableSet* headSet(::java::lang::Object* toElement) override;
    NavigableSet* headSet(::java::lang::Object* toElement, bool inclusive) override;
    ::java::lang::Object* higher(::java::lang::Object* e) override;
    ::java::lang::Object* lower(::java::lang::Object* e) override;
    ::java::lang::Object* pollFirst() override;
    ::java::lang::Object* pollLast() override;
    NavigableSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement) override;
    NavigableSet* subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive) override;
    NavigableSet* tailSet(::java::lang::Object* fromElement) override;
    NavigableSet* tailSet(::java::lang::Object* fromElement, bool inclusive) override;

    // Generated

public: /* package */
    Collections_CheckedNavigableSet(NavigableSet* s, ::java::lang::Class* type);
protected:
    Collections_CheckedNavigableSet(const ::default_init_tag&);


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
    virtual ::java::lang::Object* last();
    Spliterator* spliterator();

private:
    virtual ::java::lang::Class* getClass0();
};
