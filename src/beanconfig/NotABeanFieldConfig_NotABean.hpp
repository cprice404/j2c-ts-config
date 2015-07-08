// Generated from /config/src/test/java/beanconfig/NotABeanFieldConfig.java

#pragma once

#include <fwd-config.hpp>
#include <beanconfig/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::NotABeanFieldConfig_NotABean
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t stuff {  };

    // Generated

public:
    NotABeanFieldConfig_NotABean();
protected:
    NotABeanFieldConfig_NotABean(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class NotABeanFieldConfig;
};
