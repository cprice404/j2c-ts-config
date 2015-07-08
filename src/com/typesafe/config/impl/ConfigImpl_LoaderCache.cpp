// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_LoaderCache.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_Generic.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/ref/WeakReference.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/concurrent/Callable.hpp>

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
com::typesafe::config::impl::ConfigImpl_LoaderCache::ConfigImpl_LoaderCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_LoaderCache::ConfigImpl_LoaderCache() 
    : ConfigImpl_LoaderCache(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::impl::ConfigImpl_LoaderCache::ctor()
{
    super::ctor();
    this->currentSystemProperties = nullptr;
    this->currentLoader = new ::java::lang::ref::WeakReference(nullptr);
    this->cache = new ::java::util::HashMap();
}

com::typesafe::config::Config* com::typesafe::config::impl::ConfigImpl_LoaderCache::getOrElseUpdate(::java::lang::ClassLoader* loader, ::java::lang::String* key, ::java::util::concurrent::Callable* updater)
{
    if(loader != java_cast< ::java::lang::ClassLoader* >(npc(currentLoader)->get())) {
        npc(cache)->clear();
        currentLoader = new ::java::lang::ref::WeakReference(loader);
    }
    auto systemProperties = ConfigImpl::systemPropertiesAsConfig();
    if(systemProperties != currentSystemProperties) {
        npc(cache)->clear();
        currentSystemProperties = systemProperties;
    }
    auto config = java_cast< ::com::typesafe::config::Config* >(npc(cache)->get(key));
    if(config == nullptr) {
        try {
            config = java_cast< ::com::typesafe::config::Config* >(npc(updater)->call());
        } catch (::java::lang::RuntimeException* e) {
            throw e;
        } catch (::java::lang::Exception* e) {
            throw new ::com::typesafe::config::ConfigException_Generic(npc(e)->getMessage(), e);
        }
        if(config == nullptr)
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"null config from cache updater"_j);

        npc(cache)->put(key, config);
    }
    return config;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_LoaderCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.LoaderCache", 47);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_LoaderCache::getClass0()
{
    return class_();
}

