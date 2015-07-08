// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_LoaderCacheHolder.hpp>

#include <com/typesafe/config/impl/ConfigImpl_LoaderCache.hpp>

com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::ConfigImpl_LoaderCacheHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::ConfigImpl_LoaderCacheHolder()
    : ConfigImpl_LoaderCacheHolder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::ConfigImpl_LoaderCache*& com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::cache()
{
    clinit();
    return cache_;
}
com::typesafe::config::impl::ConfigImpl_LoaderCache* com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::cache_;

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.LoaderCacheHolder", 53);
    return c;
}

void com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        cache_ = new ConfigImpl_LoaderCache();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder::getClass0()
{
    return class_();
}

