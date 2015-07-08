// Generated from /config/src/test/java/beanconfig/BooleansConfig.java
#include <beanconfig/BooleansConfig.hpp>

#include <java/lang/Boolean.hpp>

beanconfig::BooleansConfig::BooleansConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::BooleansConfig::BooleansConfig()
    : BooleansConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Boolean* beanconfig::BooleansConfig::getTrueVal()
{
    return trueVal;
}

void beanconfig::BooleansConfig::setTrueVal(::java::lang::Boolean* trueVal)
{
    this->trueVal = trueVal;
}

java::lang::Boolean* beanconfig::BooleansConfig::getTrueValAgain()
{
    return trueValAgain;
}

void beanconfig::BooleansConfig::setTrueValAgain(::java::lang::Boolean* trueValAgain)
{
    this->trueValAgain = trueValAgain;
}

java::lang::Boolean* beanconfig::BooleansConfig::getFalseVal()
{
    return falseVal;
}

void beanconfig::BooleansConfig::setFalseVal(::java::lang::Boolean* falseVal)
{
    this->falseVal = falseVal;
}

java::lang::Boolean* beanconfig::BooleansConfig::getFalseValAgain()
{
    return falseValAgain;
}

void beanconfig::BooleansConfig::setFalseValAgain(::java::lang::Boolean* falseValAgain)
{
    this->falseValAgain = falseValAgain;
}

java::lang::Boolean* beanconfig::BooleansConfig::getOn()
{
    return on;
}

void beanconfig::BooleansConfig::setOn(::java::lang::Boolean* on)
{
    this->on = on;
}

bool beanconfig::BooleansConfig::getOff()
{
    return off;
}

void beanconfig::BooleansConfig::setOff(bool off)
{
    this->off = off;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::BooleansConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.BooleansConfig", 25);
    return c;
}

java::lang::Class* beanconfig::BooleansConfig::getClass0()
{
    return class_();
}

