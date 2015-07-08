// Generated from /config/src/test/java/beanconfig/UnsupportedMapValueConfig.java
#include <beanconfig/UnsupportedMapValueConfig.hpp>

#include <java/util/Map.hpp>

beanconfig::UnsupportedMapValueConfig::UnsupportedMapValueConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::UnsupportedMapValueConfig::UnsupportedMapValueConfig()
    : UnsupportedMapValueConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Map* beanconfig::UnsupportedMapValueConfig::getMap()
{
    return map;
}

void beanconfig::UnsupportedMapValueConfig::setMap(::java::util::Map* map)
{
    this->map = map;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::UnsupportedMapValueConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.UnsupportedMapValueConfig", 36);
    return c;
}

java::lang::Class* beanconfig::UnsupportedMapValueConfig::getClass0()
{
    return class_();
}

