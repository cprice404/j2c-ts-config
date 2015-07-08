// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigException.hpp>
#include <com/typesafe/config/ConfigIncluder.hpp>
#include <com/typesafe/config/ConfigMemorySize.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigBoolean.hpp>
#include <com/typesafe/config/impl/ConfigDouble.hpp>
#include <com/typesafe/config/impl/ConfigImpl_defaultReference_1.hpp>
#include <com/typesafe/config/impl/ConfigImpl_ClasspathNameSource.hpp>
#include <com/typesafe/config/impl/ConfigImpl_ClasspathNameSourceWithClass.hpp>
#include <com/typesafe/config/impl/ConfigImpl_DebugHolder.hpp>
#include <com/typesafe/config/impl/ConfigImpl_DefaultIncluderHolder.hpp>
#include <com/typesafe/config/impl/ConfigImpl_EnvVariablesHolder.hpp>
#include <com/typesafe/config/impl/ConfigImpl_FileNameSource.hpp>
#include <com/typesafe/config/impl/ConfigImpl_LoaderCache.hpp>
#include <com/typesafe/config/impl/ConfigImpl_LoaderCacheHolder.hpp>
#include <com/typesafe/config/impl/ConfigImpl_SystemPropertiesHolder.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ConfigInt.hpp>
#include <com/typesafe/config/impl/ConfigLong.hpp>
#include <com/typesafe/config/impl/ConfigNull.hpp>
#include <com/typesafe/config/impl/ConfigNumber.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <com/typesafe/config/impl/FromMapMode.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PropertiesParser.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/SimpleIncluder.hpp>
#include <java/io/File.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/ExceptionInInitializerError.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/time/Duration.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>
#include <java/util/Set.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
extern void lock(::java::lang::Object *);
extern void unlock(::java::lang::Object *);

