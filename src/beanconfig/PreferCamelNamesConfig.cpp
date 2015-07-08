// Generated from /config/src/test/java/beanconfig/PreferCamelNamesConfig.java
#include <beanconfig/PreferCamelNamesConfig.hpp>

#include <java/lang/String.hpp>

beanconfig::PreferCamelNamesConfig::PreferCamelNamesConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::PreferCamelNamesConfig::PreferCamelNamesConfig()
    : PreferCamelNamesConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* beanconfig::PreferCamelNamesConfig::getFooBar()
{
    return fooBar;
}

void beanconfig::PreferCamelNamesConfig::setFooBar(::java::lang::String* v)
{
    this->fooBar = v;
}

java::lang::String* beanconfig::PreferCamelNamesConfig::getBazBar()
{
    return bazBar;
}

void beanconfig::PreferCamelNamesConfig::setBazBar(::java::lang::String* v)
{
    this->bazBar = v;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::PreferCamelNamesConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.PreferCamelNamesConfig", 33);
    return c;
}

java::lang::Class* beanconfig::PreferCamelNamesConfig::getClass0()
{
    return class_();
}

