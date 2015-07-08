// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_EmptySet
    : public AbstractSet
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractSet super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1582296315990362920LL) };

    /*void ctor(); (private) */

public:
    bool contains(::java::lang::Object* obj) override;
    bool containsAll(Collection* c) override;
    void forEach(::java::util::function::Consumer* action) override;
    bool isEmpty() override;
    Iterator* iterator() override;
    /*::java::lang::Object* readResolve(); (private) */
    bool removeIf(::java::util::function::Predicate* filter) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated
    Collections_EmptySet();
protected:
    Collections_EmptySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
