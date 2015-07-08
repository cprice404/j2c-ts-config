// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigString.java
#include <com/typesafe/config/impl/ConfigString.hpp>

#include <com/typesafe/config/ConfigRenderOptions.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigString::ConfigString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigString::ConfigString(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value) 
    : ConfigString(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value);
}

constexpr int64_t com::typesafe::config::impl::ConfigString::serialVersionUID;

void com::typesafe::config::impl::ConfigString::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value)
{
    super::ctor(origin);
    this->value = value;
}

bool com::typesafe::config::impl::ConfigString::wasQuoted()
{
    return (dynamic_cast< ConfigString_Quoted* >(this) != nullptr);
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigString::valueType()
{
    return ::com::typesafe::config::ConfigValueType::STRING;
}

java::lang::String* com::typesafe::config::impl::ConfigString::unwrapped()
{
    return value;
}

java::lang::String* com::typesafe::config::impl::ConfigString::transformToString()
{
    return value;
}

void com::typesafe::config::impl::ConfigString::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    ::java::lang::String* rendered;
    if(npc(options)->getJson())
        rendered = ConfigImplUtil::renderJsonString(value);
    else
        rendered = ConfigImplUtil::renderStringUnquotedIfPossible(value);
    npc(sb)->append(rendered);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigString::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigString", 37);
    return c;
}

void com::typesafe::config::impl::ConfigString::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

java::lang::String* com::typesafe::config::impl::ConfigString::render()
{
    return super::render();
}

java::lang::String* com::typesafe::config::impl::ConfigString::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return super::render(options);
}

java::lang::Class* com::typesafe::config::impl::ConfigString::getClass0()
{
    return class_();
}

