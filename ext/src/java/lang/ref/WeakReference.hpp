// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/lang/ref/Reference.hpp>

struct default_init_tag;

class java::lang::ref::WeakReference
    : public Reference
{

public:
    typedef Reference super;

protected:
    void ctor(::java::lang::Object* referent);
    void ctor(::java::lang::Object* referent, ReferenceQueue* q);

    // Generated

public:
    WeakReference(::java::lang::Object* referent);
    WeakReference(::java::lang::Object* referent, ReferenceQueue* q);
protected:
    WeakReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
