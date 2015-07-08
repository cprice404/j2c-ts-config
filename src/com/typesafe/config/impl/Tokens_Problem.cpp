// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_Problem.hpp>

#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/TokenType.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>

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
com::typesafe::config::impl::Tokens_Problem::Tokens_Problem(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_Problem::Tokens_Problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause) 
    : Tokens_Problem(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,what,message,suggestQuotes,cause);
}

void com::typesafe::config::impl::Tokens_Problem::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause)
{
    super::ctor(TokenType::PROBLEM, origin);
    this->what_ = what;
    this->message_ = message;
    this->suggestQuotes_ = suggestQuotes;
    this->cause_ = cause;
}

java::lang::String* com::typesafe::config::impl::Tokens_Problem::what()
{
    return what_;
}

java::lang::String* com::typesafe::config::impl::Tokens_Problem::message()
{
    return message_;
}

bool com::typesafe::config::impl::Tokens_Problem::suggestQuotes()
{
    return suggestQuotes_;
}

java::lang::Throwable* com::typesafe::config::impl::Tokens_Problem::cause()
{
    return cause_;
}

java::lang::String* com::typesafe::config::impl::Tokens_Problem::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u'\'');
    npc(sb)->append(what_);
    npc(sb)->append(u'\'');
    npc(sb)->append(u" ("_j);
    npc(sb)->append(message_);
    npc(sb)->append(u")"_j);
    return npc(sb)->toString();
}

bool com::typesafe::config::impl::Tokens_Problem::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_Problem* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_Problem::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc(npc((java_cast< Tokens_Problem* >(other)))->what_)->equals(what_) && npc(npc((java_cast< Tokens_Problem* >(other)))->message_)->equals(message_)&& npc((java_cast< Tokens_Problem* >(other)))->suggestQuotes_ == suggestQuotes_ && ConfigImplUtil::equalsHandlingNull(npc((java_cast< Tokens_Problem* >(other)))->cause_, cause_);
}

int32_t com::typesafe::config::impl::Tokens_Problem::hashCode()
{
    auto h = int32_t(41) * (int32_t(41) + super::hashCode());
    h = int32_t(41) * (h + npc(what_)->hashCode());
    h = int32_t(41) * (h + npc(message_)->hashCode());
    h = int32_t(41) * (h + npc(::java::lang::Boolean::valueOf(suggestQuotes_))->hashCode());
    if(cause_ != nullptr)
        h = int32_t(41) * (h + npc(cause_)->hashCode());

    return h;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_Problem::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.Problem", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_Problem::getClass0()
{
    return class_();
}

