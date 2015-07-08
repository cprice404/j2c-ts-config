// Generated from /config/src/main/java/com/typesafe/config/impl/Token.java
#include <com/typesafe/config/impl/Token.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
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
com::typesafe::config::impl::Token::Token(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Token::Token(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin) 
    : Token(*static_cast< ::default_init_tag* >(0))
{
    ctor(tokenType,origin);
}

com::typesafe::config::impl::Token::Token(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText) 
    : Token(*static_cast< ::default_init_tag* >(0))
{
    ctor(tokenType,origin,tokenText);
}

com::typesafe::config::impl::Token::Token(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText, ::java::lang::String* debugString) 
    : Token(*static_cast< ::default_init_tag* >(0))
{
    ctor(tokenType,origin,tokenText,debugString);
}

void com::typesafe::config::impl::Token::ctor(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin)
{
    ctor(tokenType, origin, nullptr);
}

void com::typesafe::config::impl::Token::ctor(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText)
{
    ctor(tokenType, origin, tokenText, nullptr);
}

void com::typesafe::config::impl::Token::ctor(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText, ::java::lang::String* debugString)
{
    super::ctor();
    this->tokenType_ = tokenType;
    this->origin_ = origin;
    this->debugString = debugString;
    this->tokenText_ = tokenText;
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Token::newWithoutOrigin(TokenType* tokenType, ::java::lang::String* debugString, ::java::lang::String* tokenText)
{
    clinit();
    return new Token(tokenType, nullptr, tokenText, debugString);
}

com::typesafe::config::impl::TokenType* com::typesafe::config::impl::Token::tokenType()
{
    return tokenType_;
}

java::lang::String* com::typesafe::config::impl::Token::tokenText()
{
    return tokenText_;
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Token::origin()
{
    if(origin_ == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get origin from token that doesn't have one: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());

    return origin_;
}

int32_t com::typesafe::config::impl::Token::lineNumber()
{
    if(origin_ != nullptr)
        return npc(origin_)->lineNumber();
    else
        return -int32_t(1);
}

java::lang::String* com::typesafe::config::impl::Token::toString()
{
    if(debugString != nullptr)
        return debugString;
    else
        return npc(tokenType_)->name();
}

bool com::typesafe::config::impl::Token::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Token* >(other) != nullptr;
}

bool com::typesafe::config::impl::Token::equals(::java::lang::Object* other)
{
    if(dynamic_cast< Token* >(other) != nullptr) {
        return canEqual(other) && this->tokenType_ == npc((java_cast< Token* >(other)))->tokenType_;
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::Token::hashCode()
{
    return npc(tokenType_)->hashCode();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Token::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Token", 30);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Token::getClass0()
{
    return class_();
}

