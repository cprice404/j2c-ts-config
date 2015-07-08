// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/stream/fwd-config.hpp>
#include <java/util/Collections_UnmodifiableSet.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet
    : public Collections_UnmodifiableSet
{

public:
    typedef Collections_UnmodifiableSet super;

private:
    static constexpr int64_t serialVersionUID { int64_t(7854390611657943733LL) };

protected:
    void ctor(Set* s);

public:
    bool contains(::java::lang::Object* o) override;
    bool containsAll(Collection* coll) override;

public: /* package */
    static ::java::util::function::Consumer* entryConsumer(::java::util::function::Consumer* action);

public:
    bool equals(::java::lang::Object* o) override;
    void forEach(::java::util::function::Consumer* action) override;
    Iterator* iterator() override;
    ::java::util::stream::Stream* parallelStream() override;
    Spliterator* spliterator() override;
    ::java::util::stream::Stream* stream() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated

public: /* package */
    Collections_UnmodifiableMap_UnmodifiableEntrySet(Set* s);
protected:
    Collections_UnmodifiableMap_UnmodifiableEntrySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
