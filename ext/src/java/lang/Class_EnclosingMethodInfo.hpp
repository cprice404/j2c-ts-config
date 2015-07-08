// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Class_EnclosingMethodInfo final
    : public Object
{

public:
    typedef Object super;

private:
    static bool $assertionsDisabled_;
    String* descriptor {  };
    Class* enclosingClass {  };
    String* name {  };

    /*void ctor(ObjectArray* enclosingInfo); (private) */

public: /* package */
    String* getDescriptor();
    Class* getEnclosingClass();
    String* getName();
    bool isConstructor();
    bool isMethod();
    bool isPartial();

    // Generated

public:
    Class_EnclosingMethodInfo();
protected:
    Class_EnclosingMethodInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
