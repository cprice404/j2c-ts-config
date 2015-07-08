// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigImpl
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::com::typesafe::config::Config* computeCachedConfig(::java::lang::ClassLoader* loader, ::java::lang::String* key, ::java::util::concurrent::Callable* updater);
    static ::com::typesafe::config::ConfigObject* parseResourcesAnySyntax(::java::lang::Class* klass, ::java::lang::String* resourceBasename, ::com::typesafe::config::ConfigParseOptions* baseOptions);
    static ::com::typesafe::config::ConfigObject* parseResourcesAnySyntax(::java::lang::String* resourceBasename, ::com::typesafe::config::ConfigParseOptions* baseOptions);
    static ::com::typesafe::config::ConfigObject* parseFileAnySyntax(::java::io::File* basename, ::com::typesafe::config::ConfigParseOptions* baseOptions);

public: /* package */
    static AbstractConfigObject* emptyObject(::java::lang::String* originDescription);

public:
    static ::com::typesafe::config::Config* emptyConfig(::java::lang::String* originDescription);

public: /* package */
    static AbstractConfigObject* empty(::com::typesafe::config::ConfigOrigin* origin);

private:
    static ::com::typesafe::config::ConfigOrigin* defaultValueOrigin_;
    static ConfigBoolean* defaultTrueValue_;
    static ConfigBoolean* defaultFalseValue_;
    static ConfigNull* defaultNullValue_;
    static SimpleConfigList* defaultEmptyList_;
    static SimpleConfigObject* defaultEmptyObject_;
    static SimpleConfigList* emptyList(::com::typesafe::config::ConfigOrigin* origin);
    static AbstractConfigObject* emptyObject(::com::typesafe::config::ConfigOrigin* origin);
    static ::com::typesafe::config::ConfigOrigin* valueOrigin(::java::lang::String* originDescription);

public:
    static ::com::typesafe::config::ConfigValue* fromAnyRef(::java::lang::Object* object, ::java::lang::String* originDescription);
    static ::com::typesafe::config::ConfigObject* fromPathMap(::java::util::Map* pathMap, ::java::lang::String* originDescription);

public: /* package */
    static AbstractConfigValue* fromAnyRef(::java::lang::Object* object, ::com::typesafe::config::ConfigOrigin* origin, FromMapMode* mapMode);
    static ::com::typesafe::config::ConfigIncluder* defaultIncluder();

private:
    static ::java::util::Properties* getSystemProperties();
    static AbstractConfigObject* loadSystemProperties();

public: /* package */
    static AbstractConfigObject* systemPropertiesAsConfigObject();

public:
    static ::com::typesafe::config::Config* systemPropertiesAsConfig();
    static void reloadSystemPropertiesConfig();

private:
    static AbstractConfigObject* loadEnvVariables();

public: /* package */
    static AbstractConfigObject* envVariablesAsConfigObject();

public:
    static ::com::typesafe::config::Config* envVariablesAsConfig();
    static ::com::typesafe::config::Config* defaultReference(::java::lang::ClassLoader* loader);
    static bool traceLoadsEnabled();
    static bool traceSubstitutionsEnabled();
    static void trace(::java::lang::String* message);
    static void trace(int32_t indentLevel, ::java::lang::String* message);

public: /* package */
    static ::com::typesafe::config::ConfigException_NotResolved* improveNotResolved(Path* what, ::com::typesafe::config::ConfigException_NotResolved* original);

public:
    static ::com::typesafe::config::ConfigOrigin* newSimpleOrigin(::java::lang::String* description);
    static ::com::typesafe::config::ConfigOrigin* newFileOrigin(::java::lang::String* filename);
    static ::com::typesafe::config::ConfigOrigin* newURLOrigin(::java::net::URL* url);

    // Generated
    ConfigImpl();
protected:
    ConfigImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::com::typesafe::config::ConfigOrigin*& defaultValueOrigin();
    static ConfigBoolean*& defaultTrueValue();
    static ConfigBoolean*& defaultFalseValue();
    static ConfigNull*& defaultNullValue();
    static SimpleConfigList*& defaultEmptyList();
    static SimpleConfigObject*& defaultEmptyObject();
    virtual ::java::lang::Class* getClass0();
    friend class ConfigImpl_LoaderCache;
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
