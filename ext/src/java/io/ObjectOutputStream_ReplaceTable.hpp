// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_ReplaceTable
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ObjectOutputStream_HandleTable* htab {  };
    ::java::lang::ObjectArray* reps {  };

protected:
    void ctor(int32_t initialCapacity, float loadFactor);

public: /* package */
    virtual void assign(::java::lang::Object* obj, ::java::lang::Object* rep);
    virtual void clear();
    /*void grow(); (private) */
    virtual ::java::lang::Object* lookup(::java::lang::Object* obj);
    virtual int32_t size();

    // Generated
    ObjectOutputStream_ReplaceTable(int32_t initialCapacity, float loadFactor);
protected:
    ObjectOutputStream_ReplaceTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
