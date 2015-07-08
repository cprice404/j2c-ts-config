// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDocumentParser.java
#include <com/typesafe/config/impl/ConfigDocumentParser.hpp>

#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigDocumentParser_ParseContext.hpp>
#include <com/typesafe/config/impl/ConfigNodeRoot.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigDocumentParser::ConfigDocumentParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigDocumentParser::ConfigDocumentParser()
    : ConfigDocumentParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::ConfigNodeRoot* com::typesafe::config::impl::ConfigDocumentParser::parse(::java::util::Iterator* tokens, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    auto syntax = npc(options)->getSyntax() == nullptr ? ::com::typesafe::config::ConfigSyntax::CONF : npc(options)->getSyntax();
    auto context = new ConfigDocumentParser_ParseContext(syntax, origin, tokens);
    return npc(context)->parse();
}

com::typesafe::config::impl::AbstractConfigNodeValue* com::typesafe::config::impl::ConfigDocumentParser::parseValue(::java::util::Iterator* tokens, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    auto syntax = npc(options)->getSyntax() == nullptr ? ::com::typesafe::config::ConfigSyntax::CONF : npc(options)->getSyntax();
    auto context = new ConfigDocumentParser_ParseContext(syntax, origin, tokens);
    return npc(context)->parseSingleValue();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigDocumentParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigDocumentParser", 45);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigDocumentParser::getClass0()
{
    return class_();
}

