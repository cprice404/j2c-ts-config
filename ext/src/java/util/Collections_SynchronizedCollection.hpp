// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedCollection
    : public virtual ::java::lang::Object
    , public virtual Collection
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Collection* c {  };
    ::java::lang::Object* mutex {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(3053995032091335093LL) };

protected:
    void ctor(Collection* c);
    void ctor(Collection* c, ::java::lang::Object* mutex);

public:
    bool add(::java::lang::Object* e) override;
    bool addAll(Collection* coll) override;
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    bool containsAll(Collection* coll) override;
    void forEach(::java::util::function::Consumer* consumer) override;
    bool isEmpty() override;
    Iterator* iterator() override;
    ::java::util::stream::Stream* parallelStream() override;
    bool remove(::java::lang::Object* o) override;
    bool removeAll(Collection* coll) override;
    bool removeIf(::java::util::function::Predicate* filter) override;
    bool retainAll(Collection* coll) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    ::java::util::stream::Stream* stream() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;
    ::java::lang::String* toString() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated

public: /* package */
    Collections_SynchronizedCollection(Collection* c);
    Collections_SynchronizedCollection(Collection* c, ::java::lang::Object* mutex);
protected:
    Collections_SynchronizedCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();

private:
    virtual ::java::lang::Class* getClass0();
};
