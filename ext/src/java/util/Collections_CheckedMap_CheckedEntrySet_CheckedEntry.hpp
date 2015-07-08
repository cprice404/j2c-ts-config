// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::Collections_CheckedMap_CheckedEntrySet_CheckedEntry
    : public virtual ::java::lang::Object
    , public virtual Map_Entry
{

public:
    typedef ::java::lang::Object super;

private:
    Map_Entry* e {  };
    ::java::lang::Class* valueType {  };

protected:
    void ctor(Map_Entry* e, ::java::lang::Class* valueType);
    /*::java::lang::String* badValueMsg(::java::lang::Object* value); (private) */

public:
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    int32_t hashCode() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    Collections_CheckedMap_CheckedEntrySet_CheckedEntry(Map_Entry* e, ::java::lang::Class* valueType);
protected:
    Collections_CheckedMap_CheckedEntrySet_CheckedEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
