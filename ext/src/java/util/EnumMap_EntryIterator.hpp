// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/util/fwd-config.hpp>
#include <java/util/EnumMap_EnumMapIterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::EnumMap_EntryIterator
    : public EnumMap_EnumMapIterator
{

public:
    typedef EnumMap_EnumMapIterator super;

private:
    EnumMap_EntryIterator_Entry* lastReturnedEntry {  };

public: /* package */
    EnumMap* this$0 {  };

    /*void ctor(); (private) */

public:
    Map_Entry* next() override;
    void remove() override;

    // Generated
    EnumMap_EntryIterator(EnumMap *EnumMap_this);
protected:
    EnumMap_EntryIterator(EnumMap *EnumMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
