// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java
#include <com/typesafe/config/impl/SimpleConfigList_ResolveModifier.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>

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
com::typesafe::config::impl::SimpleConfigList_ResolveModifier::SimpleConfigList_ResolveModifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigList_ResolveModifier::SimpleConfigList_ResolveModifier(ResolveContext* context, ResolveSource* source) 
    : SimpleConfigList_ResolveModifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,source);
}

void com::typesafe::config::impl::SimpleConfigList_ResolveModifier::ctor(ResolveContext* context, ResolveSource* source)
{
    super::ctor();
    this->context = context;
    this->source = source;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigList_ResolveModifier::modifyChildMayThrow(::java::lang::String* key, AbstractConfigValue* v) /* throws(NotPossibleToResolve) */
{
    auto result = npc(context)->resolve(v, source);
    context = npc(result)->context;
    return java_cast< AbstractConfigValue* >(npc(result)->value);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_ResolveModifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigList.ResolveModifier", 57);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_ResolveModifier::getClass0()
{
    return class_();
}

