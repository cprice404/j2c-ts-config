// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/beans/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::beans::IntrospectionException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-3728150539969542619LL) };

protected:
    void ctor(::java::lang::String* mess);

    // Generated

public:
    IntrospectionException(::java::lang::String* mess);
protected:
    IntrospectionException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
