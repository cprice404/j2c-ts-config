// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigDocument.java
#include <com/typesafe/config/impl/SimpleConfigDocument.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigDocumentParser.hpp>
#include <com/typesafe/config/impl/ConfigNodeRoot.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/Tokenizer.hpp>
#include <com/typesafe/config/parser/ConfigDocument.hpp>
#include <java/io/StringReader.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>

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
com::typesafe::config::impl::SimpleConfigDocument::SimpleConfigDocument(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigDocument::SimpleConfigDocument(ConfigNodeRoot* parsedNode, ::com::typesafe::config::ConfigParseOptions* parseOptions) 
    : SimpleConfigDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(parsedNode,parseOptions);
}

void com::typesafe::config::impl::SimpleConfigDocument::ctor(ConfigNodeRoot* parsedNode, ::com::typesafe::config::ConfigParseOptions* parseOptions)
{
    super::ctor();
    configNodeTree = parsedNode;
    this->parseOptions = parseOptions;
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::SimpleConfigDocument::withValueText(::java::lang::String* path, ::java::lang::String* newValue)
{
    if(newValue == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"null value for "_j)->append(path)
            ->append(u" passed to withValueText"_j)->toString());

    auto origin = SimpleConfigOrigin::newSimple(u"single value parsing"_j);
    auto reader = new ::java::io::StringReader(newValue);
    auto tokens = Tokenizer::tokenize(origin, reader, npc(parseOptions)->getSyntax());
    auto parsedValue = ConfigDocumentParser::parseValue(tokens, origin, parseOptions);
    npc(reader)->close();
    return new SimpleConfigDocument(npc(configNodeTree)->setValue(path, parsedValue, npc(parseOptions)->getSyntax()), parseOptions);
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::SimpleConfigDocument::withValue(::java::lang::String* path, ::com::typesafe::config::ConfigValue* newValue)
{
    if(newValue == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"null value for "_j)->append(path)
            ->append(u" passed to withValue"_j)->toString());

    return withValueText(path, npc(npc(newValue)->render())->trim());
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::SimpleConfigDocument::withoutPath(::java::lang::String* path)
{
    return new SimpleConfigDocument(npc(configNodeTree)->setValue(path, nullptr, npc(parseOptions)->getSyntax()), parseOptions);
}

bool com::typesafe::config::impl::SimpleConfigDocument::hasPath(::java::lang::String* path)
{
    return npc(configNodeTree)->hasValue(path);
}

java::lang::String* com::typesafe::config::impl::SimpleConfigDocument::render()
{
    return npc(configNodeTree)->render();
}

bool com::typesafe::config::impl::SimpleConfigDocument::equals(::java::lang::Object* other)
{
    return dynamic_cast< ::com::typesafe::config::parser::ConfigDocument* >(other) != nullptr && npc(render())->equals(npc((java_cast< ::com::typesafe::config::parser::ConfigDocument* >(other)))->render());
}

int32_t com::typesafe::config::impl::SimpleConfigDocument::hashCode()
{
    return npc(render())->hashCode();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigDocument::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigDocument", 45);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigDocument::getClass0()
{
    return class_();
}

