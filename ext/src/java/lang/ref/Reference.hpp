// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ref::Reference
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Reference* discovered {  };
    static Reference_Lock* lock_;

public: /* package */
    Reference* next {  };

private:
    static Reference* pending_;

public: /* package */
    std::atomic< ReferenceQueue* > queue {  };

private:
    ::java::lang::Object* referent {  };

protected:
    void ctor(::java::lang::Object* referent);
    void ctor(::java::lang::Object* referent, ReferenceQueue* queue);

public:
    virtual void clear();
    virtual bool enqueue();
    virtual ::java::lang::Object* get();
    virtual bool isEnqueued();

    // Generated

public: /* package */
    Reference(::java::lang::Object* referent);
    Reference(::java::lang::Object* referent, ReferenceQueue* queue);
protected:
    Reference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static Reference_Lock*& lock();
    static Reference*& pending();
    virtual ::java::lang::Class* getClass0();
};
