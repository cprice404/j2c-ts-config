// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_Caches
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::concurrent::ConcurrentMap* subclassAudits_;
    static ::java::lang::ref::ReferenceQueue* subclassAuditsQueue_;

    /*void ctor(); (private) */

    // Generated

public:
    ObjectOutputStream_Caches();
protected:
    ObjectOutputStream_Caches(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::util::concurrent::ConcurrentMap*& subclassAudits();
    static ::java::lang::ref::ReferenceQueue*& subclassAuditsQueue();

private:
    virtual ::java::lang::Class* getClass0();
};
