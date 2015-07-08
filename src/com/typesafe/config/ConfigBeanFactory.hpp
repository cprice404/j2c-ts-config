// Generated from /config/src/main/java/com/typesafe/config/ConfigBeanFactory.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigBeanFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static /* <T> */::java::lang::Object* create(Config* config, ::java::lang::Class* clazz);

    // Generated
    ConfigBeanFactory();
protected:
    ConfigBeanFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
