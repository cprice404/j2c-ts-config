// Generated from /config/src/test/java/beanconfig/UnsupportedMapKeyConfig.java
#include <beanconfig/UnsupportedMapKeyConfig.hpp>

#include <java/util/Map.hpp>

beanconfig::UnsupportedMapKeyConfig::UnsupportedMapKeyConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::UnsupportedMapKeyConfig::UnsupportedMapKeyConfig()
    : UnsupportedMapKeyConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Map* beanconfig::UnsupportedMapKeyConfig::getMap()
{
    return map;
}

void beanconfig::UnsupportedMapKeyConfig::setMap(::java::util::Map* map)
{
    this->map = map;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::UnsupportedMapKeyConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.UnsupportedMapKeyConfig", 34);
    return c;
}

java::lang::Class* beanconfig::UnsupportedMapKeyConfig::getClass0()
{
    return class_();
}

