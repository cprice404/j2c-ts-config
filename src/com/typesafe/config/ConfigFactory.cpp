// Generated from /config/src/main/java/com/typesafe/config/ConfigFactory.java
#include <com/typesafe/config/ConfigFactory.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_Generic.hpp>
#include <com/typesafe/config/ConfigFactory_load_1.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <java/io/File.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Thread.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <java/util/Map.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::ConfigFactory::ConfigFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigFactory::ConfigFactory() 
    : ConfigFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::ConfigFactory::ctor()
{
    super::ctor();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::String* resourceBasename)
{
    clinit();
    return load(resourceBasename, ConfigParseOptions::defaults(), ConfigResolveOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename)
{
    clinit();
    return load(resourceBasename, npc(ConfigParseOptions::defaults())->setClassLoader(loader), ConfigResolveOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::String* resourceBasename, ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions)
{
    clinit();
    auto withLoader = ensureClassLoader(parseOptions, u"load"_j);
    auto appConfig = ConfigFactory::parseResourcesAnySyntax(resourceBasename, withLoader);
    return load(npc(withLoader)->getClassLoader(), appConfig, resolveOptions);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename, ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions)
{
    clinit();
    return load(resourceBasename, npc(parseOptions)->setClassLoader(loader), resolveOptions);
}

java::lang::ClassLoader* com::typesafe::config::ConfigFactory::checkedContextClassLoader(::java::lang::String* methodName)
{
    clinit();
    auto loader = npc(::java::lang::Thread::currentThread())->getContextClassLoader();
    if(loader == nullptr)
        throw new ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Context class loader is not set for the current thread; "_j)->append(u"if Thread.currentThread().getContextClassLoader() returns null, you must pass a ClassLoader "_j)
            ->append(u"explicitly to ConfigFactory."_j)
            ->append(methodName)->toString());
    else
        return loader;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigFactory::ensureClassLoader(ConfigParseOptions* options, ::java::lang::String* methodName)
{
    clinit();
    if(npc(options)->getClassLoader() == nullptr)
        return npc(options)->setClassLoader(checkedContextClassLoader(methodName));
    else
        return options;
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(Config* config)
{
    clinit();
    return load(checkedContextClassLoader(u"load"_j), config);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, Config* config)
{
    clinit();
    return load(loader, config, ConfigResolveOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(Config* config, ConfigResolveOptions* resolveOptions)
{
    clinit();
    return load(checkedContextClassLoader(u"load"_j), config, resolveOptions);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, Config* config, ConfigResolveOptions* resolveOptions)
{
    clinit();
    return npc(npc(npc(defaultOverrides(loader))->withFallback(config))->withFallback(defaultReference(loader)))->resolve(resolveOptions);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseApplicationConfig(ConfigParseOptions* parseOptions)
{
    clinit();
    auto loader = npc(parseOptions)->getClassLoader();
    if(loader == nullptr)
        throw new ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"ClassLoader should have been set here; bug in ConfigFactory. "_j)->append(u"(You can probably work around this bug by passing in a class loader or calling currentThread().setContextClassLoader() though.)"_j)->toString());

    auto specified = int32_t(0);
    auto resource = ::java::lang::System::getProperty(u"config.resource"_j);
    if(resource != nullptr)
        specified += 1;

    auto file = ::java::lang::System::getProperty(u"config.file"_j);
    if(file != nullptr)
        specified += 1;

    auto url = ::java::lang::System::getProperty(u"config.url"_j);
    if(url != nullptr)
        specified += 1;

    if(specified == 0) {
        return ConfigFactory::parseResourcesAnySyntax(u"application"_j, parseOptions);
    } else if(specified > 1) {
        throw new ConfigException_Generic(::java::lang::StringBuilder().append(u"You set more than one of config.file='"_j)->append(file)
            ->append(u"', config.url='"_j)
            ->append(url)
            ->append(u"', config.resource='"_j)
            ->append(resource)
            ->append(u"'; don't know which one to use!"_j)->toString());
    } else {
        auto overrideOptions = npc(parseOptions)->setAllowMissing(false);
        if(resource != nullptr) {
            if(npc(resource)->startsWith(u"/"_j))
                resource = npc(resource)->substring(1);

            return parseResources(loader, resource, overrideOptions);
        } else if(file != nullptr) {
            return parseFile(new ::java::io::File(file), overrideOptions);
        } else {
            try {
                return parseURL(new ::java::net::URL(url), overrideOptions);
            } catch (::java::net::MalformedURLException* e) {
                throw new ConfigException_Generic(::java::lang::StringBuilder().append(u"Bad URL in config.url system property: '"_j)->append(url)
                    ->append(u"': "_j)
                    ->append(npc(e)->getMessage())->toString(), e);
            }
        }
    }
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load()
{
    clinit();
    auto loader = checkedContextClassLoader(u"load"_j);
    return load(loader);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(ConfigParseOptions* parseOptions)
{
    clinit();
    return load(parseOptions, ConfigResolveOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader)
{
    clinit();
    auto const withLoader = npc(ConfigParseOptions::defaults())->setClassLoader(loader);
    return ::com::typesafe::config::impl::ConfigImpl::computeCachedConfig(loader, u"load"_j, new ConfigFactory_load_1(loader, withLoader));
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, ConfigParseOptions* parseOptions)
{
    clinit();
    return load(npc(parseOptions)->setClassLoader(loader));
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, ConfigResolveOptions* resolveOptions)
{
    clinit();
    return load(loader, ConfigParseOptions::defaults(), resolveOptions);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(::java::lang::ClassLoader* loader, ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions)
{
    clinit();
    auto const withLoader = ensureClassLoader(parseOptions, u"load"_j);
    return load(loader, defaultApplication(withLoader), resolveOptions);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::load(ConfigParseOptions* parseOptions, ConfigResolveOptions* resolveOptions)
{
    clinit();
    auto const withLoader = ensureClassLoader(parseOptions, u"load"_j);
    return load(defaultApplication(withLoader), resolveOptions);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultReference()
{
    clinit();
    return defaultReference(checkedContextClassLoader(u"defaultReference"_j));
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultReference(::java::lang::ClassLoader* loader)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::defaultReference(loader);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultOverrides()
{
    clinit();
    return systemProperties();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultOverrides(::java::lang::ClassLoader* loader)
{
    clinit();
    return systemProperties();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultApplication()
{
    clinit();
    return defaultApplication(ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultApplication(::java::lang::ClassLoader* loader)
{
    clinit();
    return defaultApplication(npc(ConfigParseOptions::defaults())->setClassLoader(loader));
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::defaultApplication(ConfigParseOptions* options)
{
    clinit();
    return parseApplicationConfig(ensureClassLoader(options, u"defaultApplication"_j));
}

void com::typesafe::config::ConfigFactory::invalidateCaches()
{
    clinit();
    ::com::typesafe::config::impl::ConfigImpl::reloadSystemPropertiesConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::empty()
{
    clinit();
    return empty(nullptr);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::empty(::java::lang::String* originDescription)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::emptyConfig(originDescription);
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::systemProperties()
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::systemPropertiesAsConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::systemEnvironment()
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::envVariablesAsConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseProperties(::java::util::Properties* properties, ConfigParseOptions* options)
{
    clinit();
    return npc(npc(::com::typesafe::config::impl::Parseable::newProperties(properties, options))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseProperties(::java::util::Properties* properties)
{
    clinit();
    return parseProperties(properties, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseReader(::java::io::Reader* reader, ConfigParseOptions* options)
{
    clinit();
    return npc(npc(::com::typesafe::config::impl::Parseable::newReader(reader, options))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseReader(::java::io::Reader* reader)
{
    clinit();
    return parseReader(reader, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseURL(::java::net::URL* url, ConfigParseOptions* options)
{
    clinit();
    return npc(npc(::com::typesafe::config::impl::Parseable::newURL(url, options))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseURL(::java::net::URL* url)
{
    clinit();
    return parseURL(url, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseFile(::java::io::File* file, ConfigParseOptions* options)
{
    clinit();
    return npc(npc(::com::typesafe::config::impl::Parseable::newFile(file, options))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseFile(::java::io::File* file)
{
    clinit();
    return parseFile(file, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseFileAnySyntax(::java::io::File* fileBasename, ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::ConfigImpl::parseFileAnySyntax(fileBasename, options))->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseFileAnySyntax(::java::io::File* fileBasename)
{
    clinit();
    return parseFileAnySyntax(fileBasename, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResources(::java::lang::Class* klass, ::java::lang::String* resource, ConfigParseOptions* options)
{
    clinit();
    return npc(npc(::com::typesafe::config::impl::Parseable::newResources(klass, resource, options))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResources(::java::lang::Class* klass, ::java::lang::String* resource)
{
    clinit();
    return parseResources(static_cast< ::java::lang::Class* >(klass), resource, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(::java::lang::Class* klass, ::java::lang::String* resourceBasename, ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::ConfigImpl::parseResourcesAnySyntax(klass, resourceBasename, options))->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(::java::lang::Class* klass, ::java::lang::String* resourceBasename)
{
    clinit();
    return parseResourcesAnySyntax(static_cast< ::java::lang::Class* >(klass), resourceBasename, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResources(::java::lang::ClassLoader* loader, ::java::lang::String* resource, ConfigParseOptions* options)
{
    clinit();
    return parseResources(resource, npc(options)->setClassLoader(loader));
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResources(::java::lang::ClassLoader* loader, ::java::lang::String* resource)
{
    clinit();
    return parseResources(loader, resource, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename, ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::ConfigImpl::parseResourcesAnySyntax(resourceBasename, npc(options)->setClassLoader(loader)))->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(::java::lang::ClassLoader* loader, ::java::lang::String* resourceBasename)
{
    clinit();
    return parseResourcesAnySyntax(loader, resourceBasename, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResources(::java::lang::String* resource, ConfigParseOptions* options)
{
    clinit();
    auto withLoader = ensureClassLoader(options, u"parseResources"_j);
    return npc(npc(::com::typesafe::config::impl::Parseable::newResources(resource, withLoader))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResources(::java::lang::String* resource)
{
    clinit();
    return parseResources(resource, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(::java::lang::String* resourceBasename, ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::ConfigImpl::parseResourcesAnySyntax(resourceBasename, options))->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(::java::lang::String* resourceBasename)
{
    clinit();
    return parseResourcesAnySyntax(resourceBasename, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseString(::java::lang::String* s, ConfigParseOptions* options)
{
    clinit();
    return npc(npc(::com::typesafe::config::impl::Parseable::newString(s, options))->parse())->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseString(::java::lang::String* s)
{
    clinit();
    return parseString(s, ConfigParseOptions::defaults());
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseMap(::java::util::Map* values, ::java::lang::String* originDescription)
{
    clinit();
    return npc(::com::typesafe::config::impl::ConfigImpl::fromPathMap(values, originDescription))->toConfig();
}

com::typesafe::config::Config* com::typesafe::config::ConfigFactory::parseMap(::java::util::Map* values)
{
    clinit();
    return parseMap(values, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigFactory", 33);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigFactory::getClass0()
{
    return class_();
}

