// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/AbstractList.hpp>

struct default_init_tag;

class java::util::AbstractSequentialList
    : public AbstractList
{

public:
    typedef AbstractList super;

protected:
    void ctor();

public:
    void add(int32_t index, ::java::lang::Object* element) override;
    bool addAll(int32_t index, Collection* c) override;
    ::java::lang::Object* get(int32_t index) override;
    Iterator* iterator() override;
    ListIterator* listIterator(int32_t index) = 0;
    ::java::lang::Object* remove(int32_t index) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;

    // Generated

public: /* protected */
    AbstractSequentialList();
protected:
    AbstractSequentialList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* e);
    ListIterator* listIterator();
    bool addAll(Collection* c);
    bool remove(::java::lang::Object* o);

private:
    virtual ::java::lang::Class* getClass0();
};
