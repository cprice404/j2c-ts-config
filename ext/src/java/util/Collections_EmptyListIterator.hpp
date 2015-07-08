// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Collections_EmptyIterator.hpp>
#include <java/util/ListIterator.hpp>

struct default_init_tag;

class java::util::Collections_EmptyListIterator
    : public Collections_EmptyIterator
    , public virtual ListIterator
{

public:
    typedef Collections_EmptyIterator super;

private:
    static Collections_EmptyListIterator* EMPTY_ITERATOR_;

    /*void ctor(); (private) */

public:
    void add(::java::lang::Object* e) override;
    bool hasPrevious() override;
    int32_t nextIndex() override;
    ::java::lang::Object* previous() override;
    int32_t previousIndex() override;
    void set(::java::lang::Object* e) override;

    // Generated
    Collections_EmptyListIterator();
protected:
    Collections_EmptyListIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    bool hasNext();
    ::java::lang::Object* next();
    void remove();

public: /* package */
    static Collections_EmptyListIterator*& EMPTY_ITERATOR();

private:
    virtual ::java::lang::Class* getClass0();
};
