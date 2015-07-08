// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/impl/SimpleIncluder_NameSource.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigImpl_FileNameSource
    : public virtual ::java::lang::Object
    , public virtual SimpleIncluder_NameSource
{

public:
    typedef ::java::lang::Object super;
    ::com::typesafe::config::ConfigParseable* nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* parseOptions) override;

    // Generated
    ConfigImpl_FileNameSource();
protected:
    ConfigImpl_FileNameSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigImpl;
    friend class ConfigImpl_LoaderCache;
    friend class ConfigImpl_LoaderCacheHolder;
    friend class ConfigImpl_ClasspathNameSource;
    friend class ConfigImpl_ClasspathNameSourceWithClass;
    friend class ConfigImpl_DefaultIncluderHolder;
    friend class ConfigImpl_SystemPropertiesHolder;
    friend class ConfigImpl_EnvVariablesHolder;
    friend class ConfigImpl_defaultReference_1;
    friend class ConfigImpl_DebugHolder;
};
