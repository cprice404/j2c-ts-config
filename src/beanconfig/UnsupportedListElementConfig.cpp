// Generated from /config/src/test/java/beanconfig/UnsupportedListElementConfig.java
#include <beanconfig/UnsupportedListElementConfig.hpp>

#include <java/util/List.hpp>

beanconfig::UnsupportedListElementConfig::UnsupportedListElementConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::UnsupportedListElementConfig::UnsupportedListElementConfig()
    : UnsupportedListElementConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* beanconfig::UnsupportedListElementConfig::getUri()
{
    return uri;
}

void beanconfig::UnsupportedListElementConfig::setUri(::java::util::List* uri)
{
    this->uri = uri;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::UnsupportedListElementConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.UnsupportedListElementConfig", 39);
    return c;
}

java::lang::Class* beanconfig::UnsupportedListElementConfig::getClass0()
{
    return class_();
}

