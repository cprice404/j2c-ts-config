// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeInclude.java
#include <com/typesafe/config/impl/ConfigNodeInclude.hpp>

#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigIncludeKind.hpp>
#include <com/typesafe/config/impl/ConfigNodeSimpleValue.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>

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
com::typesafe::config::impl::ConfigNodeInclude::ConfigNodeInclude(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeInclude::ConfigNodeInclude(::java::util::Collection* children, ConfigIncludeKind* kind) 
    : ConfigNodeInclude(*static_cast< ::default_init_tag* >(0))
{
    ctor(children,kind);
}

void com::typesafe::config::impl::ConfigNodeInclude::ctor(::java::util::Collection* children, ConfigIncludeKind* kind)
{
    super::ctor();
    this->children_ = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children));
    this->kind_ = kind;
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeInclude::children()
{
    return children_;
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeInclude::tokens()
{
    auto tokens = new ::java::util::ArrayList();
    for (auto _i = npc(children_)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* child = java_cast< AbstractConfigNode* >(_i->next());
        {
            npc(tokens)->addAll(npc(child)->tokens());
        }
    }
    return tokens;
}

com::typesafe::config::impl::ConfigIncludeKind* com::typesafe::config::impl::ConfigNodeInclude::kind()
{
    return kind_;
}

java::lang::String* com::typesafe::config::impl::ConfigNodeInclude::name()
{
    for (auto _i = npc(children_)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* n = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeSimpleValue* >(n) != nullptr) {
                return java_cast< ::java::lang::String* >(npc(Tokens::getValue(npc((java_cast< ConfigNodeSimpleValue* >(n)))->token()))->unwrapped());
            }
        }
    }
    return nullptr;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeInclude::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeInclude", 42);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeInclude::getClass0()
{
    return class_();
}

