// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/IdentityHashMap_IdentityHashMapIterator.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_KeyIterator
    : public IdentityHashMap_IdentityHashMapIterator
{

public:
    typedef IdentityHashMap_IdentityHashMapIterator super;

public: /* package */
    IdentityHashMap* this$0 {  };

    /*void ctor(); (private) */

public:
    ::java::lang::Object* next() override;

    // Generated
    IdentityHashMap_KeyIterator(IdentityHashMap *IdentityHashMap_this);
protected:
    IdentityHashMap_KeyIterator(IdentityHashMap *IdentityHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
