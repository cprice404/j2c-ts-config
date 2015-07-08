// Generated from /config/src/test/java/beanconfig/ValidationBeanConfig.java
#include <beanconfig/ValidationBeanConfig.hpp>

#include <java/lang/String.hpp>
#include <java/util/List.hpp>

beanconfig::ValidationBeanConfig::ValidationBeanConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::ValidationBeanConfig::ValidationBeanConfig()
    : ValidationBeanConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* beanconfig::ValidationBeanConfig::getPropNotListedInConfig()
{
    return propNotListedInConfig;
}

void beanconfig::ValidationBeanConfig::setPropNotListedInConfig(::java::lang::String* propNotListedInConfig)
{
    this->propNotListedInConfig = propNotListedInConfig;
}

int32_t beanconfig::ValidationBeanConfig::getShouldBeInt()
{
    return shouldBeInt;
}

void beanconfig::ValidationBeanConfig::setShouldBeInt(int32_t v)
{
    shouldBeInt = v;
}

bool beanconfig::ValidationBeanConfig::getShouldBeBoolean()
{
    return shouldBeBoolean;
}

void beanconfig::ValidationBeanConfig::setShouldBeBoolean(bool v)
{
    shouldBeBoolean = v;
}

java::util::List* beanconfig::ValidationBeanConfig::getShouldBeList()
{
    return shouldBeList;
}

void beanconfig::ValidationBeanConfig::setShouldBeList(::java::util::List* v)
{
    shouldBeList = v;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::ValidationBeanConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.ValidationBeanConfig", 31);
    return c;
}

java::lang::Class* beanconfig::ValidationBeanConfig::getClass0()
{
    return class_();
}

