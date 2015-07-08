// Generated from /config/src/main/java/com/typesafe/config/ConfigFactory.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static Config* load(::java::lang::String* resourceBasename);
    static Config* load(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename);
    static Config* load(::java::lang::String* resourceBasename, ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions);
    static Config* load(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename, ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions);

private:
    static ::java::lang::ClassLoader* checkedContextClassLoader(::java::lang::String* methodName);
    static ConfigParseOptions* ensureClassLoader(ConfigParseOptions* options, ::java::lang::String* methodName);

public:
    static Config* load(Config* config);
    static Config* load(::java::lang::ClassLoader* loader, Config* config);
    static Config* load(Config* config, ConfigResolveOptions* resolveOptions);
    static Config* load(::java::lang::ClassLoader* loader, Config* config, ConfigResolveOptions* resolveOptions);

private:
    static Config* parseApplicationConfig(ConfigParseOptions* parseOptions);

public:
    static Config* load();
    static Config* load(ConfigParseOptions* parseOptions);
    static Config* load(::java::lang::ClassLoader* loader);
    static Config* load(::java::lang::ClassLoader* loader, ConfigParseOptions* parseOptions);
    static Config* load(::java::lang::ClassLoader* loader, ConfigResolveOptions* resolveOptions);
    static Config* load(::java::lang::ClassLoader* loader, ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions);
    static Config* load(ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions);
    static Config* defaultReference();
    static Config* defaultReference(::java::lang::ClassLoader* loader);
    static Config* defaultOverrides();
    static Config* defaultOverrides(::java::lang::ClassLoader* loader);
    static Config* defaultApplication();
    static Config* defaultApplication(::java::lang::ClassLoader* loader);
    static Config* defaultApplication(ConfigParseOptions* options);
    static void invalidateCaches();
    static Config* empty();
    static Config* empty(::java::lang::String* originDescription);
    static Config* systemProperties();
    static Config* systemEnvironment();
    static Config* parseProperties(::java::util::Properties* properties, ConfigParseOptions* options);
    static Config* parseProperties(::java::util::Properties* properties);
    static Config* parseReader(::java::io::Reader* reader, ConfigParseOptions* options);
    static Config* parseReader(::java::io::Reader* reader);
    static Config* parseURL(::java::net::URL* url, ConfigParseOptions* options);
    static Config* parseURL(::java::net::URL* url);
    static Config* parseFile(::java::io::File* file, ConfigParseOptions* options);
    static Config* parseFile(::java::io::File* file);
    static Config* parseFileAnySyntax(::java::io::File* fileBasename, ConfigParseOptions* options);
    static Config* parseFileAnySyntax(::java::io::File* fileBasename);
    static Config* parseResources(::java::lang::Class* klass, ::java::lang::String* resource, ConfigParseOptions* options);
    static Config* parseResources(::java::lang::Class* klass, ::java::lang::String* resource);
    static Config* parseResourcesAnySyntax(::java::lang::Class* klass, ::java::lang::String* resourceBasename, ConfigParseOptions* options);
    static Config* parseResourcesAnySyntax(::java::lang::Class* klass, ::java::lang::String* resourceBasename);
    static Config* parseResources(::java::lang::ClassLoader* loader, ::java::lang::String* resource, ConfigParseOptions* options);
    static Config* parseResources(::java::lang::ClassLoader* loader, ::java::lang::String* resource);
    static Config* parseResourcesAnySyntax(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename, ConfigParseOptions* options);
    static Config* parseResourcesAnySyntax(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename);
    static Config* parseResources(::java::lang::String* resource, ConfigParseOptions* options);
    static Config* parseResources(::java::lang::String* resource);
    static Config* parseResourcesAnySyntax(::java::lang::String* resourceBasename, ConfigParseOptions* options);
    static Config* parseResourcesAnySyntax(::java::lang::String* resourceBasename);
    static Config* parseString(::java::lang::String* s, ConfigParseOptions* options);
    static Config* parseString(::java::lang::String* s);
    static Config* parseMap(::java::util::Map* values, ::java::lang::String* originDescription);
    static Config* parseMap(::java::util::Map* values);

    // Generated

private:
    ConfigFactory();
protected:
    ConfigFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigFactory_load_1;
};
