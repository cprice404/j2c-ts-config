// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java
#include <com/typesafe/config/impl/SimpleConfigObject_ResolveModifier.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

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
com::typesafe::config::impl::SimpleConfigObject_ResolveModifier::SimpleConfigObject_ResolveModifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigObject_ResolveModifier::SimpleConfigObject_ResolveModifier(ResolveContext* context, ResolveSource* source) 
    : SimpleConfigObject_ResolveModifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,source);
}

void com::typesafe::config::impl::SimpleConfigObject_ResolveModifier::ctor(ResolveContext* context, ResolveSource* source)
{
    super::ctor();
    this->context = context;
    this->source = source;
    originalRestrict = npc(context)->restrictToChild();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigObject_ResolveModifier::modifyChildMayThrow(::java::lang::String* key, AbstractConfigValue* v) /* throws(NotPossibleToResolve) */
{
    if(npc(context)->isRestrictedToChild()) {
        if(npc(key)->equals(npc(npc(context)->restrictToChild())->first())) {
            auto remainder = npc(npc(context)->restrictToChild())->remainder();
            if(remainder != nullptr) {
                auto result = npc(npc(context)->restrict(remainder))->resolve(v, source);
                context = npc(npc(npc(result)->context)->unrestricted())->restrict(originalRestrict);
                return java_cast< AbstractConfigValue* >(npc(result)->value);
            } else {
                return v;
            }
        } else {
            return v;
        }
    } else {
        auto result = npc(npc(context)->unrestricted())->resolve(v, source);
        context = npc(npc(npc(result)->context)->unrestricted())->restrict(originalRestrict);
        return java_cast< AbstractConfigValue* >(npc(result)->value);
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject_ResolveModifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigObject.ResolveModifier", 59);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject_ResolveModifier::getClass0()
{
    return class_();
}

