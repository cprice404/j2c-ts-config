// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::EnumMap_EnumMapIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t index {  };
    int32_t lastReturnedIndex {  };
    EnumMap* this$0 {  };

    /*void ctor(); (private) */
    /*void checkLastReturnedIndex(); (private) */

public:
    bool hasNext() override;
    void remove() override;

    // Generated
    EnumMap_EnumMapIterator(EnumMap *EnumMap_this);
protected:
    EnumMap_EnumMapIterator(EnumMap *EnumMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    EnumMap *EnumMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