namespace
{
struct synchronized
{
    synchronized(::java::lang::Object *o) : o(o) { ::lock(o); }
    ~synchronized() { ::unlock(o); }
private:
    synchronized(const synchronized&); synchronized& operator=(const synchronized&);
    ::java::lang::Object *o;
};
}
com::typesafe::config::impl::ConfigImpl::ConfigImpl(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl::ConfigImpl()
    : ConfigImpl(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl::computeCachedConfig(::java::lang::ClassLoader* loader, ::java::lang::String* key, ::java::util::concurrent::Callable* updater)
{
    clinit();
    ConfigImpl_LoaderCache* cache;
    try {
        cache = ConfigImpl_LoaderCacheHolder::cache();
    } catch (::java::lang::ExceptionInInitializerError* e) {
        throw ConfigImplUtil::extractInitializerError(e);
    }
    return npc(cache)->getOrElseUpdate(loader, key, updater);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::ConfigImpl::parseResourcesAnySyntax(::java::lang::Class* klass, ::java::lang::String* resourceBasename, ::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    clinit();
    SimpleIncluder_NameSource* source = new ConfigImpl_ClasspathNameSourceWithClass(klass);
    return SimpleIncluder::fromBasename(source, resourceBasename, baseOptions);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::ConfigImpl::parseResourcesAnySyntax(::java::lang::String* resourceBasename, ::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    clinit();
    SimpleIncluder_NameSource* source = new ConfigImpl_ClasspathNameSource();
    return SimpleIncluder::fromBasename(source, resourceBasename, baseOptions);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::ConfigImpl::parseFileAnySyntax(::java::io::File* basename, ::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    clinit();
    SimpleIncluder_NameSource* source = new ConfigImpl_FileNameSource();
    return SimpleIncluder::fromBasename(source, npc(basename)->getPath(), baseOptions);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::emptyObject(::java::lang::String* originDescription)
{
    clinit();
    ::com::typesafe::config::ConfigOrigin* origin = originDescription != nullptr ? SimpleConfigOrigin::newSimple(originDescription) : static_cast< SimpleConfigOrigin* >(nullptr);
    return emptyObject(origin);
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl::emptyConfig(::java::lang::String* originDescription)
{
    clinit();
    return java_cast< SimpleConfig* >(npc(emptyObject(originDescription))->toConfig());
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::empty(::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    return emptyObject(origin);
}

com::typesafe::config::ConfigOrigin*& com::typesafe::config::impl::ConfigImpl::defaultValueOrigin()
{
    clinit();
    return defaultValueOrigin_;
}
com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::ConfigImpl::defaultValueOrigin_;

com::typesafe::config::impl::ConfigBoolean*& com::typesafe::config::impl::ConfigImpl::defaultTrueValue()
{
    clinit();
    return defaultTrueValue_;
}
com::typesafe::config::impl::ConfigBoolean* com::typesafe::config::impl::ConfigImpl::defaultTrueValue_;

com::typesafe::config::impl::ConfigBoolean*& com::typesafe::config::impl::ConfigImpl::defaultFalseValue()
{
    clinit();
    return defaultFalseValue_;
}
com::typesafe::config::impl::ConfigBoolean* com::typesafe::config::impl::ConfigImpl::defaultFalseValue_;

com::typesafe::config::impl::ConfigNull*& com::typesafe::config::impl::ConfigImpl::defaultNullValue()
{
    clinit();
    return defaultNullValue_;
}
com::typesafe::config::impl::ConfigNull* com::typesafe::config::impl::ConfigImpl::defaultNullValue_;

com::typesafe::config::impl::SimpleConfigList*& com::typesafe::config::impl::ConfigImpl::defaultEmptyList()
{
    clinit();
    return defaultEmptyList_;
}
com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::ConfigImpl::defaultEmptyList_;

com::typesafe::config::impl::SimpleConfigObject*& com::typesafe::config::impl::ConfigImpl::defaultEmptyObject()
{
    clinit();
    return defaultEmptyObject_;
}
com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::ConfigImpl::defaultEmptyObject_;

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::ConfigImpl::emptyList(::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    if(origin == nullptr || origin == defaultValueOrigin_)
        return defaultEmptyList_;
    else
        return new SimpleConfigList(origin, ::java::util::Collections::/* <AbstractConfigValue> */emptyList());
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::emptyObject(::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    if(origin == defaultValueOrigin_)
        return defaultEmptyObject_;
    else
        return SimpleConfigObject::empty(origin);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::ConfigImpl::valueOrigin(::java::lang::String* originDescription)
{
    clinit();
    if(originDescription == nullptr)
        return defaultValueOrigin_;
    else
        return SimpleConfigOrigin::newSimple(originDescription);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::ConfigImpl::fromAnyRef(::java::lang::Object* object, ::java::lang::String* originDescription)
{
    clinit();
    auto origin = valueOrigin(originDescription);
    return fromAnyRef(object, origin, FromMapMode::KEYS_ARE_KEYS);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::ConfigImpl::fromPathMap(::java::util::Map* pathMap, ::java::lang::String* originDescription)
{
    clinit();
    auto origin = valueOrigin(originDescription);
    return java_cast< ::com::typesafe::config::ConfigObject* >(fromAnyRef(pathMap, origin, FromMapMode::KEYS_ARE_PATHS));
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigImpl::fromAnyRef(::java::lang::Object* object, ::com::typesafe::config::ConfigOrigin* origin, FromMapMode* mapMode)
{
    clinit();
    if(origin == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"origin not supposed to be null"_j);

    if(object == nullptr) {
        if(origin != defaultValueOrigin_)
            return new ConfigNull(origin);
        else
            return defaultNullValue_;
    } else if(dynamic_cast< AbstractConfigValue* >(object) != nullptr) {
        return java_cast< AbstractConfigValue* >(object);
    } else if(dynamic_cast< ::java::lang::Boolean* >(object) != nullptr) {
        if(origin != defaultValueOrigin_) {
            return new ConfigBoolean(origin, (npc(java_cast< ::java::lang::Boolean* >(object)))->booleanValue());
        } else if((npc(java_cast< ::java::lang::Boolean* >(object)))->booleanValue()) {
            return defaultTrueValue_;
        } else {
            return defaultFalseValue_;
        }
    } else if(dynamic_cast< ::java::lang::String* >(object) != nullptr) {
        return new ConfigString_Quoted(origin, java_cast< ::java::lang::String* >(object));
    } else if(dynamic_cast< ::java::lang::Number* >(object) != nullptr) {
        if(dynamic_cast< ::java::lang::Double* >(object) != nullptr) {
            return new ConfigDouble(origin, (npc(java_cast< ::java::lang::Double* >(object)))->doubleValue(), nullptr);
        } else if(dynamic_cast< ::java::lang::Integer* >(object) != nullptr) {
            return new ConfigInt(origin, (npc(java_cast< ::java::lang::Integer* >(object)))->intValue(), nullptr);
        } else if(dynamic_cast< ::java::lang::Long* >(object) != nullptr) {
            return new ConfigLong(origin, (npc(java_cast< ::java::lang::Long* >(object)))->longValue(), nullptr);
        } else {
            return ConfigNumber::newNumber(origin, npc((java_cast< ::java::lang::Number* >(object)))->doubleValue(), static_cast< ::java::lang::String* >(nullptr));
        }
    } else if(dynamic_cast< ::java::time::Duration* >(object) != nullptr) {
        return new ConfigLong(origin, npc((java_cast< ::java::time::Duration* >(object)))->toMillis(), nullptr);
    } else if(dynamic_cast< ::java::util::Map* >(object) != nullptr) {
        if(npc((java_cast< ::java::util::Map* >(object)))->isEmpty())
            return emptyObject(origin);

        if(mapMode == FromMapMode::KEYS_ARE_KEYS) {
            ::java::util::Map* values = new ::java::util::HashMap();
            for (auto _i = npc(npc((java_cast< ::java::util::Map* >(object)))->entrySet())->iterator(); _i->hasNext(); ) {
                ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
                {
                    auto key = java_cast< ::java::lang::Object* >(npc(entry)->getKey());
                    if(!(dynamic_cast< ::java::lang::String* >(key) != nullptr))
                        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"bug in method caller: not valid to create ConfigObject from map with non-String key: "_j)->append(static_cast< ::java::lang::Object* >(key))->toString());

                    auto value = fromAnyRef(java_cast< ::java::lang::Object* >(npc(entry)->getValue()), origin, mapMode);
                    npc(values)->put(java_cast< ::java::lang::String* >(key), value);
                }
            }
            return new SimpleConfigObject(origin, values);
        } else {
            return PropertiesParser::fromPathMap(origin, java_cast< ::java::util::Map* >(object));
        }
    } else if(dynamic_cast< ::java::lang::Iterable* >(object) != nullptr) {
        auto i = npc((java_cast< ::java::lang::Iterable* >(object)))->iterator();
        if(!npc(i)->hasNext())
            return emptyList(origin);

        ::java::util::List* values = new ::java::util::ArrayList();
        while (npc(i)->hasNext()) {
            auto v = fromAnyRef(java_cast< ::java::lang::Object* >(npc(i)->next()), origin, mapMode);
            npc(values)->add(v);
        }
        return new SimpleConfigList(origin, values);
    } else if(dynamic_cast< ::com::typesafe::config::ConfigMemorySize* >(object) != nullptr) {
        return new ConfigLong(origin, npc((java_cast< ::com::typesafe::config::ConfigMemorySize* >(object)))->toBytes(), nullptr);
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"bug in method caller: not valid to create ConfigValue from: "_j)->append(static_cast< ::java::lang::Object* >(object))->toString());
    }
}

com::typesafe::config::ConfigIncluder* com::typesafe::config::impl::ConfigImpl::defaultIncluder()
{
    clinit();
    try {
        return ConfigImpl_DefaultIncluderHolder::defaultIncluder();
    } catch (::java::lang::ExceptionInInitializerError* e) {
        throw ConfigImplUtil::extractInitializerError(e);
    }
}

java::util::Properties* com::typesafe::config::impl::ConfigImpl::getSystemProperties()
{
    clinit();
    auto const systemProperties = ::java::lang::System::getProperties();
    auto const systemPropertiesCopy = new ::java::util::Properties();
    {
        synchronized synchronized_0(systemProperties);
        {
            npc(systemPropertiesCopy)->putAll(systemProperties);
        }
    }
    return systemPropertiesCopy;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::loadSystemProperties()
{
    clinit();
    return java_cast< AbstractConfigObject* >(npc(Parseable::newProperties(getSystemProperties(), npc(::com::typesafe::config::ConfigParseOptions::defaults())->setOriginDescription(u"system properties"_j)))->parse());
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::systemPropertiesAsConfigObject()
{
    clinit();
    try {
        return ConfigImpl_SystemPropertiesHolder::systemProperties().load();
    } catch (::java::lang::ExceptionInInitializerError* e) {
        throw ConfigImplUtil::extractInitializerError(e);
    }
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl::systemPropertiesAsConfig()
{
    clinit();
    return java_cast< SimpleConfig* >(npc(systemPropertiesAsConfigObject())->toConfig());
}

void com::typesafe::config::impl::ConfigImpl::reloadSystemPropertiesConfig()
{
    clinit();
    ConfigImpl_SystemPropertiesHolder::systemProperties() = loadSystemProperties();
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::loadEnvVariables()
{
    clinit();
    auto env = ::java::lang::System::getenv();
    ::java::util::Map* m = new ::java::util::HashMap();
    for (auto _i = npc(npc(env)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto key = java_cast< ::java::lang::String* >(npc(entry)->getKey());
            npc(m)->put(key, new ConfigString_Quoted(SimpleConfigOrigin::newSimple(::java::lang::StringBuilder().append(u"env var "_j)->append(key)->toString()), java_cast< ::java::lang::String* >(npc(entry)->getValue())));
        }
    }
    return new SimpleConfigObject(SimpleConfigOrigin::newSimple(u"env variables"_j), m, ResolveStatus::RESOLVED, false);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigImpl::envVariablesAsConfigObject()
{
    clinit();
    try {
        return ConfigImpl_EnvVariablesHolder::envVariables();
    } catch (::java::lang::ExceptionInInitializerError* e) {
        throw ConfigImplUtil::extractInitializerError(e);
    }
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl::envVariablesAsConfig()
{
    clinit();
    return java_cast< SimpleConfig* >(npc(envVariablesAsConfigObject())->toConfig());
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl::defaultReference(::java::lang::ClassLoader* loader)
{
    clinit();
    return computeCachedConfig(loader, u"defaultReference"_j, new ConfigImpl_defaultReference_1(loader));
}

bool com::typesafe::config::impl::ConfigImpl::traceLoadsEnabled()
{
    clinit();
    try {
        return ConfigImpl_DebugHolder::traceLoadsEnabled();
    } catch (::java::lang::ExceptionInInitializerError* e) {
        throw ConfigImplUtil::extractInitializerError(e);
    }
}

bool com::typesafe::config::impl::ConfigImpl::traceSubstitutionsEnabled()
{
    clinit();
    try {
        return ConfigImpl_DebugHolder::traceSubstitutionsEnabled();
    } catch (::java::lang::ExceptionInInitializerError* e) {
        throw ConfigImplUtil::extractInitializerError(e);
    }
}

void com::typesafe::config::impl::ConfigImpl::trace(::java::lang::String* message)
{
    clinit();
    npc(::java::lang::System::err())->println(message);
}

void com::typesafe::config::impl::ConfigImpl::trace(int32_t indentLevel, ::java::lang::String* message)
{
    clinit();
    while (indentLevel > 0) {
        npc(::java::lang::System::err())->print(u"  "_j);
        indentLevel -= 1;
    }
    npc(::java::lang::System::err())->println(message);
}

com::typesafe::config::ConfigException_NotResolved* com::typesafe::config::impl::ConfigImpl::improveNotResolved(Path* what, ::com::typesafe::config::ConfigException_NotResolved* original)
{
    clinit();
    auto newMessage = ::java::lang::StringBuilder().append(npc(what)->render())->append(u" has not been resolved, you need to call Config#resolve(),"_j)
        ->append(u" see API docs for Config#resolve()"_j)->toString();
    if(npc(newMessage)->equals(npc(original)->getMessage()))
        return original;
    else
        return new ::com::typesafe::config::ConfigException_NotResolved(newMessage, original);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::ConfigImpl::newSimpleOrigin(::java::lang::String* description)
{
    clinit();
    if(description == nullptr) {
        return defaultValueOrigin_;
    } else {
        return SimpleConfigOrigin::newSimple(description);
    }
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::ConfigImpl::newFileOrigin(::java::lang::String* filename)
{
    clinit();
    return SimpleConfigOrigin::newFile(filename);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::ConfigImpl::newURLOrigin(::java::net::URL* url)
{
    clinit();
    return SimpleConfigOrigin::newURL(url);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl", 35);
    return c;
}

void com::typesafe::config::impl::ConfigImpl::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        defaultValueOrigin_ = SimpleConfigOrigin::newSimple(u"hardcoded value"_j);
        defaultTrueValue_ = new ConfigBoolean(defaultValueOrigin_, true);
        defaultFalseValue_ = new ConfigBoolean(defaultValueOrigin_, false);
        defaultNullValue_ = new ConfigNull(defaultValueOrigin_);
        defaultEmptyList_ = new SimpleConfigList(defaultValueOrigin_, ::java::util::Collections::/* <AbstractConfigValue> */emptyList());
        defaultEmptyObject_ = SimpleConfigObject::empty(defaultValueOrigin_);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl::getClass0()
{
    return class_();
}

