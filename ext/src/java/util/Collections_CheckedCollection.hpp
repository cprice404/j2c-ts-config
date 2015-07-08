// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_CheckedCollection
    : public virtual ::java::lang::Object
    , public virtual Collection
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Collection* c {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1578914078182001775LL) };

public: /* package */
    ::java::lang::Class* type {  };

private:
    ::java::lang::ObjectArray* zeroLengthElementArray__ {  };

protected:
    void ctor(Collection* c, ::java::lang::Class* type);

public:
    bool add(::java::lang::Object* e) override;
    bool addAll(Collection* coll) override;
    /*::java::lang::String* badElementMsg(::java::lang::Object* o); (private) */

public: /* package */
    virtual Collection* checkedCopyOf(Collection* coll);

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    bool containsAll(Collection* coll) override;
    void forEach(::java::util::function::Consumer* action) override;
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

public: /* package */
    virtual ::java::lang::Object* typeCheck(::java::lang::Object* o);
    /*::java::lang::ObjectArray* zeroLengthElementArray_(); (private) */

    // Generated
    Collections_CheckedCollection(Collection* c, ::java::lang::Class* type);
protected:
    Collections_CheckedCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();

private:
    virtual ::java::lang::Class* getClass0();
};
