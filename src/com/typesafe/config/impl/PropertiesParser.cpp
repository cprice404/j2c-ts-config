// Generated from /config/src/main/java/com/typesafe/config/impl/PropertiesParser.java
#include <com/typesafe/config/impl/PropertiesParser.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <com/typesafe/config/impl/FromMapMode.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PropertiesParser_fromPathMap_1.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
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
com::typesafe::config::impl::PropertiesParser::PropertiesParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::PropertiesParser::PropertiesParser()
    : PropertiesParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::PropertiesParser::parse(::java::io::Reader* reader, ::com::typesafe::config::ConfigOrigin* origin) /* throws(IOException) */
{
    clinit();
    auto props = new ::java::util::Properties();
    npc(props)->load(reader);
    return fromProperties(origin, props);
}

java::lang::String* com::typesafe::config::impl::PropertiesParser::lastElement(::java::lang::String* path)
{
    clinit();
    auto i = npc(path)->lastIndexOf(static_cast< int32_t >(u'.'));
    if(i < 0)
        return path;
    else
        return npc(path)->substring(i + int32_t(1));
}

java::lang::String* com::typesafe::config::impl::PropertiesParser::exceptLastElement(::java::lang::String* path)
{
    clinit();
    auto i = npc(path)->lastIndexOf(static_cast< int32_t >(u'.'));
    if(i < 0)
        return nullptr;
    else
        return npc(path)->substring(0, i);
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PropertiesParser::pathFromPropertyKey(::java::lang::String* key)
{
    clinit();
    auto last = lastElement(key);
    auto exceptLast = exceptLastElement(key);
    auto path = new Path(last, nullptr);
    while (exceptLast != nullptr) {
        last = lastElement(exceptLast);
        exceptLast = exceptLastElement(exceptLast);
        path = new Path(last, path);
    }
    return path;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::PropertiesParser::fromProperties(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Properties* props)
{
    clinit();
    ::java::util::Map* pathMap = new ::java::util::HashMap();
    for (auto _i = npc(npc(props)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto key = java_cast< ::java::lang::Object* >(npc(entry)->getKey());
            if(dynamic_cast< ::java::lang::String* >(key) != nullptr) {
                auto path = pathFromPropertyKey(java_cast< ::java::lang::String* >(key));
                npc(pathMap)->put(path, java_cast< ::java::lang::Object* >(npc(entry)->getValue()));
            }
        }
    }
    return fromPathMap(origin, pathMap, true);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::PropertiesParser::fromPathMap(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* pathExpressionMap)
{
    clinit();
    ::java::util::Map* pathMap = new ::java::util::HashMap();
    for (auto _i = npc(npc(pathExpressionMap)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto keyObj = java_cast< ::java::lang::Object* >(npc(entry)->getKey());
            if(!(dynamic_cast< ::java::lang::String* >(keyObj) != nullptr)) {
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Map has a non-string as a key, expecting a path expression as a String"_j);
            }
            auto path = Path::newPath(java_cast< ::java::lang::String* >(keyObj));
            npc(pathMap)->put(path, java_cast< ::java::lang::Object* >(npc(entry)->getValue()));
        }
    }
    return fromPathMap(origin, pathMap, false);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::PropertiesParser::fromPathMap(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* pathMap, bool convertedFromProperties)
{
    clinit();
    ::java::util::Set* scopePaths = new ::java::util::HashSet();
    ::java::util::Set* valuePaths = new ::java::util::HashSet();
    for (auto _i = npc(npc(pathMap)->keySet())->iterator(); _i->hasNext(); ) {
        Path* path = java_cast< Path* >(_i->next());
        {
            npc(valuePaths)->add(path);
            auto next = npc(path)->parent();
            while (next != nullptr) {
                npc(scopePaths)->add(next);
                next = npc(next)->parent();
            }
        }
    }
    if(convertedFromProperties) {
        npc(valuePaths)->removeAll(scopePaths);
    } else {
        for (auto _i = npc(valuePaths)->iterator(); _i->hasNext(); ) {
            Path* path = java_cast< Path* >(_i->next());
            {
                if(npc(scopePaths)->contains(path)) {
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"In the map, path '"_j)->append(npc(path)->render())
                        ->append(u"' occurs as both the parent object of a value and as a value. "_j)
                        ->append(u"Because Map has no defined ordering, this is a broken situation."_j)->toString());
                }
            }
        }
    }
    ::java::util::Map* root = new ::java::util::HashMap();
    ::java::util::Map* scopes = new ::java::util::HashMap();
    for (auto _i = npc(scopePaths)->iterator(); _i->hasNext(); ) {
        Path* path = java_cast< Path* >(_i->next());
        {
            ::java::util::Map* scope = new ::java::util::HashMap();
            npc(scopes)->put(path, scope);
        }
    }
    for (auto _i = npc(valuePaths)->iterator(); _i->hasNext(); ) {
        Path* path = java_cast< Path* >(_i->next());
        {
            auto parentPath = npc(path)->parent();
            auto parent = parentPath != nullptr ? java_cast< ::java::util::Map* >(npc(scopes)->get(parentPath)) : root;
            auto last = npc(path)->last();
            auto rawValue = java_cast< ::java::lang::Object* >(npc(pathMap)->get(path));
            AbstractConfigValue* value;
            if(convertedFromProperties) {
                if(dynamic_cast< ::java::lang::String* >(rawValue) != nullptr) {
                    value = new ConfigString_Quoted(origin, java_cast< ::java::lang::String* >(rawValue));
                } else {
                    value = nullptr;
                }
            } else {
                value = ConfigImpl::fromAnyRef(java_cast< ::java::lang::Object* >(npc(pathMap)->get(path)), origin, FromMapMode::KEYS_ARE_PATHS);
            }
            if(value != nullptr)
                npc(parent)->put(last, value);

        }
    }
    ::java::util::List* sortedScopePaths = new ::java::util::ArrayList();
    npc(sortedScopePaths)->addAll(scopePaths);
    ::java::util::Collections::sort(sortedScopePaths, new PropertiesParser_fromPathMap_1());
    for (auto _i = npc(sortedScopePaths)->iterator(); _i->hasNext(); ) {
        Path* scopePath = java_cast< Path* >(_i->next());
        {
            auto scope = java_cast< ::java::util::Map* >(npc(scopes)->get(scopePath));
            auto parentPath = npc(scopePath)->parent();
            auto parent = parentPath != nullptr ? java_cast< ::java::util::Map* >(npc(scopes)->get(parentPath)) : root;
            AbstractConfigObject* o = new SimpleConfigObject(origin, scope, ResolveStatus::RESOLVED, false);
            npc(parent)->put(npc(scopePath)->last(), o);
        }
    }
    return new SimpleConfigObject(origin, root, ResolveStatus::RESOLVED, false);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::PropertiesParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.PropertiesParser", 41);
    return c;
}

java::lang::Class* com::typesafe::config::impl::PropertiesParser::getClass0()
{
    return class_();
}

