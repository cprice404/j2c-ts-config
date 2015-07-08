// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigImpl_LoaderCache
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::com::typesafe::config::Config* currentSystemProperties {  };
    ::java::lang::ref::WeakReference* currentLoader {  };
    ::java::util::Map* cache {  };
protected:
    void ctor();

public: /* package */
    virtual ::com::typesafe::config::Config* getOrElseUpdate(::java::lang::ClassLoader* loader, ::java::lang::String* key, ::java::util::concurrent::Callable* updater);

    // Generated
    ConfigImpl_LoaderCache();
protected:
    ConfigImpl_LoaderCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigImpl;
    friend class ConfigImpl_LoaderCacheHolder;
    friend class ConfigImpl_FileNameSource;
    friend class ConfigImpl_ClasspathNameSource;
    friend class ConfigImpl_ClasspathNameSourceWithClass;
    friend class ConfigImpl_DefaultIncluderHolder;
    friend class ConfigImpl_SystemPropertiesHolder;
    friend class ConfigImpl_EnvVariablesHolder;
    friend class ConfigImpl_defaultReference_1;
    friend class ConfigImpl_DebugHolder;
};
