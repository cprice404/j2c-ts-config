// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_Comment.hpp>

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
com::typesafe::config::impl::Tokens_Comment::Tokens_Comment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_Comment::Tokens_Comment(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text) 
    : Tokens_Comment(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,text);
}

void com::typesafe::config::impl::Tokens_Comment::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text)
{
    super::ctor(TokenType::COMMENT, origin);
    this->text_ = text;
}

java::lang::String* com::typesafe::config::impl::Tokens_Comment::text()
{
    return text_;
}

java::lang::String* com::typesafe::config::impl::Tokens_Comment::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"'#"_j);
    npc(sb)->append(text_);
    npc(sb)->append(u"' (COMMENT)"_j);
    return npc(sb)->toString();
}

bool com::typesafe::config::impl::Tokens_Comment::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< Tokens_Comment* >(other) != nullptr;
}

bool com::typesafe::config::impl::Tokens_Comment::equals(::java::lang::Object* other)
{
    return super::equals(other) && npc(npc((java_cast< Tokens_Comment* >(other)))->text_)->equals(text_);
}

int32_t com::typesafe::config::impl::Tokens_Comment::hashCode()
{
    auto h = int32_t(41) * (int32_t(41) + super::hashCode());
    h = int32_t(41) * (h + npc(text_)->hashCode());
    return h;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_Comment::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.Comment", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_Comment::getClass0()
{
    return class_();
}

