// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectInputStream_ValidationList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ObjectInputStream_ValidationList_Callback* list {  };

protected:
    void ctor();

public:
    virtual void clear();

public: /* package */
    virtual void doCallbacks();
    virtual void register_(ObjectInputValidation* obj, int32_t priority);

    // Generated
    ObjectInputStream_ValidationList();
protected:
    ObjectInputStream_ValidationList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
