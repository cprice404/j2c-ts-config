// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableResources.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/URL.hpp>
#include <java/util/Enumeration.hpp>

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
com::typesafe::config::impl::Parseable_ParseableResources::Parseable_ParseableResources(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableResources::Parseable_ParseableResources(::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableResources(*static_cast< ::default_init_tag* >(0))
{
    ctor(resource,options);
}

void com::typesafe::config::impl::Parseable_ParseableResources::ctor(::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options)
{
    super::ctor();
    this->resource = resource;
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableResources::reader() /* throws(IOException) */
{
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"reader() should not be called on resources"_j);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::Parseable_ParseableResources::rawParseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */
{
    auto loader = npc(finalOptions)->getClassLoader();
    if(loader == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"null class loader; pass in a class loader or use Thread.currentThread().setContextClassLoader()"_j);

    auto e = npc(loader)->getResources(resource);
    if(!npc(e)->hasMoreElements()) {
        if(ConfigImpl::traceLoadsEnabled())
            trace(::java::lang::StringBuilder().append(u"Loading config from class loader "_j)->append(static_cast< ::java::lang::Object* >(loader))
                ->append(u" but there were no resources called "_j)
                ->append(resource)->toString());

        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"resource not found on classpath: "_j)->append(resource)->toString());
    }
    AbstractConfigObject* merged = SimpleConfigObject::empty(origin);
    while (npc(e)->hasMoreElements()) {
        auto url = java_cast< ::java::net::URL* >(npc(e)->nextElement());
        if(ConfigImpl::traceLoadsEnabled())
            trace(::java::lang::StringBuilder().append(u"Loading config from resource '"_j)->append(resource)
                ->append(u"' URL "_j)
                ->append(npc(url)->toExternalForm())
                ->append(u" from class loader "_j)
                ->append(static_cast< ::java::lang::Object* >(loader))->toString());

        auto element = newResourceURL(url, finalOptions, resource, this);
        auto v = npc(element)->parseValue();
        merged = npc(merged)->withFallback(v);
    }
    return merged;
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable_ParseableResources::guessSyntax()
{
    return syntaxFromExtension(resource);
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableResources::parent(::java::lang::String* resource)
{
    clinit();
    auto i = npc(resource)->lastIndexOf(static_cast< int32_t >(u'/'));
    if(i < 0) {
        return nullptr;
    } else {
        return npc(resource)->substring(0, i);
    }
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::Parseable_ParseableResources::relativeTo(::java::lang::String* sibling)
{
    if(npc(sibling)->startsWith(u"/"_j)) {
        return newResources(npc(sibling)->substring(1), npc(options())->setOriginDescription(nullptr));
    } else {
        auto parent = Parseable_ParseableResources::parent(resource);
        if(parent == nullptr)
            return newResources(sibling, npc(options())->setOriginDescription(nullptr));
        else
            return newResources(::java::lang::StringBuilder().append(parent)->append(u"/"_j)
                ->append(sibling)->toString(), npc(options())->setOriginDescription(nullptr));
    }
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableResources::createOrigin()
{
    return SimpleConfigOrigin::newResource(resource);
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableResources::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"("_j)
        ->append(resource)
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableResources::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableResources", 53);
    return c;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableResources::reader(::com::typesafe::config::ConfigParseOptions* options)
{
    return super::reader(options);
}

java::net::URL* com::typesafe::config::impl::Parseable_ParseableResources::relativeTo(::java::net::URL* url, ::java::lang::String* filename)
{
    return super::relativeTo(url, filename);
}

java::io::File* com::typesafe::config::impl::Parseable_ParseableResources::relativeTo(::java::io::File* file, ::java::lang::String* filename)
{
    return super::relativeTo(file, filename);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableResources::getClass0()
{
    return class_();
}

