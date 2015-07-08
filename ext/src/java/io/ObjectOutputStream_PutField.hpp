// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_PutField
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual void put(::java::lang::String* name, bool val) = 0;
    virtual void put(::java::lang::String* name, int8_t val) = 0;
    virtual void put(::java::lang::String* name, char16_t val) = 0;
    virtual void put(::java::lang::String* name, int16_t val) = 0;
    virtual void put(::java::lang::String* name, int32_t val) = 0;
    virtual void put(::java::lang::String* name, int64_t val) = 0;
    virtual void put(::java::lang::String* name, float val) = 0;
    virtual void put(::java::lang::String* name, double val) = 0;
    virtual void put(::java::lang::String* name, ::java::lang::Object* val) = 0;
    virtual void write(ObjectOutput* out) = 0;

    // Generated
    ObjectOutputStream_PutField();
protected:
    ObjectOutputStream_PutField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
