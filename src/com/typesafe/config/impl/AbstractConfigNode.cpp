// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigNode.java
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>

#include <com/typesafe/config/impl/Token.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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
com::typesafe::config::impl::AbstractConfigNode::AbstractConfigNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::AbstractConfigNode::AbstractConfigNode()
    : AbstractConfigNode(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* com::typesafe::config::impl::AbstractConfigNode::render()
{
    auto origText = new ::java::lang::StringBuilder();
    ::java::lang::Iterable* tokens = this->tokens();
    for (auto _i = npc(tokens)->iterator(); _i->hasNext(); ) {
        Token* t = java_cast< Token* >(_i->next());
        {
            npc(origText)->append(npc(t)->tokenText());
        }
    }
    return npc(origText)->toString();
}

bool com::typesafe::config::impl::AbstractConfigNode::equals(::java::lang::Object* other)
{
    return dynamic_cast< AbstractConfigNode* >(other) != nullptr && npc(render())->equals(npc((java_cast< AbstractConfigNode* >(other)))->render());
}

int32_t com::typesafe::config::impl::AbstractConfigNode::hashCode()
{
    return npc(render())->hashCode();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::AbstractConfigNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.AbstractConfigNode", 43);
    return c;
}

java::lang::Class* com::typesafe::config::impl::AbstractConfigNode::getClass0()
{
    return class_();
}

