// Generated from /config/src/test/java/beanconfig/BytesConfig.java
#include <beanconfig/BytesConfig.hpp>

#include <com/typesafe/config/ConfigMemorySize.hpp>

beanconfig::BytesConfig::BytesConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::BytesConfig::BytesConfig()
    : BytesConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::ConfigMemorySize* beanconfig::BytesConfig::getKilobyte()
{
    return kilobyte;
}

void beanconfig::BytesConfig::setKilobyte(::com::typesafe::config::ConfigMemorySize* kilobyte)
{
    this->kilobyte = kilobyte;
}

com::typesafe::config::ConfigMemorySize* beanconfig::BytesConfig::getKibibyte()
{
    return kibibyte;
}

void beanconfig::BytesConfig::setKibibyte(::com::typesafe::config::ConfigMemorySize* kibibyte)
{
    this->kibibyte = kibibyte;
}

com::typesafe::config::ConfigMemorySize* beanconfig::BytesConfig::getThousandBytes()
{
    return thousandBytes;
}

void beanconfig::BytesConfig::setThousandBytes(::com::typesafe::config::ConfigMemorySize* thousandBytes)
{
    this->thousandBytes = thousandBytes;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::BytesConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.BytesConfig", 22);
    return c;
}

java::lang::Class* beanconfig::BytesConfig::getClass0()
{
    return class_();
}

