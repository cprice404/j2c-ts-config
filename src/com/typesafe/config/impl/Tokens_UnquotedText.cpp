// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_UnquotedText.hpp>

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
com::typesafe::config::impl::Tokens_UnquotedText::Tokens_UnquotedText(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_UnquotedText::Tokens_UnquotedText(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s) 
    : Tokens_UnquotedText(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,s);
}

void com::typesafe::config::impl::Tokens_UnquotedText::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s)
{
    super::ctor(TokenType::UNQUOTED_TEXT, origin);
    this->value_ = s;
}

java::lang::String* com::typesafe::config::impl::Tokens_UnquotedText::value()
{
    return value_;
}

java::lang::String* com::typesafe::config::impl::Tokens_UnquotedText::toString()
{
    return ::java::lang::StringBuilder().append(u"'"_j)->append(value_)
        ->append(u"'"_j)->toString();
}

bool com::typesafe::config::impl::Tokens_UnquotedText::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_UnquotedText* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_UnquotedText::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc(npc((java_cast< Tokens_UnquotedText* >(other)))->value_)->equals(value_);
}

int32_t com::typesafe::config::impl::Tokens_UnquotedText::hashCode()
{
    return int32_t(41) * (int32_t(41) + super::hashCode()) + npc(value_)->hashCode();
}

java::lang::String* com::typesafe::config::impl::Tokens_UnquotedText::tokenText()
{
    return value_;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_UnquotedText::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.UnquotedText", 44);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_UnquotedText::getClass0()
{
    return class_();
}

