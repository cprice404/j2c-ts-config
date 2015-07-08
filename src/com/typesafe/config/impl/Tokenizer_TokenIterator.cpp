// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java
#include <com/typesafe/config/impl/Tokenizer_TokenIterator.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_IO.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokenizer_ProblemException.hpp>
#include <com/typesafe/config/impl/Tokenizer_TokenIterator_WhitespaceSaver.hpp>
#include <com/typesafe/config/impl/Tokenizer.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/io/IOException.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/LinkedList.hpp>
#include <java/util/List.hpp>
#include <java/util/Queue.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

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
com::typesafe::config::impl::Tokenizer_TokenIterator::Tokenizer_TokenIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokenizer_TokenIterator::Tokenizer_TokenIterator(::com::typesafe::config::ConfigOrigin* origin, ::java::io::Reader* input, bool allowComments) 
    : Tokenizer_TokenIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,input,allowComments);
}

void com::typesafe::config::impl::Tokenizer_TokenIterator::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::io::Reader* input, bool allowComments)
{
    super::ctor();
    this->origin = java_cast< SimpleConfigOrigin* >(origin);
    this->input = input;
    this->allowComments = allowComments;
    this->buffer = new ::java::util::LinkedList();
    lineNumber = 1;
    lineOrigin_ = npc(this->origin)->withLineNumber(lineNumber);
    tokens = new ::java::util::LinkedList();
    npc(tokens)->add(Tokens::START());
    whitespaceSaver = new Tokenizer_TokenIterator_WhitespaceSaver();
}

int32_t com::typesafe::config::impl::Tokenizer_TokenIterator::nextCharRaw()
{
    if(npc(buffer)->isEmpty()) {
        try {
            return npc(input)->read();
        } catch (::java::io::IOException* e) {
            throw new ::com::typesafe::config::ConfigException_IO(origin, ::java::lang::StringBuilder().append(u"read error: "_j)->append(npc(e)->getMessage())->toString(), e);
        }
    } else {
        int32_t c = (npc(java_cast< ::java::lang::Integer* >(npc(buffer)->pop())))->intValue();
        return c;
    }
}

void com::typesafe::config::impl::Tokenizer_TokenIterator::putBack(int32_t c)
{
    if(npc(buffer)->size() > 2) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"bug: putBack() three times, undesirable look-ahead"_j);
    }
    npc(buffer)->push(::java::lang::Integer::valueOf(c));
}

bool com::typesafe::config::impl::Tokenizer_TokenIterator::isWhitespace(int32_t c)
{
    clinit();
    return ConfigImplUtil::isWhitespace(c);
}

bool com::typesafe::config::impl::Tokenizer_TokenIterator::isWhitespaceNotNewline(int32_t c)
{
    clinit();
    return c != u'\u000a' && ConfigImplUtil::isWhitespace(c);
}

