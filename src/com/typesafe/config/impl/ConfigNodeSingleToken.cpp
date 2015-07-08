// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeSingleToken.java
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>

#include <com/typesafe/config/impl/Token.hpp>
#include <java/util/Collections.hpp>
#include <java/util/List.hpp>

com::typesafe::config::impl::ConfigNodeSingleToken::ConfigNodeSingleToken(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeSingleToken::ConfigNodeSingleToken(Token* t) 
    : ConfigNodeSingleToken(*static_cast< ::default_init_tag* >(0))
{
    ctor(t);
}

void com::typesafe::config::impl::ConfigNodeSingleToken::ctor(Token* t)
{
    super::ctor();
    token_ = t;
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeSingleToken::tokens()
{
    return ::java::util::Collections::singletonList(token_);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::ConfigNodeSingleToken::token()
{
    return token_;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeSingleToken::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeSingleToken", 46);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeSingleToken::getClass0()
{
    return class_();
}

