// Generated from /config/src/test/java/beanconfig/TestBeanConfig.java
#include <beanconfig/TestBeanConfig.hpp>

#include <beanconfig/NumbersConfig.hpp>

beanconfig::TestBeanConfig::TestBeanConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::TestBeanConfig::TestBeanConfig()
    : TestBeanConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

beanconfig::NumbersConfig* beanconfig::TestBeanConfig::getNumbers()
{
    return numbers;
}

void beanconfig::TestBeanConfig::setNumbers(NumbersConfig* numbers)
{
    this->numbers = numbers;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::TestBeanConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.TestBeanConfig", 25);
    return c;
}

java::lang::Class* beanconfig::TestBeanConfig::getClass0()
{
    return class_();
}

