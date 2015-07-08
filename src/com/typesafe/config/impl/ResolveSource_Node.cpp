// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java
#include <com/typesafe/config/impl/ResolveSource_Node.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>

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
com::typesafe::config::impl::ResolveSource_Node::ResolveSource_Node(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveSource_Node::ResolveSource_Node(::java::lang::Object* value, ResolveSource_Node* next) 
    : ResolveSource_Node(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,next);
}

com::typesafe::config::impl::ResolveSource_Node::ResolveSource_Node(::java::lang::Object* value) 
    : ResolveSource_Node(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

void com::typesafe::config::impl::ResolveSource_Node::ctor(::java::lang::Object* value, ResolveSource_Node* next)
{
    super::ctor();
    this->value = value;
    this->next = next;
}

void com::typesafe::config::impl::ResolveSource_Node::ctor(::java::lang::Object* value)
{
    ctor(value, nullptr);
}

com::typesafe::config::impl::ResolveSource_Node* com::typesafe::config::impl::ResolveSource_Node::prepend(::java::lang::Object* value)
{
    return new ResolveSource_Node(value, this);
}

java::lang::Object* com::typesafe::config::impl::ResolveSource_Node::head()
{
    return java_cast< ::java::lang::Object* >(value);
}

com::typesafe::config::impl::ResolveSource_Node* com::typesafe::config::impl::ResolveSource_Node::tail()
{
    return next;
}

java::lang::Object* com::typesafe::config::impl::ResolveSource_Node::last()
{
    auto i = this;
    while (npc(i)->next != nullptr) 
                i = npc(i)->next;

    return java_cast< ::java::lang::Object* >(npc(i)->value);
}

com::typesafe::config::impl::ResolveSource_Node* com::typesafe::config::impl::ResolveSource_Node::reverse()
{
    if(next == nullptr) {
        return this;
    } else {
        auto reversed = new ResolveSource_Node(java_cast< ::java::lang::Object* >(value));
        auto i = next;
        while (i != nullptr) {
            reversed = npc(reversed)->prepend(java_cast< ::java::lang::Object* >(npc(i)->value));
            i = npc(i)->next;
        }
        return reversed;
    }
}

java::lang::String* com::typesafe::config::impl::ResolveSource_Node::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"["_j);
    auto toAppendValue = this->reverse();
    while (toAppendValue != nullptr) {
        npc(sb)->append(npc(java_cast< ::java::lang::Object* >(npc(toAppendValue)->value))->toString());
        if(npc(toAppendValue)->next != nullptr)
            npc(sb)->append(u" <= "_j);

        toAppendValue = npc(toAppendValue)->next;
    }
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveSource_Node::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveSource.Node", 43);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveSource_Node::getClass0()
{
    return class_();
}

