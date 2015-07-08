// Generated from /config/src/test/java/beanconfig/NotABeanFieldConfig.java
#include <beanconfig/NotABeanFieldConfig_NotABean.hpp>

beanconfig::NotABeanFieldConfig_NotABean::NotABeanFieldConfig_NotABean(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::NotABeanFieldConfig_NotABean::NotABeanFieldConfig_NotABean()
    : NotABeanFieldConfig_NotABean(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::NotABeanFieldConfig_NotABean::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.NotABeanFieldConfig.NotABean", 39);
    return c;
}

java::lang::Class* beanconfig::NotABeanFieldConfig_NotABean::getClass0()
{
    return class_();
}

