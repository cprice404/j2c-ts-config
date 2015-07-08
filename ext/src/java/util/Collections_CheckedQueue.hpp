// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/Collections_CheckedCollection.hpp>
#include <java/util/Queue.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_CheckedQueue
    : public Collections_CheckedCollection
    , public virtual Queue
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_CheckedCollection super;

public: /* package */
    Queue* queue {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1433151992604707767LL) };

protected:
    void ctor(Queue* queue, ::java::lang::Class* elementType);

public:
    ::java::lang::Object* element() override;
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    bool offer(::java::lang::Object* e) override;
    ::java::lang::Object* peek() override;
    ::java::lang::Object* poll() override;
    ::java::lang::Object* remove() override;

    // Generated

public: /* package */
    Collections_CheckedQueue(Queue* queue, ::java::lang::Class* elementType);
protected:
    Collections_CheckedQueue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void forEach(::java::util::function::Consumer* action);
    virtual bool addAll(Collection* c);
    virtual void clear();
    virtual bool contains(::java::lang::Object* o);
    virtual bool containsAll(Collection* c);
    virtual bool isEmpty();
    Iterator* iterator();
    virtual ::java::util::stream::Stream* parallelStream();
    virtual bool remove(::java::lang::Object* o);
    virtual bool removeAll(Collection* c);
    virtual bool removeIf(::java::util::function::Predicate* filter);
    virtual bool retainAll(Collection* c);
    virtual int32_t size();
    Spliterator* spliterator();
    virtual ::java::util::stream::Stream* stream();
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a);
    bool add(::java::lang::Object* e);

private:
    virtual ::java::lang::Class* getClass0();
};
