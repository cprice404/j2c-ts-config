// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveResult.java
#include <com/typesafe/config/impl/ResolveResult.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

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
com::typesafe::config::impl::ResolveResult::ResolveResult(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveResult::ResolveResult(ResolveContext* context, AbstractConfigValue* value) 
    : ResolveResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,value);
}

void com::typesafe::config::impl::ResolveResult::ctor(ResolveContext* context, AbstractConfigValue* value)
{
    super::ctor();
    this->context = context;
    this->value = value;
}

/* <V extends AbstractConfigValue> */com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ResolveResult::make(ResolveContext* context, AbstractConfigValue* value)
{
    clinit();
    return new ResolveResult(context, value);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ResolveResult::asObjectResult()
{
    if(!(dynamic_cast< AbstractConfigObject* >(java_cast< AbstractConfigValue* >(value)) != nullptr))
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Expecting a resolve result to be an object, but it was "_j)->append(static_cast< ::java::lang::Object* >(java_cast< AbstractConfigValue* >(value)))->toString());

    ::java::lang::Object* o = this;
    return java_cast< ResolveResult* >(o);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ResolveResult::asValueResult()
{
    ::java::lang::Object* o = this;
    return java_cast< ResolveResult* >(o);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ResolveResult::popTrace()
{
    return make(npc(context)->popTrace(), java_cast< AbstractConfigValue* >(value));
}

java::lang::String* com::typesafe::config::impl::ResolveResult::toString()
{
    return ::java::lang::StringBuilder().append(u"ResolveResult("_j)->append(static_cast< ::java::lang::Object* >(java_cast< AbstractConfigValue* >(value)))
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveResult::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveResult", 38);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveResult::getClass0()
{
    return class_();
}

