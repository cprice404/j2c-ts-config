// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::Collections_EmptyIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    static Collections_EmptyIterator* EMPTY_ITERATOR_;

    /*void ctor(); (private) */

public:
    void forEachRemaining(::java::util::function::Consumer* action) override;
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated
    Collections_EmptyIterator();
protected:
    Collections_EmptyIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static Collections_EmptyIterator*& EMPTY_ITERATOR();

private:
    virtual ::java::lang::Class* getClass0();
};
