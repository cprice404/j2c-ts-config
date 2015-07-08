// Generated from /config/src/test/java/beanconfig/NotABeanFieldConfig.java
#include <beanconfig/NotABeanFieldConfig.hpp>

#include <beanconfig/NotABeanFieldConfig_NotABean.hpp>

beanconfig::NotABeanFieldConfig::NotABeanFieldConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::NotABeanFieldConfig::NotABeanFieldConfig()
    : NotABeanFieldConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

beanconfig::NotABeanFieldConfig_NotABean* beanconfig::NotABeanFieldConfig::getNotBean()
{
    return notBean;
}

void beanconfig::NotABeanFieldConfig::setNotBean(NotABeanFieldConfig_NotABean* notBean)
{
    this->notBean = notBean;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::NotABeanFieldConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.NotABeanFieldConfig", 30);
    return c;
}

java::lang::Class* beanconfig::NotABeanFieldConfig::getClass0()
{
    return class_();
}

