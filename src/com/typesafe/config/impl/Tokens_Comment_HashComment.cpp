// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens_Comment_HashComment.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::impl::Tokens_Comment_HashComment::Tokens_Comment_HashComment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens_Comment_HashComment::Tokens_Comment_HashComment(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text) 
    : Tokens_Comment_HashComment(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,text);
}

void com::typesafe::config::impl::Tokens_Comment_HashComment::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text)
{
    super::ctor(origin, text);
}

java::lang::String* com::typesafe::config::impl::Tokens_Comment_HashComment::tokenText()
{
    return ::java::lang::StringBuilder().append(u"#"_j)->append(super::text_)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens_Comment_HashComment::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens.Comment.HashComment", 51);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokens_Comment_HashComment::getClass0()
{
    return class_();
}

