// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_DefaultIncluderHolder.hpp>

#include <com/typesafe/config/impl/SimpleIncluder.hpp>

com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::ConfigImpl_DefaultIncluderHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::ConfigImpl_DefaultIncluderHolder()
    : ConfigImpl_DefaultIncluderHolder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::ConfigIncluder*& com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::defaultIncluder()
{
    clinit();
    return defaultIncluder_;
}
com::typesafe::config::ConfigIncluder* com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::defaultIncluder_;

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.DefaultIncluderHolder", 57);
    return c;
}

void com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        defaultIncluder_ = new SimpleIncluder(nullptr);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_DefaultIncluderHolder::getClass0()
{
    return class_();
}

