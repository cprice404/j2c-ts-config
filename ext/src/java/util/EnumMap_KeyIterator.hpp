// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/EnumMap_EnumMapIterator.hpp>
#include <java/lang/Enum.hpp>

struct default_init_tag;

class java::util::EnumMap_KeyIterator
    : public EnumMap_EnumMapIterator
{

public:
    typedef EnumMap_EnumMapIterator super;

public: /* package */
    EnumMap* this$0 {  };

    /*void ctor(); (private) */

public:
    ::java::lang::Enum* next() override;

    // Generated
    EnumMap_KeyIterator(EnumMap *EnumMap_this);
protected:
    EnumMap_KeyIterator(EnumMap *EnumMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
