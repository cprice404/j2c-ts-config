// Generated from /config/src/test/java/beanconfig/PreferCamelNamesConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::PreferCamelNamesConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* fooBar {  };
    ::java::lang::String* bazBar {  };

public:
    virtual ::java::lang::String* getFooBar();
    virtual void setFooBar(::java::lang::String* v);
    virtual ::java::lang::String* getBazBar();
    virtual void setBazBar(::java::lang::String* v);

    // Generated
    PreferCamelNamesConfig();
protected:
    PreferCamelNamesConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
