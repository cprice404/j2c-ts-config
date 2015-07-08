// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java
#include <com/typesafe/config/impl/AbstractConfigValue_NotPossibleToResolve.hpp>

#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::AbstractConfigValue_NotPossibleToResolve(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::AbstractConfigValue_NotPossibleToResolve(ResolveContext* context) 
    : AbstractConfigValue_NotPossibleToResolve(*static_cast< ::default_init_tag* >(0))
{
    ctor(context);
}

constexpr int64_t com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::serialVersionUID;

void com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::ctor(ResolveContext* context)
{
    super::ctor(u"was not possible to resolve"_j);
    this->traceString_ = npc(context)->traceString();
}

java::lang::String* com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::traceString()
{
    return traceString_;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.AbstractConfigValue.NotPossibleToResolve", 65);
    return c;
}

java::lang::Class* com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve::getClass0()
{
    return class_();
}

