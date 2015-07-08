// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/util/fwd-config.hpp>
#include <java/util/IdentityHashMap_IdentityHashMapIterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_EntryIterator
    : public IdentityHashMap_IdentityHashMapIterator
{

public:
    typedef IdentityHashMap_IdentityHashMapIterator super;

private:
    IdentityHashMap_EntryIterator_Entry* lastReturnedEntry {  };

public: /* package */
    IdentityHashMap* this$0 {  };

    /*void ctor(); (private) */

public:
    Map_Entry* next() override;
    void remove() override;

    // Generated
    IdentityHashMap_EntryIterator(IdentityHashMap *IdentityHashMap_this);
protected:
    IdentityHashMap_EntryIterator(IdentityHashMap *IdentityHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
