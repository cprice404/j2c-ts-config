// Generated from /config/src/test/java/beanconfig/NotABeanFieldConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::NotABeanFieldConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    NotABeanFieldConfig_NotABean* notBean {  };

public:
    virtual NotABeanFieldConfig_NotABean* getNotBean();
    virtual void setNotBean(NotABeanFieldConfig_NotABean* notBean);

    // Generated
    NotABeanFieldConfig();
protected:
    NotABeanFieldConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class NotABeanFieldConfig_NotABean;
};
