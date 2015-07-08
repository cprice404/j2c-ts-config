// Generated from /config/src/test/java/beanconfig/NumbersConfig.java
#include <beanconfig/NumbersConfig.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>

beanconfig::NumbersConfig::NumbersConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::NumbersConfig::NumbersConfig()
    : NumbersConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t beanconfig::NumbersConfig::getIntVal()
{
    return intVal;
}

void beanconfig::NumbersConfig::setIntVal(int32_t intVal)
{
    this->intVal = intVal;
}

java::lang::Integer* beanconfig::NumbersConfig::getIntObj()
{
    return intObj;
}

void beanconfig::NumbersConfig::setIntObj(::java::lang::Integer* intObj)
{
    this->intObj = intObj;
}

int64_t beanconfig::NumbersConfig::getLongVal()
{
    return longVal;
}

void beanconfig::NumbersConfig::setLongVal(int64_t longVal)
{
    this->longVal = longVal;
}

java::lang::Long* beanconfig::NumbersConfig::getLongObj()
{
    return longObj;
}

void beanconfig::NumbersConfig::setLongObj(::java::lang::Long* longObj)
{
    this->longObj = longObj;
}

double beanconfig::NumbersConfig::getDoubleVal()
{
    return doubleVal;
}

void beanconfig::NumbersConfig::setDoubleVal(double doubleVal)
{
    this->doubleVal = doubleVal;
}

java::lang::Double* beanconfig::NumbersConfig::getDoubleObj()
{
    return doubleObj;
}

void beanconfig::NumbersConfig::setDoubleObj(::java::lang::Double* doubleObj)
{
    this->doubleObj = doubleObj;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::NumbersConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.NumbersConfig", 24);
    return c;
}

java::lang::Class* beanconfig::NumbersConfig::getClass0()
{
    return class_();
}

