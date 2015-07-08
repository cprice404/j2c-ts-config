// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <com/typesafe/config/Config.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigImpl_defaultReference_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::concurrent::Callable
{

public:
    typedef ::java::lang::Object super;
    ::com::typesafe::config::Config* call() override;

    // Generated
    ConfigImpl_defaultReference_1(::java::lang::ClassLoader* loader);
    static ::java::lang::Class *class_();
    ::java::lang::ClassLoader* loader;

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigImpl;
    friend class ConfigImpl_LoaderCache;
    friend class ConfigImpl_LoaderCacheHolder;
    friend class ConfigImpl_FileNameSource;
    friend class ConfigImpl_ClasspathNameSource;
    friend class ConfigImpl_ClasspathNameSourceWithClass;
    friend class ConfigImpl_DefaultIncluderHolder;
    friend class ConfigImpl_SystemPropertiesHolder;
    friend class ConfigImpl_EnvVariablesHolder;
    friend class ConfigImpl_DebugHolder;
};