bool com::typesafe::config::impl::Tokenizer_TokenIterator::startOfComment(int32_t c)
{
    if(c == -int32_t(1)) {
        return false;
    } else {
        if(allowComments) {
            if(c == u'#') {
                return true;
            } else if(c == u'/') {
                auto maybeSecondSlash = nextCharRaw();
                putBack(maybeSecondSlash);
                if(maybeSecondSlash == u'/') {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
}

int32_t com::typesafe::config::impl::Tokenizer_TokenIterator::nextCharAfterWhitespace(Tokenizer_TokenIterator_WhitespaceSaver* saver)
{
    for (; ; ) {
        auto c = nextCharRaw();
        if(c == -int32_t(1)) {
            return -int32_t(1);
        } else {
            if(isWhitespaceNotNewline(c)) {
                npc(saver)->add(c);
                continue;
            } else {
                return c;
            }
        }
    }
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::java::lang::String* message)
{
    return problem(u""_j, message, static_cast< ::java::lang::Throwable* >(nullptr));
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::java::lang::String* what, ::java::lang::String* message)
{
    return problem(what, message, static_cast< ::java::lang::Throwable* >(nullptr));
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes)
{
    return problem(what, message, suggestQuotes, static_cast< ::java::lang::Throwable* >(nullptr));
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::java::lang::String* what, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    return problem(lineOrigin_, what, message, cause);
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause)
{
    return problem(lineOrigin_, what, message, suggestQuotes, cause);
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    clinit();
    return problem(origin, what, message, false, cause);
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause)
{
    clinit();
    if(what == nullptr || message == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"internal error, creating bad ProblemException"_j);

    return new Tokenizer_ProblemException(Tokens::newProblem(origin, what, message, suggestQuotes, cause));
}

com::typesafe::config::impl::Tokenizer_ProblemException* com::typesafe::config::impl::Tokenizer_TokenIterator::problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* message)
{
    clinit();
    return problem(origin, u""_j, message, static_cast< ::java::lang::Throwable* >(nullptr));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Tokenizer_TokenIterator::lineOrigin(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber)
{
    clinit();
    return npc((java_cast< SimpleConfigOrigin* >(baseOrigin)))->withLineNumber(lineNumber);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullComment(int32_t firstChar)
{
    auto doubleSlash = false;
    if(firstChar == u'/') {
        auto discard = nextCharRaw();
        if(discard != u'/')
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"called pullComment but // not seen"_j);

        doubleSlash = true;
    }
    auto sb = new ::java::lang::StringBuilder();
    for (; ; ) {
        auto c = nextCharRaw();
        if(c == -int32_t(1) || c == u'\u000a') {
            putBack(c);
            if(doubleSlash)
                return Tokens::newCommentDoubleSlash(lineOrigin_, npc(sb)->toString());
            else
                return Tokens::newCommentHash(lineOrigin_, npc(sb)->toString());
        } else {
            npc(sb)->appendCodePoint(c);
        }
    }
}

java::lang::String*& com::typesafe::config::impl::Tokenizer_TokenIterator::firstNumberChars()
{
    clinit();
    return firstNumberChars_;
}
java::lang::String* com::typesafe::config::impl::Tokenizer_TokenIterator::firstNumberChars_;

java::lang::String*& com::typesafe::config::impl::Tokenizer_TokenIterator::numberChars()
{
    clinit();
    return numberChars_;
}
java::lang::String* com::typesafe::config::impl::Tokenizer_TokenIterator::numberChars_;

java::lang::String*& com::typesafe::config::impl::Tokenizer_TokenIterator::notInUnquotedText()
{
    clinit();
    return notInUnquotedText_;
}
java::lang::String* com::typesafe::config::impl::Tokenizer_TokenIterator::notInUnquotedText_;

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullUnquotedText()
{
    auto origin = lineOrigin_;
    auto sb = new ::java::lang::StringBuilder();
    auto c = nextCharRaw();
    while (true) {
        if(c == -int32_t(1)) {
            break;
        } else if(notInUnquotedText_->indexOf(c) >= 0) {
            break;
        } else if(isWhitespace(c)) {
            break;
        } else if(startOfComment(c)) {
            break;
        } else {
            npc(sb)->appendCodePoint(c);
        }
        if(npc(sb)->length() == 4) {
            auto s = npc(sb)->toString();
            if(npc(s)->equals(u"true"_j))
                return Tokens::newBoolean(origin, true);
            else if(npc(s)->equals(u"null"_j))
                return Tokens::newNull(origin);

        } else if(npc(sb)->length() == 5) {
            auto s = npc(sb)->toString();
            if(npc(s)->equals(u"false"_j))
                return Tokens::newBoolean(origin, false);

        }
        c = nextCharRaw();
    }
    putBack(c);
    auto s = npc(sb)->toString();
    return Tokens::newUnquotedText(origin, s);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullNumber(int32_t firstChar) /* throws(ProblemException) */
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->appendCodePoint(firstChar);
    auto containedDecimalOrE = false;
    auto c = nextCharRaw();
    while (c != -int32_t(1) && numberChars_->indexOf(c) >= 0) {
        if(c == u'.' || c == u'e' || c == u'E')
            containedDecimalOrE = true;

        npc(sb)->appendCodePoint(c);
        c = nextCharRaw();
    }
    putBack(c);
    auto s = npc(sb)->toString();
    try {
        if(containedDecimalOrE) {
            return Tokens::newDouble(lineOrigin_, ::java::lang::Double::parseDouble(s), s);
        } else {
            return Tokens::newLong(lineOrigin_, ::java::lang::Long::parseLong(s), s);
        }
    } catch (::java::lang::NumberFormatException* e) {
        for(auto u : *npc(npc(s)->toCharArray_())) {
            if(notInUnquotedText_->indexOf(static_cast< int32_t >(u)) >= 0)
                throw problem(Tokenizer::asString(u), ::java::lang::StringBuilder().append(u"Reserved character '"_j)->append(Tokenizer::asString(u))
                    ->append(u"' is not allowed outside quotes"_j)->toString(), true);

        }
        return Tokens::newUnquotedText(lineOrigin_, s);
    }
}

void com::typesafe::config::impl::Tokenizer_TokenIterator::pullEscapeSequence(::java::lang::StringBuilder* sb, ::java::lang::StringBuilder* sbOrig) /* throws(ProblemException) */
{
    auto escaped = nextCharRaw();
    if(escaped == -int32_t(1))
        throw problem(u"End of input but backslash in string had nothing after it"_j);

    npc(sbOrig)->appendCodePoint(u'\\');
    npc(sbOrig)->appendCodePoint(escaped);
    switch (escaped) {
    case u'"':
        npc(sb)->append(u'"');
        break;
    case u'\\':
        npc(sb)->append(u'\\');
        break;
    case u'/':
        npc(sb)->append(u'/');
        break;
    case u'b':
        npc(sb)->append(u'\u0008');
        break;
    case u'f':
        npc(sb)->append(u'\u000c');
        break;
    case u'n':
        npc(sb)->append(u'\u000a');
        break;
    case u'r':
        npc(sb)->append(u'\u000d');
        break;
    case u't':
        npc(sb)->append(u'\u0009');
        break;
    case u'u': {
            auto a = new ::char16_tArray(int32_t(4));
            for (auto i = int32_t(0); i < 4; ++i) {
                auto c = nextCharRaw();
                if(c == -int32_t(1))
                    throw problem(u"End of input but expecting 4 hex digits for \\uXXXX escape"_j);

                (*a)[i] = static_cast< char16_t >(c);
            }
            auto digits = new ::java::lang::String(a);
            npc(sbOrig)->append(a);
            try {
                npc(sb)->appendCodePoint(::java::lang::Integer::parseInt(digits, 16));
            } catch (::java::lang::NumberFormatException* e) {
                throw problem(digits, ::java::lang::String::format(u"Malformed hex digits after \\u escape in string: '%s'"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(digits)})), static_cast< ::java::lang::Throwable* >(e));
            }
        }
        break;
    default:
        throw problem(Tokenizer::asString(escaped), ::java::lang::String::format(u"backslash followed by '%s', this is not a valid escape sequence (quoted strings use JSON escaping, so use double-backslash \\\\ for literal backslash)"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(Tokenizer::asString(escaped))})));
    }

}

