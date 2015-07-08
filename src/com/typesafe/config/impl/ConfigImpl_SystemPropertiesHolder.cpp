// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_SystemPropertiesHolder.hpp>

#include <com/typesafe/config/impl/ConfigImpl.hpp>

com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::ConfigImpl_SystemPropertiesHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::ConfigImpl_SystemPropertiesHolder()
    : ConfigImpl_SystemPropertiesHolder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::atomic< com::typesafe::config::impl::AbstractConfigObject* >& com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::systemProperties()
{
    clinit();
    return systemProperties_;
}
std::atomic< com::typesafe::config::impl::AbstractConfigObject* > com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::systemProperties_;

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.SystemPropertiesHolder", 58);
    return c;
}

void com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        systemProperties_ = ConfigImpl::loadSystemProperties();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_SystemPropertiesHolder::getClass0()
{
    return class_();
}

