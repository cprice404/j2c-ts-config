// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_EntrySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;

public: /* package */
    IdentityHashMap* this$0 {  };

    /*void ctor(); (private) */

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    Iterator* iterator() override;
    bool remove(::java::lang::Object* o) override;
    bool removeAll(Collection* c) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated
    IdentityHashMap_EntrySet(IdentityHashMap *IdentityHashMap_this);
protected:
    IdentityHashMap_EntrySet(IdentityHashMap *IdentityHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    IdentityHashMap *IdentityHashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