void com::typesafe::config::impl::Tokenizer_TokenIterator::appendTripleQuotedString(::java::lang::StringBuilder* sb, ::java::lang::StringBuilder* sbOrig) /* throws(ProblemException) */
{
    auto consecutiveQuotes = int32_t(0);
    for (; ; ) {
        auto c = nextCharRaw();
        if(c == u'"') {
            consecutiveQuotes += 1;
        } else if(consecutiveQuotes >= 3) {
            npc(sb)->setLength(npc(sb)->length() - int32_t(3));
            putBack(c);
            break;
        } else {
            consecutiveQuotes = 0;
            if(c == -int32_t(1))
                throw problem(u"End of input but triple-quoted string was still open"_j);
            else if(c == u'\u000a') {
                lineNumber += 1;
                lineOrigin_ = npc(origin)->withLineNumber(lineNumber);
            }
        }
        npc(sb)->appendCodePoint(c);
        npc(sbOrig)->appendCodePoint(c);
    }
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullQuotedString() /* throws(ProblemException) */
{
    auto sb = new ::java::lang::StringBuilder();
    auto sbOrig = new ::java::lang::StringBuilder();
    npc(sbOrig)->appendCodePoint(u'"');
    while (true) {
        auto c = nextCharRaw();
        if(c == -int32_t(1))
            throw problem(u"End of input but string quote was still open"_j);

        if(c == u'\\') {
            pullEscapeSequence(sb, sbOrig);
        } else if(c == u'"') {
            npc(sbOrig)->appendCodePoint(c);
            break;
        } else if(::java::lang::Character::isISOControl(c)) {
            throw problem(Tokenizer::asString(c), ::java::lang::StringBuilder().append(u"JSON does not allow unescaped "_j)->append(Tokenizer::asString(c))
                ->append(u" in quoted strings, use a backslash escape"_j)->toString());
        } else {
            npc(sb)->appendCodePoint(c);
            npc(sbOrig)->appendCodePoint(c);
        }
    }
    if(npc(sb)->length() == 0) {
        auto third = nextCharRaw();
        if(third == u'"') {
            npc(sbOrig)->appendCodePoint(third);
            appendTripleQuotedString(sb, sbOrig);
        } else {
            putBack(third);
        }
    }
    return Tokens::newString(lineOrigin_, npc(sb)->toString(), npc(sbOrig)->toString());
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullPlusEquals() /* throws(ProblemException) */
{
    auto c = nextCharRaw();
    if(c != u'=') {
        throw problem(Tokenizer::asString(c), ::java::lang::StringBuilder().append(u"'+' not followed by =, '"_j)->append(Tokenizer::asString(c))
            ->append(u"' not allowed after '+'"_j)->toString(), true);
    }
    return Tokens::PLUS_EQUALS();
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullSubstitution() /* throws(ProblemException) */
{
    auto origin = lineOrigin_;
    auto c = nextCharRaw();
    if(c != u'{') {
        throw problem(Tokenizer::asString(c), ::java::lang::StringBuilder().append(u"'$' not followed by {, '"_j)->append(Tokenizer::asString(c))
            ->append(u"' not allowed after '$'"_j)->toString(), true);
    }
    auto optional = false;
    c = nextCharRaw();
    if(c == u'?') {
        optional = true;
    } else {
        putBack(c);
    }
    auto saver = new Tokenizer_TokenIterator_WhitespaceSaver();
    ::java::util::List* expression = new ::java::util::ArrayList();
    Token* t;
    do {
        t = pullNextToken(saver);
        if(t == Tokens::CLOSE_CURLY()) {
            break;
        } else if(t == Tokens::END()) {
            throw problem(origin, u"Substitution ${ was not closed with a }"_j);
        } else {
            auto whitespace = npc(saver)->check(t, origin, lineNumber);
            if(whitespace != nullptr)
                npc(expression)->add(whitespace);

            npc(expression)->add(t);
        }
    } while (true);
    return Tokens::newSubstitution(origin, optional, expression);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::pullNextToken(Tokenizer_TokenIterator_WhitespaceSaver* saver) /* throws(ProblemException) */
{
    auto c = nextCharAfterWhitespace(saver);
    if(c == -int32_t(1)) {
        return Tokens::END();
    } else if(c == u'\u000a') {
        auto line = Tokens::newLine(lineOrigin_);
        lineNumber += 1;
        lineOrigin_ = npc(origin)->withLineNumber(lineNumber);
        return line;
    } else {
        Token* t;
        if(startOfComment(c)) {
            t = pullComment(c);
        } else {
            switch (c) {
            case u'"':
                t = pullQuotedString();
                break;
            case u'$':
                t = pullSubstitution();
                break;
            case u':':
                t = Tokens::COLON();
                break;
            case u',':
                t = Tokens::COMMA();
                break;
            case u'=':
                t = Tokens::EQUALS();
                break;
            case u'{':
                t = Tokens::OPEN_CURLY();
                break;
            case u'}':
                t = Tokens::CLOSE_CURLY();
                break;
            case u'[':
                t = Tokens::OPEN_SQUARE();
                break;
            case u']':
                t = Tokens::CLOSE_SQUARE();
                break;
            case u'+':
                t = pullPlusEquals();
                break;
            default:
                t = nullptr;
                break;
            }

            if(t == nullptr) {
                if(firstNumberChars_->indexOf(c) >= 0) {
                    t = pullNumber(c);
                } else if(notInUnquotedText_->indexOf(c) >= 0) {
                    throw problem(Tokenizer::asString(c), ::java::lang::StringBuilder().append(u"Reserved character '"_j)->append(Tokenizer::asString(c))
                        ->append(u"' is not allowed outside quotes"_j)->toString(), true);
                } else {
                    putBack(c);
                    t = pullUnquotedText();
                }
            }
        }
        if(t == nullptr)
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"bug: failed to generate next token"_j);

        return t;
    }
}

bool com::typesafe::config::impl::Tokenizer_TokenIterator::isSimpleValue(Token* t)
{
    clinit();
    if(Tokens::isSubstitution(t) || Tokens::isUnquotedText(t) || Tokens::isValue(t)) {
        return true;
    } else {
        return false;
    }
}

void com::typesafe::config::impl::Tokenizer_TokenIterator::queueNextToken() /* throws(ProblemException) */
{
    auto t = pullNextToken(whitespaceSaver);
    auto whitespace = npc(whitespaceSaver)->check(t, origin, lineNumber);
    if(whitespace != nullptr)
        npc(tokens)->add(whitespace);

    npc(tokens)->add(t);
}

bool com::typesafe::config::impl::Tokenizer_TokenIterator::hasNext()
{
    return !npc(tokens)->isEmpty();
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokenizer_TokenIterator::next()
{
    auto t = java_cast< Token* >(npc(tokens)->remove());
    if(npc(tokens)->isEmpty() && t != Tokens::END()) {
        try {
            queueNextToken();
        } catch (Tokenizer_ProblemException* e) {
            npc(tokens)->add(npc(e)->problem());
        }
        if(npc(tokens)->isEmpty())
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"bug: tokens queue should not be empty here"_j);

    }
    return t;
}

void com::typesafe::config::impl::Tokenizer_TokenIterator::remove()
{
    throw new ::java::lang::UnsupportedOperationException(u"Does not make sense to remove items from token stream"_j);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokenizer_TokenIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokenizer.TokenIterator", 48);
    return c;
}

void com::typesafe::config::impl::Tokenizer_TokenIterator::clinit()
{
struct string_init_ {
    string_init_() {
    firstNumberChars_ = u"0123456789-"_j;
    numberChars_ = u"0123456789eE+-."_j;
    notInUnquotedText_ = u"$\"{}[]:=,+#`^?!@*&\\"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* com::typesafe::config::impl::Tokenizer_TokenIterator::getClass0()
{
    return class_();
}

