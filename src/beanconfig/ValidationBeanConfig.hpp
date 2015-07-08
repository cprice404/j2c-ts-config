// Generated from /config/src/test/java/beanconfig/ValidationBeanConfig.java

#pragma once

#include <fwd-config.hpp>
#include <beanconfig/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <beanconfig/TestBeanConfig.hpp>

struct default_init_tag;

class beanconfig::ValidationBeanConfig
    : public TestBeanConfig
{

public:
    typedef TestBeanConfig super;

private:
    ::java::lang::String* propNotListedInConfig {  };
    int32_t shouldBeInt {  };
    bool shouldBeBoolean {  };
    ::java::util::List* shouldBeList {  };

public:
    virtual ::java::lang::String* getPropNotListedInConfig();
    virtual void setPropNotListedInConfig(::java::lang::String* propNotListedInConfig);
    virtual int32_t getShouldBeInt();
    virtual void setShouldBeInt(int32_t v);
    virtual bool getShouldBeBoolean();
    virtual void setShouldBeBoolean(bool v);
    virtual ::java::util::List* getShouldBeList();
    virtual void setShouldBeList(::java::util::List* v);

    // Generated
    ValidationBeanConfig();
protected:
    ValidationBeanConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
