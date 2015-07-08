// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigParser.java
#include <com/typesafe/config/impl/ConfigParser.hpp>

#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigParser_ParseContext.hpp>
#include <com/typesafe/config/impl/SimpleIncluder.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigParser::ConfigParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigParser::ConfigParser()
    : ConfigParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigParser::parse(ConfigNodeRoot* document, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* options, ::com::typesafe::config::ConfigIncludeContext* includeContext)
{
    clinit();
    auto context = new ConfigParser_ParseContext(npc(options)->getSyntax(), origin, document, SimpleIncluder::makeFull(npc(options)->getIncluder()), includeContext);
    return npc(context)->parse();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigParser", 37);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigParser::getClass0()
{
    return class_();
}

