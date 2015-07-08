// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/AbstractList_Itr.hpp>
#include <java/util/ListIterator.hpp>

struct default_init_tag;

class java::util::AbstractList_ListItr
    : public AbstractList_Itr
    , public virtual ListIterator
{

public:
    typedef AbstractList_Itr super;

public: /* package */
    AbstractList* this$0 {  };

protected:
    void ctor(int32_t index);

public:
    void add(::java::lang::Object* e) override;
    bool hasPrevious() override;
    int32_t nextIndex() override;
    ::java::lang::Object* previous() override;
    int32_t previousIndex() override;
    void set(::java::lang::Object* e) override;

    // Generated

public: /* package */
    AbstractList_ListItr(AbstractList *AbstractList_this, int32_t index);
protected:
    AbstractList_ListItr(AbstractList *AbstractList_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool hasNext();
    ::java::lang::Object* next();
    void remove();

private:
    virtual ::java::lang::Class* getClass0();
};
