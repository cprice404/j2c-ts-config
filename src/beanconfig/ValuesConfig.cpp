// Generated from /config/src/test/java/beanconfig/ValuesConfig.java
#include <beanconfig/ValuesConfig.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

beanconfig::ValuesConfig::ValuesConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::ValuesConfig::ValuesConfig()
    : ValuesConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object* beanconfig::ValuesConfig::getObj()
{
    return obj;
}

void beanconfig::ValuesConfig::setObj(::java::lang::Object* obj)
{
    this->obj = obj;
}

com::typesafe::config::Config* beanconfig::ValuesConfig::getConfig()
{
    return config;
}

void beanconfig::ValuesConfig::setConfig(::com::typesafe::config::Config* config)
{
    this->config = config;
}

com::typesafe::config::ConfigObject* beanconfig::ValuesConfig::getConfigObj()
{
    return configObj;
}

void beanconfig::ValuesConfig::setConfigObj(::com::typesafe::config::ConfigObject* configObj)
{
    this->configObj = configObj;
}

com::typesafe::config::ConfigValue* beanconfig::ValuesConfig::getConfigValue()
{
    return configValue;
}

void beanconfig::ValuesConfig::setConfigValue(::com::typesafe::config::ConfigValue* configValue)
{
    this->configValue = configValue;
}

com::typesafe::config::ConfigList* beanconfig::ValuesConfig::getList()
{
    return list;
}

void beanconfig::ValuesConfig::setList(::com::typesafe::config::ConfigList* list)
{
    this->list = list;
}

java::util::Map* beanconfig::ValuesConfig::getUnwrappedMap()
{
    return unwrappedMap;
}

void beanconfig::ValuesConfig::setUnwrappedMap(::java::util::Map* unwrappedMap)
{
    this->unwrappedMap = unwrappedMap;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::ValuesConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.ValuesConfig", 23);
    return c;
}

java::lang::Class* beanconfig::ValuesConfig::getClass0()
{
    return class_();
}

