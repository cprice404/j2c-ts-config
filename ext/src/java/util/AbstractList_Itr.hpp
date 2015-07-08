// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::AbstractList_Itr
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t cursor {  };
    int32_t expectedModCount {  };
    int32_t lastRet {  };
    AbstractList* this$0 {  };

    /*void ctor(); (private) */
    void checkForComodification();

public:
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated
    AbstractList_Itr(AbstractList *AbstractList_this);
protected:
    AbstractList_Itr(AbstractList *AbstractList_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    AbstractList *AbstractList_this;

private:
    virtual ::java::lang::Class* getClass0();
};
