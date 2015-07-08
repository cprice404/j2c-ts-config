// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_IgnoredWhitespace.hpp>

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
com::typesafe::config::impl::Tokens_IgnoredWhitespace::Tokens_IgnoredWhitespace(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_IgnoredWhitespace::Tokens_IgnoredWhitespace(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s) 
    : Tokens_IgnoredWhitespace(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,s);
}

void com::typesafe::config::impl::Tokens_IgnoredWhitespace::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s)
{
    super::ctor(TokenType::IGNORED_WHITESPACE, origin);
    this->value = s;
}

java::lang::String* com::typesafe::config::impl::Tokens_IgnoredWhitespace::toString()
{
    return ::java::lang::StringBuilder().append(u"'"_j)->append(value)
        ->append(u"' (WHITESPACE)"_j)->toString();
}

bool com::typesafe::config::impl::Tokens_IgnoredWhitespace::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_IgnoredWhitespace* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_IgnoredWhitespace::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc(npc((java_cast< Tokens_IgnoredWhitespace* >(other)))->value)->equals(value);
}

int32_t com::typesafe::config::impl::Tokens_IgnoredWhitespace::hashCode()
{
    return int32_t(41) * (int32_t(41) + super::hashCode()) + npc(value)->hashCode();
}

java::lang::String* com::typesafe::config::impl::Tokens_IgnoredWhitespace::tokenText()
{
    return value;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_IgnoredWhitespace::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.IgnoredWhitespace", 49);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_IgnoredWhitespace::getClass0()
{
    return class_();
}

