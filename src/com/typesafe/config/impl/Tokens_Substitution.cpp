// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_Substitution.hpp>

#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/TokenType.hpp>
#include <com/typesafe/config/impl/Tokenizer.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>

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
com::typesafe::config::impl::Tokens_Substitution::Tokens_Substitution(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_Substitution::Tokens_Substitution(::com::typesafe::config::ConfigOrigin* origin, bool optional, ::java::util::List* expression) 
    : Tokens_Substitution(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,optional,expression);
}

void com::typesafe::config::impl::Tokens_Substitution::ctor(::com::typesafe::config::ConfigOrigin* origin, bool optional, ::java::util::List* expression)
{
    super::ctor(TokenType::SUBSTITUTION, origin);
    this->optional_ = optional;
    this->value_ = expression;
}

bool com::typesafe::config::impl::Tokens_Substitution::optional()
{
    return optional_;
}

java::util::List* com::typesafe::config::impl::Tokens_Substitution::value()
{
    return value_;
}

java::lang::String* com::typesafe::config::impl::Tokens_Substitution::tokenText()
{
    return ::java::lang::StringBuilder().append(u"${"_j)->append((this->optional_ ? u"?"_j : u""_j))
        ->append(Tokenizer::render(npc(java_cast< ::java::util::List* >(this->value_))->iterator()))
        ->append(u"}"_j)->toString();
}

java::lang::String* com::typesafe::config::impl::Tokens_Substitution::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    for (auto _i = npc(value_)->iterator(); _i->hasNext(); ) {
        Token* t = java_cast< Token* >(_i->next());
        {
            npc(sb)->append(npc(t)->toString());
        }
    }
    return ::java::lang::StringBuilder().append(u"'${"_j)->append(npc(sb)->toString())
        ->append(u"}'"_j)->toString();
}

bool com::typesafe::config::impl::Tokens_Substitution::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_Substitution* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_Substitution::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc(java_cast< ::java::util::List* >(npc((java_cast< Tokens_Substitution* >(other)))->value_))->equals(value_);
}

int32_t com::typesafe::config::impl::Tokens_Substitution::hashCode()
{
    return int32_t(41) * (int32_t(41) + super::hashCode()) + npc(value_)->hashCode();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_Substitution::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.Substitution", 44);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_Substitution::getClass0()
{
    return class_();
}

