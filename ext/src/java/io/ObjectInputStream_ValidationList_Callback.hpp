// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/security/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectInputStream_ValidationList_Callback
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::security::AccessControlContext* acc {  };
    ObjectInputStream_ValidationList_Callback* next {  };
    ObjectInputValidation* obj {  };
    int32_t priority {  };

protected:
    void ctor(ObjectInputValidation* obj, int32_t priority, ObjectInputStream_ValidationList_Callback* next, ::java::security::AccessControlContext* acc);

    // Generated

public: /* package */
    ObjectInputStream_ValidationList_Callback(ObjectInputValidation* obj, int32_t priority, ObjectInputStream_ValidationList_Callback* next, ::java::security::AccessControlContext* acc);
protected:
    ObjectInputStream_ValidationList_Callback(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
