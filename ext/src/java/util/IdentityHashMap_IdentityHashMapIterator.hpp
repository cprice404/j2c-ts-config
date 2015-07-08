// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_IdentityHashMapIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t expectedModCount {  };
    int32_t index {  };
    bool indexValid {  };
    int32_t lastReturnedIndex {  };
    IdentityHashMap* this$0 {  };
    ::java::lang::ObjectArray* traversalTable {  };

    /*void ctor(); (private) */

public:
    bool hasNext() override;

public: /* protected */
    virtual int32_t nextIndex();

public:
    void remove() override;

    // Generated
    IdentityHashMap_IdentityHashMapIterator(IdentityHashMap *IdentityHashMap_this);
protected:
    IdentityHashMap_IdentityHashMapIterator(IdentityHashMap *IdentityHashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    IdentityHashMap *IdentityHashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
