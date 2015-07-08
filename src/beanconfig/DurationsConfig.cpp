// Generated from /config/src/test/java/beanconfig/DurationsConfig.java
#include <beanconfig/DurationsConfig.hpp>

#include <java/time/Duration.hpp>

beanconfig::DurationsConfig::DurationsConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::DurationsConfig::DurationsConfig()
    : DurationsConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::time::Duration* beanconfig::DurationsConfig::getSecond()
{
    return second;
}

void beanconfig::DurationsConfig::setSecond(::java::time::Duration* second)
{
    this->second = second;
}

java::time::Duration* beanconfig::DurationsConfig::getSecondAsNumber()
{
    return secondAsNumber;
}

void beanconfig::DurationsConfig::setSecondAsNumber(::java::time::Duration* secondAsNumber)
{
    this->secondAsNumber = secondAsNumber;
}

java::time::Duration* beanconfig::DurationsConfig::getHalfSecond()
{
    return halfSecond;
}

void beanconfig::DurationsConfig::setHalfSecond(::java::time::Duration* halfSecond)
{
    this->halfSecond = halfSecond;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::DurationsConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.DurationsConfig", 26);
    return c;
}

java::lang::Class* beanconfig::DurationsConfig::getClass0()
{
    return class_();
}

