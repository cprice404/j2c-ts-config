// Generated from /config/src/test/java/beanconfig/ArraysConfig.java
#include <beanconfig/ArraysConfig.hpp>

#include <java/util/List.hpp>

beanconfig::ArraysConfig::ArraysConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::ArraysConfig::ArraysConfig()
    : ArraysConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* beanconfig::ArraysConfig::getEmpty()
{
    return empty;
}

void beanconfig::ArraysConfig::setEmpty(::java::util::List* empty)
{
    this->empty = empty;
}

java::util::List* beanconfig::ArraysConfig::getOfInt()
{
    return ofInt;
}

void beanconfig::ArraysConfig::setOfInt(::java::util::List* ofInt)
{
    this->ofInt = ofInt;
}

java::util::List* beanconfig::ArraysConfig::getOfString()
{
    return ofString;
}

void beanconfig::ArraysConfig::setOfString(::java::util::List* ofString)
{
    this->ofString = ofString;
}

java::util::List* beanconfig::ArraysConfig::getOfDouble()
{
    return ofDouble;
}

void beanconfig::ArraysConfig::setOfDouble(::java::util::List* ofDouble)
{
    this->ofDouble = ofDouble;
}

java::util::List* beanconfig::ArraysConfig::getOfNull()
{
    return ofNull;
}

void beanconfig::ArraysConfig::setOfNull(::java::util::List* ofNull)
{
    this->ofNull = ofNull;
}

java::util::List* beanconfig::ArraysConfig::getOfBoolean()
{
    return ofBoolean;
}

void beanconfig::ArraysConfig::setOfBoolean(::java::util::List* ofBoolean)
{
    this->ofBoolean = ofBoolean;
}

java::util::List* beanconfig::ArraysConfig::getOfObject()
{
    return ofObject;
}

void beanconfig::ArraysConfig::setOfObject(::java::util::List* ofObject)
{
    this->ofObject = ofObject;
}

java::util::List* beanconfig::ArraysConfig::getOfLong()
{
    return ofLong;
}

void beanconfig::ArraysConfig::setOfLong(::java::util::List* ofLong)
{
    this->ofLong = ofLong;
}

java::util::List* beanconfig::ArraysConfig::getOfConfig()
{
    return ofConfig;
}

void beanconfig::ArraysConfig::setOfConfig(::java::util::List* ofConfig)
{
    this->ofConfig = ofConfig;
}

java::util::List* beanconfig::ArraysConfig::getOfConfigObject()
{
    return ofConfigObject;
}

void beanconfig::ArraysConfig::setOfConfigObject(::java::util::List* ofConfigObject)
{
    this->ofConfigObject = ofConfigObject;
}

java::util::List* beanconfig::ArraysConfig::getOfConfigValue()
{
    return ofConfigValue;
}

void beanconfig::ArraysConfig::setOfConfigValue(::java::util::List* ofConfigValue)
{
    this->ofConfigValue = ofConfigValue;
}

java::util::List* beanconfig::ArraysConfig::getOfDuration()
{
    return ofDuration;
}

void beanconfig::ArraysConfig::setOfDuration(::java::util::List* ofDuration)
{
    this->ofDuration = ofDuration;
}

java::util::List* beanconfig::ArraysConfig::getOfMemorySize()
{
    return ofMemorySize;
}

void beanconfig::ArraysConfig::setOfMemorySize(::java::util::List* ofMemorySize)
{
    this->ofMemorySize = ofMemorySize;
}

java::util::List* beanconfig::ArraysConfig::getOfStringBean()
{
    return ofStringBean;
}

void beanconfig::ArraysConfig::setOfStringBean(::java::util::List* ofStringBean)
{
    this->ofStringBean = ofStringBean;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::ArraysConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.ArraysConfig", 23);
    return c;
}

java::lang::Class* beanconfig::ArraysConfig::getClass0()
{
    return class_();
}

