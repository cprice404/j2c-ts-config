// Generated from /config/src/main/java/com/typesafe/config/parser/ConfigDocumentFactory.java
#include <com/typesafe/config/parser/ConfigDocumentFactory.hpp>

#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/parser/ConfigDocument.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::parser::ConfigDocumentFactory::ConfigDocumentFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::parser::ConfigDocumentFactory::ConfigDocumentFactory()
    : ConfigDocumentFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::parser::ConfigDocumentFactory::parseReader(::java::io::Reader* reader, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::Parseable::newReader(reader, options))->parseConfigDocument();
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::parser::ConfigDocumentFactory::parseReader(::java::io::Reader* reader)
{
    clinit();
    return parseReader(reader, ::com::typesafe::config::ConfigParseOptions::defaults());
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::parser::ConfigDocumentFactory::parseFile(::java::io::File* file, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::Parseable::newFile(file, options))->parseConfigDocument();
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::parser::ConfigDocumentFactory::parseFile(::java::io::File* file)
{
    clinit();
    return parseFile(file, ::com::typesafe::config::ConfigParseOptions::defaults());
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::parser::ConfigDocumentFactory::parseString(::java::lang::String* s, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return npc(::com::typesafe::config::impl::Parseable::newString(s, options))->parseConfigDocument();
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::parser::ConfigDocumentFactory::parseString(::java::lang::String* s)
{
    clinit();
    return parseString(s, ::com::typesafe::config::ConfigParseOptions::defaults());
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::parser::ConfigDocumentFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.parser.ConfigDocumentFactory", 48);
    return c;
}

java::lang::Class* com::typesafe::config::parser::ConfigDocumentFactory::getClass0()
{
    return class_();
}

