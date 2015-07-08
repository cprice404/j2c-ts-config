// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncluder.java
#include <com/typesafe/config/impl/SimpleIncluder.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_IO.hpp>
#include <com/typesafe/config/ConfigFactory.hpp>
#include <com/typesafe/config/ConfigIncludeContext.hpp>
#include <com/typesafe/config/ConfigIncluder.hpp>
#include <com/typesafe/config/ConfigIncluderClasspath.hpp>
#include <com/typesafe/config/ConfigIncluderFile.hpp>
#include <com/typesafe/config/ConfigIncluderURL.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigParseable.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/FullIncluder.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/SimpleIncluder_NameSource.hpp>
#include <com/typesafe/config/impl/SimpleIncluder_Proxy.hpp>
#include <com/typesafe/config/impl/SimpleIncluder_RelativeNameSource.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>

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
com::typesafe::config::impl::SimpleIncluder::SimpleIncluder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleIncluder::SimpleIncluder(::com::typesafe::config::ConfigIncluder* fallback) 
    : SimpleIncluder(*static_cast< ::default_init_tag* >(0))
{
    ctor(fallback);
}

void com::typesafe::config::impl::SimpleIncluder::ctor(::com::typesafe::config::ConfigIncluder* fallback)
{
    super::ctor();
    this->fallback = fallback;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::impl::SimpleIncluder::clearForInclude(::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return npc(npc(npc(options)->setSyntax(nullptr))->setOriginDescription(nullptr))->setAllowMissing(true);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::include(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* name)
{
    auto obj = includeWithoutFallback(context, name);
    if(fallback != nullptr) {
        return npc(obj)->withFallback(npc(fallback)->include(context, name));
    } else {
        return obj;
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* name)
{
    clinit();
    ::java::net::URL* url;
    try {
        url = new ::java::net::URL(name);
    } catch (::java::net::MalformedURLException* e) {
        url = nullptr;
    }
    if(url != nullptr) {
        return includeURLWithoutFallback(context, url);
    } else {
        SimpleIncluder_NameSource* source = new SimpleIncluder_RelativeNameSource(context);
        return fromBasename(source, name, npc(context)->parseOptions());
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeURL(::com::typesafe::config::ConfigIncludeContext* context, ::java::net::URL* url)
{
    auto obj = includeURLWithoutFallback(context, url);
    if(fallback != nullptr && dynamic_cast< ::com::typesafe::config::ConfigIncluderURL* >(fallback) != nullptr) {
        return npc(obj)->withFallback(npc((java_cast< ::com::typesafe::config::ConfigIncluderURL* >(fallback)))->includeURL(context, url));
    } else {
        return obj;
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeURLWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::net::URL* url)
{
    clinit();
    return npc(::com::typesafe::config::ConfigFactory::parseURL(url, npc(context)->parseOptions()))->root();
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeFile(::com::typesafe::config::ConfigIncludeContext* context, ::java::io::File* file)
{
    auto obj = includeFileWithoutFallback(context, file);
    if(fallback != nullptr && dynamic_cast< ::com::typesafe::config::ConfigIncluderFile* >(fallback) != nullptr) {
        return npc(obj)->withFallback(npc((java_cast< ::com::typesafe::config::ConfigIncluderFile* >(fallback)))->includeFile(context, file));
    } else {
        return obj;
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeFileWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::io::File* file)
{
    clinit();
    return npc(::com::typesafe::config::ConfigFactory::parseFileAnySyntax(file, npc(context)->parseOptions()))->root();
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeResources(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* resource)
{
    auto obj = includeResourceWithoutFallback(context, resource);
    if(fallback != nullptr && dynamic_cast< ::com::typesafe::config::ConfigIncluderClasspath* >(fallback) != nullptr) {
        return npc(obj)->withFallback(npc((java_cast< ::com::typesafe::config::ConfigIncluderClasspath* >(fallback)))->includeResources(context, resource));
    } else {
        return obj;
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::includeResourceWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* resource)
{
    clinit();
    return npc(::com::typesafe::config::ConfigFactory::parseResourcesAnySyntax(resource, npc(context)->parseOptions()))->root();
}

com::typesafe::config::ConfigIncluder* com::typesafe::config::impl::SimpleIncluder::withFallback(::com::typesafe::config::ConfigIncluder* fallback)
{
    if(static_cast< ::java::lang::Object* >(this) == static_cast< ::java::lang::Object* >(fallback)) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"trying to create includer cycle"_j);
    } else if(this->fallback == fallback) {
        return this;
    } else if(this->fallback != nullptr) {
        return new SimpleIncluder(npc(this->fallback)->withFallback(fallback));
    } else {
        return new SimpleIncluder(fallback);
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder::fromBasename(SimpleIncluder_NameSource* source, ::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    ::com::typesafe::config::ConfigObject* obj;
    if(npc(name)->endsWith(u".conf"_j) || npc(name)->endsWith(u".json"_j) || npc(name)->endsWith(u".properties"_j)) {
        auto p = npc(source)->nameToParseable(name, options);
        obj = npc(p)->parse(npc(npc(p)->options())->setAllowMissing(npc(options)->getAllowMissing()));
    } else {
        auto confHandle = npc(source)->nameToParseable(::java::lang::StringBuilder().append(name)->append(u".conf"_j)->toString(), options);
        auto jsonHandle = npc(source)->nameToParseable(::java::lang::StringBuilder().append(name)->append(u".json"_j)->toString(), options);
        auto propsHandle = npc(source)->nameToParseable(::java::lang::StringBuilder().append(name)->append(u".properties"_j)->toString(), options);
        auto gotSomething = false;
        ::java::util::List* fails = new ::java::util::ArrayList();
        auto syntax = npc(options)->getSyntax();
        obj = SimpleConfigObject::empty(SimpleConfigOrigin::newSimple(name));
        if(syntax == nullptr || syntax == ::com::typesafe::config::ConfigSyntax::CONF) {
            try {
                obj = npc(confHandle)->parse(npc(npc(npc(confHandle)->options())->setAllowMissing(false))->setSyntax(::com::typesafe::config::ConfigSyntax::CONF));
                gotSomething = true;
            } catch (::com::typesafe::config::ConfigException_IO* e) {
                npc(fails)->add(e);
            }
        }
        if(syntax == nullptr || syntax == ::com::typesafe::config::ConfigSyntax::JSON) {
            try {
                auto parsed = npc(jsonHandle)->parse(npc(npc(npc(jsonHandle)->options())->setAllowMissing(false))->setSyntax(::com::typesafe::config::ConfigSyntax::JSON));
                obj = npc(obj)->withFallback(parsed);
                gotSomething = true;
            } catch (::com::typesafe::config::ConfigException_IO* e) {
                npc(fails)->add(e);
            }
        }
        if(syntax == nullptr || syntax == ::com::typesafe::config::ConfigSyntax::PROPERTIES) {
            try {
                auto parsed = npc(propsHandle)->parse(npc(npc(npc(propsHandle)->options())->setAllowMissing(false))->setSyntax(::com::typesafe::config::ConfigSyntax::PROPERTIES));
                obj = npc(obj)->withFallback(parsed);
                gotSomething = true;
            } catch (::com::typesafe::config::ConfigException_IO* e) {
                npc(fails)->add(e);
            }
        }
        if(!npc(options)->getAllowMissing() && !gotSomething) {
            if(ConfigImpl::traceLoadsEnabled()) {
                ConfigImpl::trace(::java::lang::StringBuilder().append(u"Did not find '"_j)->append(name)
                    ->append(u"' with any extension (.conf, .json, .properties); "_j)
                    ->append(u"exceptions should have been logged above."_j)->toString());
            }
            if(npc(fails)->isEmpty()) {
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"should not be reached: nothing found but no exceptions thrown"_j);
            } else {
                auto sb = new ::java::lang::StringBuilder();
                for (auto _i = npc(fails)->iterator(); _i->hasNext(); ) {
                    ::java::lang::Throwable* t = java_cast< ::java::lang::Throwable* >(_i->next());
                    {
                        npc(sb)->append(npc(t)->getMessage());
                        npc(sb)->append(u", "_j);
                    }
                }
                npc(sb)->setLength(npc(sb)->length() - int32_t(2));
                throw new ::com::typesafe::config::ConfigException_IO(SimpleConfigOrigin::newSimple(name), npc(sb)->toString(), java_cast< ::com::typesafe::config::ConfigException_IO* >(npc(fails)->get(0)));
            }
        } else if(!gotSomething) {
            if(ConfigImpl::traceLoadsEnabled()) {
                ConfigImpl::trace(::java::lang::StringBuilder().append(u"Did not find '"_j)->append(name)
                    ->append(u"' with any extension (.conf, .json, .properties); but '"_j)
                    ->append(name)
                    ->append(u"' is allowed to be missing. Exceptions from load attempts should have been logged above."_j)->toString());
            }
        }
    }
    return obj;
}

com::typesafe::config::impl::FullIncluder* com::typesafe::config::impl::SimpleIncluder::makeFull(::com::typesafe::config::ConfigIncluder* includer)
{
    clinit();
    if(dynamic_cast< FullIncluder* >(includer) != nullptr)
        return java_cast< FullIncluder* >(includer);
    else
        return new SimpleIncluder_Proxy(includer);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleIncluder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleIncluder", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleIncluder::getClass0()
{
    return class_();
}

