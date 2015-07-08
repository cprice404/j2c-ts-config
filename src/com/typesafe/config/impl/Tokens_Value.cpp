// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_Value.hpp>

#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/TokenType.hpp>
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
com::typesafe::config::impl::Tokens_Value::Tokens_Value(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_Value::Tokens_Value(AbstractConfigValue* value) 
    : Tokens_Value(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

com::typesafe::config::impl::Tokens_Value::Tokens_Value(AbstractConfigValue* value, ::java::lang::String* origText) 
    : Tokens_Value(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,origText);
}

void com::typesafe::config::impl::Tokens_Value::ctor(AbstractConfigValue* value)
{
    ctor(value, nullptr);
}

void com::typesafe::config::impl::Tokens_Value::ctor(AbstractConfigValue* value, ::java::lang::String* origText)
{
    super::ctor(TokenType::VALUE, npc(value)->origin(), origText);
    this->value_ = value;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Tokens_Value::value()
{
    return value_;
}

java::lang::String* com::typesafe::config::impl::Tokens_Value::toString()
{
    if(npc(value())->resolveStatus() == ResolveStatus::RESOLVED)
        return ::java::lang::StringBuilder().append(u"'"_j)->append(static_cast< ::java::lang::Object* >(npc(value())->unwrapped()))
            ->append(u"' ("_j)
            ->append(npc(npc(value_)->valueType())->name())
            ->append(u")"_j)->toString();
    else
        return ::java::lang::StringBuilder().append(u"'<unresolved value>' ("_j)->append(npc(npc(value_)->valueType())->name())
            ->append(u")"_j)->toString();
}

bool com::typesafe::config::impl::Tokens_Value::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_Value* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_Value::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc(npc((java_cast< Tokens_Value* >(other)))->value_)->equals(value_);
}

int32_t com::typesafe::config::impl::Tokens_Value::hashCode()
{
    return int32_t(41) * (int32_t(41) + super::hashCode()) + npc(value_)->hashCode();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_Value::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.Value", 37);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_Value::getClass0()
{
    return class_();
}

