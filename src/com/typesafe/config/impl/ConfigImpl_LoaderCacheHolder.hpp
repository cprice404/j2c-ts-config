// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigImpl_LoaderCacheHolder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ConfigImpl_LoaderCache* cache_;

    // Generated

public:
    ConfigImpl_LoaderCacheHolder();
protected:
    ConfigImpl_LoaderCacheHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ConfigImpl_LoaderCache*& cache();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigImpl;
    friend class ConfigImpl_LoaderCache;
    friend class ConfigImpl_FileNameSource;
    friend class ConfigImpl_ClasspathNameSource;
    friend class ConfigImpl_ClasspathNameSourceWithClass;
    friend class ConfigImpl_DefaultIncluderHolder;
    friend class ConfigImpl_SystemPropertiesHolder;
    friend class ConfigImpl_EnvVariablesHolder;
    friend class ConfigImpl_defaultReference_1;
    friend class ConfigImpl_DebugHolder;
};
