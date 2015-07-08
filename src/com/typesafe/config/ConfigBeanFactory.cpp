// Generated from /config/src/main/java/com/typesafe/config/ConfigBeanFactory.java
#include <com/typesafe/config/ConfigBeanFactory.hpp>

#include <com/typesafe/config/impl/ConfigBeanImpl.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

com::typesafe::config::ConfigBeanFactory::ConfigBeanFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigBeanFactory::ConfigBeanFactory()
    : ConfigBeanFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

/* <T> */java::lang::Object* com::typesafe::config::ConfigBeanFactory::create(Config* config, ::java::lang::Class* clazz)
{
    clinit();
    return java_cast< ::java::lang::Object* >(::com::typesafe::config::impl::ConfigBeanImpl::createInternal(config, clazz));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigBeanFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigBeanFactory", 37);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigBeanFactory::getClass0()
{
    return class_();
}

