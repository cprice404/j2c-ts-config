// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java
#include <com/typesafe/config/impl/Tokenizer_TokenIterator_WhitespaceSaver.hpp>

#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokenizer_TokenIterator.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::Tokenizer_TokenIterator_WhitespaceSaver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::Tokenizer_TokenIterator_WhitespaceSaver() 
    : Tokenizer_TokenIterator_WhitespaceSaver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::ctor()
{
    super::ctor();
    whitespace = new ::java::lang::StringBuilder();
    lastTokenWasSimpleValue = false;
}

void com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::add(int32_t c)
{
    npc(whitespace)->appendCodePoint(c);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::check(Token* t, ::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber)
{
    if(Tokenizer_TokenIterator::isSimpleValue(t)) {
        return nextIsASimpleValue(baseOrigin, lineNumber);
    } else {
        return nextIsNotASimpleValue(baseOrigin, lineNumber);
    }
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::nextIsNotASimpleValue(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber)
{
    lastTokenWasSimpleValue = false;
    return createWhitespaceTokenFromSaver(baseOrigin, lineNumber);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::nextIsASimpleValue(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber)
{
    auto t = createWhitespaceTokenFromSaver(baseOrigin, lineNumber);
    if(!lastTokenWasSimpleValue) {
        lastTokenWasSimpleValue = true;
    }
    return t;
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::createWhitespaceTokenFromSaver(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber)
{
    if(npc(whitespace)->length() > 0) {
        Token* t;
        if(lastTokenWasSimpleValue) {
            t = Tokens::newUnquotedText(Tokenizer_TokenIterator::lineOrigin(baseOrigin, lineNumber), npc(whitespace)->toString());
        } else {
            t = Tokens::newIgnoredWhitespace(Tokenizer_TokenIterator::lineOrigin(baseOrigin, lineNumber), npc(whitespace)->toString());
        }
        npc(whitespace)->setLength(0);
        return t;
    }
    return nullptr;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokenizer.TokenIterator.WhitespaceSaver", 64);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver::getClass0()
{
    return class_();
}

