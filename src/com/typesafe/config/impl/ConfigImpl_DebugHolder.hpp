// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigImpl_DebugHolder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* LOADS_;
    static ::java::lang::String* SUBSTITUTIONS_;
    static ::java::util::Map* loadDiagnostics();
    static ::java::util::Map* diagnostics_;
    static bool traceLoadsEnabled__;
    static bool traceSubstitutionsEnabled__;

public: /* package */
    static bool traceLoadsEnabled();
    static bool traceSubstitutionsEnabled();

    // Generated

public:
    ConfigImpl_DebugHolder();
protected:
    ConfigImpl_DebugHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& LOADS();
    static ::java::lang::String*& SUBSTITUTIONS();
    static ::java::util::Map*& diagnostics();
    static bool& traceLoadsEnabled_();
    static bool& traceSubstitutionsEnabled_();
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
    friend class ConfigImpl_defaultReference_1;
};
