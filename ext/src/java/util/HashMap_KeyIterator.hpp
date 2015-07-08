// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/HashMap_HashIterator.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::HashMap_KeyIterator final
    : public HashMap_HashIterator
    , public Iterator
{

public:
    typedef HashMap_HashIterator super;

public: /* package */
    HashMap* this$0 {  };

protected:
    void ctor();

public:
    ::java::lang::Object* next() override;

    // Generated

public: /* package */
    HashMap_KeyIterator(HashMap *HashMap_this);
protected:
    HashMap_KeyIterator(HashMap *HashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool hasNext();
    virtual void remove();

private:
    virtual ::java::lang::Class* getClass0();
};
