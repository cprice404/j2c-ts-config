// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodePath.java
#include <com/typesafe/config/impl/ConfigNodePath.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
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
com::typesafe::config::impl::ConfigNodePath::ConfigNodePath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodePath::ConfigNodePath(Path* path, ::java::util::Collection* tokens) 
    : ConfigNodePath(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,tokens);
}

void com::typesafe::config::impl::ConfigNodePath::ctor(Path* path, ::java::util::Collection* tokens)
{
    super::ctor();
    this->path = path;
    this->tokens_ = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(tokens));
}

java::util::Collection* com::typesafe::config::impl::ConfigNodePath::tokens()
{
    return tokens_;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::ConfigNodePath::value()
{
    return path;
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::ConfigNodePath::subPath(int32_t toRemove)
{
    auto periodCount = int32_t(0);
    auto tokensCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(tokens_));
    for (auto i = int32_t(0); i < npc(tokensCopy)->size(); i++) {
        if(Tokens::isUnquotedText(java_cast< Token* >(npc(tokensCopy)->get(i))) && npc(npc(java_cast< Token* >(npc(tokensCopy)->get(i)))->tokenText())->equals(u"."_j))
            periodCount++;

        if(periodCount == toRemove) {
            return new ConfigNodePath(npc(path)->subPath(toRemove), npc(tokensCopy)->subList(i + int32_t(1), npc(tokensCopy)->size()));
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Tried to remove too many elements from a Path node"_j);
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::ConfigNodePath::first()
{
    auto tokensCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(tokens_));
    for (auto i = int32_t(0); i < npc(tokensCopy)->size(); i++) {
        if(Tokens::isUnquotedText(java_cast< Token* >(npc(tokensCopy)->get(i))) && npc(npc(java_cast< Token* >(npc(tokensCopy)->get(i)))->tokenText())->equals(u"."_j))
            return new ConfigNodePath(npc(path)->subPath(0, 1), npc(tokensCopy)->subList(0, i));

    }
    return this;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodePath::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodePath", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodePath::getClass0()
{
    return class_();
}

