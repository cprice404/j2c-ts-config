// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeComment.java
#include <com/typesafe/config/impl/ConfigNodeComment.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::ConfigNodeComment::ConfigNodeComment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeComment::ConfigNodeComment(Token* comment) 
    : ConfigNodeComment(*static_cast< ::default_init_tag* >(0))
{
    ctor(comment);
}

void com::typesafe::config::impl::ConfigNodeComment::ctor(Token* comment)
{
    super::ctor(comment);
    if(!Tokens::isComment(super::token_)) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Tried to create a ConfigNodeComment from a non-comment token"_j);
    }
}

java::lang::String* com::typesafe::config::impl::ConfigNodeComment::commentText()
{
    return Tokens::getCommentText(super::token_);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeComment::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeComment", 42);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeComment::getClass0()
{
    return class_();
}

