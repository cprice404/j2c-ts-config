// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_EntryIterator_Entry
    : public virtual ::java::lang::Object
    , public virtual Map_Entry
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t index {  };

public: /* package */
    IdentityHashMap_EntryIterator* this$1 {  };

    /*void ctor(int32_t a0); (private) */
    /*void checkIndexForEntryUse(); (private) */

public:
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    int32_t hashCode() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;
    ::java::lang::String* toString() override;

    // Generated
    IdentityHashMap_EntryIterator_Entry(IdentityHashMap_EntryIterator *IdentityHashMap_EntryIterator_this);
protected:
    IdentityHashMap_EntryIterator_Entry(IdentityHashMap_EntryIterator *IdentityHashMap_EntryIterator_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    IdentityHashMap_EntryIterator *IdentityHashMap_EntryIterator_this;

private:
    virtual ::java::lang::Class* getClass0();
};
