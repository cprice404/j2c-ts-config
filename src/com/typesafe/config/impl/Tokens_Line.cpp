// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_Line.hpp>

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
com::typesafe::config::impl::Tokens_Line::Tokens_Line(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_Line::Tokens_Line(::com::typesafe::config::ConfigOrigin* origin) 
    : Tokens_Line(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin);
}

void com::typesafe::config::impl::Tokens_Line::ctor(::com::typesafe::config::ConfigOrigin* origin)
{
    super::ctor(TokenType::NEWLINE, origin);
}

java::lang::String* com::typesafe::config::impl::Tokens_Line::toString()
{
    return ::java::lang::StringBuilder().append(u"'\\n'@"_j)->append(lineNumber())->toString();
}

bool com::typesafe::config::impl::Tokens_Line::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_Line* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_Line::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc((java_cast< Tokens_Line* >(other)))->lineNumber() == lineNumber();
}

int32_t com::typesafe::config::impl::Tokens_Line::hashCode()
{
    return int32_t(41) * (int32_t(41) + super::hashCode()) + lineNumber();
}

java::lang::String* com::typesafe::config::impl::Tokens_Line::tokenText()
{
    return u"\n"_j;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_Line::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.Line", 36);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_Line::getClass0()
{
    return class_();
}

