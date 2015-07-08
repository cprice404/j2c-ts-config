// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeComplexValue.java
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>

#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeField.hpp>
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
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
com::typesafe::config::impl::ConfigNodeComplexValue::ConfigNodeComplexValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeComplexValue::ConfigNodeComplexValue(::java::util::Collection* children) 
    : ConfigNodeComplexValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(children);
}

void com::typesafe::config::impl::ConfigNodeComplexValue::ctor(::java::util::Collection* children)
{
    super::ctor();
    this->children_ = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children));
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeComplexValue::children()
{
    return children_;
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeComplexValue::tokens()
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

com::typesafe::config::impl::ConfigNodeComplexValue* com::typesafe::config::impl::ConfigNodeComplexValue::indentText(AbstractConfigNode* indentation)
{
    auto childrenCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children_));
    for (auto i = int32_t(0); i < npc(childrenCopy)->size(); i++) {
        auto child = java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i));
        if(dynamic_cast< ConfigNodeSingleToken* >(child) != nullptr && Tokens::isNewline(npc((java_cast< ConfigNodeSingleToken* >(child)))->token())) {
            npc(childrenCopy)->add(i + int32_t(1), indentation);
            i++;
        } else if(dynamic_cast< ConfigNodeField* >(child) != nullptr) {
            AbstractConfigNode* value = npc((java_cast< ConfigNodeField* >(child)))->value();
            if(dynamic_cast< ConfigNodeComplexValue* >(value) != nullptr) {
                npc(childrenCopy)->set(i, npc((java_cast< ConfigNodeField* >(child)))->replaceValue(npc((java_cast< ConfigNodeComplexValue* >(value)))->indentText(indentation)));
            }
        } else if(dynamic_cast< ConfigNodeComplexValue* >(child) != nullptr) {
            npc(childrenCopy)->set(i, npc((java_cast< ConfigNodeComplexValue* >(child)))->indentText(indentation));
        }
    }
    return newNode(childrenCopy);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeComplexValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeComplexValue", 47);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeComplexValue::getClass0()
{
    return class_();
}

