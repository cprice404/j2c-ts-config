// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeSimpleValue.java
#include <com/typesafe/config/impl/ConfigNodeSimpleValue.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigReference.hpp>
#include <com/typesafe/config/impl/ConfigString_Unquoted.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PathParser.hpp>
#include <com/typesafe/config/impl/SubstitutionExpression.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collections.hpp>
#include <java/util/List.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigNodeSimpleValue::ConfigNodeSimpleValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeSimpleValue::ConfigNodeSimpleValue(Token* value) 
    : ConfigNodeSimpleValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

void com::typesafe::config::impl::ConfigNodeSimpleValue::ctor(Token* value)
{
    super::ctor();
    token_ = value;
}

java::util::Collection* com::typesafe::config::impl::ConfigNodeSimpleValue::tokens()
{
    return ::java::util::Collections::singletonList(token_);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::ConfigNodeSimpleValue::token()
{
    return token_;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigNodeSimpleValue::value()
{
    if(Tokens::isValue(token_))
        return Tokens::getValue(token_);
    else if(Tokens::isUnquotedText(token_))
        return new ConfigString_Unquoted(npc(token_)->origin(), Tokens::getUnquotedText(token_));
    else if(Tokens::isSubstitution(token_)) {
        auto expression = Tokens::getSubstitutionPathExpression(token_);
        auto path = PathParser::parsePathExpression(npc(expression)->iterator(), npc(token_)->origin());
        auto optional = Tokens::getSubstitutionOptional(token_);
        return new ConfigReference(npc(token_)->origin(), new SubstitutionExpression(path, optional));
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"ConfigNodeSimpleValue did not contain a valid value token"_j);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeSimpleValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeSimpleValue", 46);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeSimpleValue::getClass0()
{
    return class_();
}

