// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_EnvVariablesHolder.hpp>

#include <com/typesafe/config/impl/ConfigImpl.hpp>

com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::ConfigImpl_EnvVariablesHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::ConfigImpl_EnvVariablesHolder()
    : ConfigImpl_EnvVariablesHolder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::AbstractConfigObject*& com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::envVariables()
{
    clinit();
    return envVariables_;
}
com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::envVariables_;

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.EnvVariablesHolder", 54);
    return c;
}

void com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        envVariables_ = ConfigImpl::loadEnvVariables();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_EnvVariablesHolder::getClass0()
{
    return class_();
}

