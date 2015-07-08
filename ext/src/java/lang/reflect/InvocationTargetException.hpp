// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/ReflectiveOperationException.hpp>

struct default_init_tag;

class java::lang::reflect::InvocationTargetException
    : public ::java::lang::ReflectiveOperationException
{

public:
    typedef ::java::lang::ReflectiveOperationException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(4085088731926701167LL) };
    ::java::lang::Throwable* target {  };

protected:
    void ctor();
    void ctor(::java::lang::Throwable* target);
    void ctor(::java::lang::Throwable* target, ::java::lang::String* s);

public:
    ::java::lang::Throwable* getCause() override;
    virtual ::java::lang::Throwable* getTargetException();

    // Generated

public: /* protected */
    InvocationTargetException();

public:
    InvocationTargetException(::java::lang::Throwable* target);
    InvocationTargetException(::java::lang::Throwable* target, ::java::lang::String* s);
protected:
    InvocationTargetException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
