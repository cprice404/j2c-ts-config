// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeField.java
#include <com/typesafe/config/impl/ConfigNodeField.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeComment.hpp>
#include <com/typesafe/config/impl/ConfigNodePath.hpp>
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
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
com::typesafe::config::impl::ConfigNodeField::ConfigNodeField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeField::ConfigNodeField(::java::util::Collection* children) 
    : ConfigNodeField(*static_cast< ::default_init_tag* >(0))
{
    ctor(children);
}

void com::typesafe::config::impl::ConfigNodeField::ctor(::java::util::Collection* children)
{
    super::ctor();
    this->children = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children));
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeField::tokens()
{
    auto tokens = new ::java::util::ArrayList();
    for (auto _i = npc(children)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* child = java_cast< AbstractConfigNode* >(_i->next());
        {
            npc(tokens)->addAll(npc(child)->tokens());
        }
    }
    return tokens;
}

com::typesafe::config::impl::ConfigNodeField* com::typesafe::config::impl::ConfigNodeField::replaceValue(AbstractConfigNodeValue* newValue)
{
    auto childrenCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children));
    for (auto i = int32_t(0); i < npc(childrenCopy)->size(); i++) {
        if(dynamic_cast< AbstractConfigNodeValue* >(java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i))) != nullptr) {
            npc(childrenCopy)->set(i, newValue);
            return new ConfigNodeField(childrenCopy);
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Field node doesn't have a value"_j);
}

com::typesafe::config::impl::AbstractConfigNodeValue* com::typesafe::config::impl::ConfigNodeField::value()
{
    for (auto i = int32_t(0); i < npc(children)->size(); i++) {
        if(dynamic_cast< AbstractConfigNodeValue* >(java_cast< AbstractConfigNode* >(npc(children)->get(i))) != nullptr) {
            return java_cast< AbstractConfigNodeValue* >(java_cast< AbstractConfigNode* >(npc(children)->get(i)));
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Field node doesn't have a value"_j);
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::ConfigNodeField::path()
{
    for (auto i = int32_t(0); i < npc(children)->size(); i++) {
        if(dynamic_cast< ConfigNodePath* >(java_cast< AbstractConfigNode* >(npc(children)->get(i))) != nullptr) {
            return java_cast< ConfigNodePath* >(java_cast< AbstractConfigNode* >(npc(children)->get(i)));
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Field node doesn't have a path"_j);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::ConfigNodeField::separator()
{
    for (auto _i = npc(children)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* child = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeSingleToken* >(child) != nullptr) {
                auto t = npc((java_cast< ConfigNodeSingleToken* >(child)))->token();
                if(t == Tokens::PLUS_EQUALS() || t == Tokens::COLON() || t == Tokens::EQUALS()) {
                    return t;
                }
            }
        }
    }
    return nullptr;
}

java::util::List* com::typesafe::config::impl::ConfigNodeField::comments()
{
    ::java::util::List* comments = new ::java::util::ArrayList();
    for (auto _i = npc(children)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* child = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeComment* >(child) != nullptr) {
                npc(comments)->add(npc((java_cast< ConfigNodeComment* >(child)))->commentText());
            }
        }
    }
    return comments;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeField::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeField", 40);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeField::getClass0()
{
    return class_();
}

