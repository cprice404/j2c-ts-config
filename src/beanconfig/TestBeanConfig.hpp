// Generated from /config/src/test/java/beanconfig/TestBeanConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::TestBeanConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    NumbersConfig* numbers {  };

public:
    virtual NumbersConfig* getNumbers();
    virtual void setNumbers(NumbersConfig* numbers);

    // Generated
    TestBeanConfig();
protected:
    TestBeanConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
