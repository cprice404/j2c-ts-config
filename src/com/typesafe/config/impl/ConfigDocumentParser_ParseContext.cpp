// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDocumentParser.java
#include <com/typesafe/config/impl/ConfigDocumentParser_ParseContext.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_Parse.hpp>
#include <com/typesafe/config/ConfigException.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ConfigIncludeKind.hpp>
#include <com/typesafe/config/impl/ConfigNodeArray_.hpp>
#include <com/typesafe/config/impl/ConfigNodeComment.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeConcatenation.hpp>
#include <com/typesafe/config/impl/ConfigNodeField.hpp>
#include <com/typesafe/config/impl/ConfigNodeInclude.hpp>
#include <com/typesafe/config/impl/ConfigNodeObject.hpp>
#include <com/typesafe/config/impl/ConfigNodePath.hpp>
#include <com/typesafe/config/impl/ConfigNodeRoot.hpp>
#include <com/typesafe/config/impl/ConfigNodeSimpleValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PathParser.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/Tokens.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Stack.hpp>

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
com::typesafe::config::impl::ConfigDocumentParser_ParseContext::ConfigDocumentParser_ParseContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigDocumentParser_ParseContext::ConfigDocumentParser_ParseContext(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ::java::util::Iterator* tokens) 
    : ConfigDocumentParser_ParseContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(flavor,origin,tokens);
}

void com::typesafe::config::impl::ConfigDocumentParser_ParseContext::ctor(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ::java::util::Iterator* tokens)
{
    super::ctor();
    lineNumber = 1;
    buffer = new ::java::util::Stack();
    this->tokens = tokens;
    this->flavor = flavor;
    this->equalsCount = 0;
    this->baseOrigin = origin;
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::popToken()
{
    if(npc(buffer)->isEmpty()) {
        return java_cast< Token* >(npc(tokens)->next());
    }
    return java_cast< Token* >(npc(buffer)->pop());
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::nextToken()
{
    auto t = popToken();
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
        if(Tokens::isUnquotedText(t) && !isUnquotedWhitespace(t)) {
            throw parseError(::java::lang::StringBuilder().append(u"Token not allowed in valid JSON: '"_j)->append(Tokens::getUnquotedText(t))
                ->append(u"'"_j)->toString());
        } else if(Tokens::isSubstitution(t)) {
            throw parseError(u"Substitutions (${} syntax) not allowed in JSON"_j);
        }
    }
    return t;
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::nextTokenCollectingWhitespace(::java::util::Collection* nodes)
{
    while (true) {
        auto t = nextToken();
        if(Tokens::isIgnoredWhitespace(t) || Tokens::isNewline(t) || isUnquotedWhitespace(t)) {
            npc(nodes)->add(new ConfigNodeSingleToken(t));
            if(Tokens::isNewline(t)) {
                lineNumber = npc(t)->lineNumber() + int32_t(1);
            }
        } else if(Tokens::isComment(t)) {
            npc(nodes)->add(new ConfigNodeComment(t));
        } else {
            auto newNumber = npc(t)->lineNumber();
            if(newNumber >= 0)
                lineNumber = newNumber;

            return t;
        }
    }
}

void com::typesafe::config::impl::ConfigDocumentParser_ParseContext::putBack(Token* token)
{
    npc(buffer)->push(token);
}

bool com::typesafe::config::impl::ConfigDocumentParser_ParseContext::checkElementSeparator(::java::util::Collection* nodes)
{
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
        auto t = nextTokenCollectingWhitespace(nodes);
        if(t == Tokens::COMMA()) {
            npc(nodes)->add(new ConfigNodeSingleToken(t));
            return true;
        } else {
            putBack(t);
            return false;
        }
    } else {
        auto sawSeparatorOrNewline = false;
        auto t = nextToken();
        while (true) {
            if(Tokens::isIgnoredWhitespace(t) || isUnquotedWhitespace(t)) {
                npc(nodes)->add(new ConfigNodeSingleToken(t));
            } else if(Tokens::isComment(t)) {
                npc(nodes)->add(new ConfigNodeComment(t));
            } else if(Tokens::isNewline(t)) {
                sawSeparatorOrNewline = true;
                lineNumber++;
                npc(nodes)->add(new ConfigNodeSingleToken(t));
            } else if(t == Tokens::COMMA()) {
                npc(nodes)->add(new ConfigNodeSingleToken(t));
                return true;
            } else {
                putBack(t);
                return sawSeparatorOrNewline;
            }
            t = nextToken();
        }
    }
}

com::typesafe::config::impl::AbstractConfigNodeValue* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::consolidateValues(::java::util::Collection* nodes)
{
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON)
        return nullptr;

    auto values = new ::java::util::ArrayList();
    auto valueCount = int32_t(0);
    auto t = nextTokenCollectingWhitespace(nodes);
    while (true) {
        AbstractConfigNodeValue* v = nullptr;
        if(Tokens::isIgnoredWhitespace(t)) {
            npc(values)->add(new ConfigNodeSingleToken(t));
            t = nextToken();
            continue;
        } else if(Tokens::isValue(t) || Tokens::isUnquotedText(t) || Tokens::isSubstitution(t)|| t == Tokens::OPEN_CURLY() || t == Tokens::OPEN_SQUARE()) {
            v = parseValue(t);
            valueCount++;
        } else {
            break;
        }
        if(v == nullptr)
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"no value"_j);

        npc(values)->add(v);
        t = nextToken();
    }
    putBack(t);
    if(valueCount < 2) {
        AbstractConfigNodeValue* value = nullptr;
        for (auto _i = npc(values)->iterator(); _i->hasNext(); ) {
            AbstractConfigNode* node = java_cast< AbstractConfigNode* >(_i->next());
            {
                if(dynamic_cast< AbstractConfigNodeValue* >(node) != nullptr)
                    value = java_cast< AbstractConfigNodeValue* >(node);
                else if(value == nullptr)
                    npc(nodes)->add(node);
                else
                    putBack(java_cast< Token* >((new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(npc(node)->tokens())))->get(0)));
            }
        }
        return value;
    }
    for (auto i = npc(values)->size() - int32_t(1); i >= 0; i--) {
        if(dynamic_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(values)->get(i))) != nullptr) {
            putBack(npc((java_cast< ConfigNodeSingleToken* >(java_cast< AbstractConfigNode* >(npc(values)->get(i)))))->token());
            npc(values)->remove(i);
        } else {
            break;
        }
    }
    return new ConfigNodeConcatenation(values);
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseError(::java::lang::String* message)
{
    return parseError(message, nullptr);
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseError(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    return new ::com::typesafe::config::ConfigException_Parse(npc(baseOrigin)->withLineNumber(lineNumber), message, cause);
}

java::lang::String* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::addQuoteSuggestion(::java::lang::String* badToken, ::java::lang::String* message)
{
    return addQuoteSuggestion(nullptr, equalsCount > 0, badToken, message);
}

java::lang::String* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::addQuoteSuggestion(Path* lastPath, bool insideEquals, ::java::lang::String* badToken, ::java::lang::String* message)
{
    auto previousFieldName = lastPath != nullptr ? npc(lastPath)->render() : static_cast< ::java::lang::String* >(nullptr);
    ::java::lang::String* part;
    if(npc(badToken)->equals(npc(Tokens::END())->toString())) {
        if(previousFieldName != nullptr)
            part = ::java::lang::StringBuilder().append(message)->append(u" (if you intended '"_j)
                ->append(previousFieldName)
                ->append(u"' to be part of a value, instead of a key, "_j)
                ->append(u"try adding double quotes around the whole value"_j)->toString();
        else
            return message;
    } else {
        if(previousFieldName != nullptr) {
            part = ::java::lang::StringBuilder().append(message)->append(u" (if you intended "_j)
                ->append(badToken)
                ->append(u" to be part of the value for '"_j)
                ->append(previousFieldName)
                ->append(u"', "_j)
                ->append(u"try enclosing the value in double quotes"_j)->toString();
        } else {
            part = ::java::lang::StringBuilder().append(message)->append(u" (if you intended "_j)
                ->append(badToken)
                ->append(u" to be part of a key or string value, "_j)
                ->append(u"try enclosing the key or value in double quotes"_j)->toString();
        }
    }
    if(insideEquals)
        return ::java::lang::StringBuilder().append(part)->append(u", or you may be able to rename the file .properties rather than .conf)"_j)->toString();
    else
        return ::java::lang::StringBuilder().append(part)->append(u")"_j)->toString();
}

com::typesafe::config::impl::AbstractConfigNodeValue* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseValue(Token* t)
{
    AbstractConfigNodeValue* v = nullptr;
    auto startingEqualsCount = equalsCount;
    if(Tokens::isValue(t) || Tokens::isUnquotedText(t) || Tokens::isSubstitution(t)) {
        v = new ConfigNodeSimpleValue(t);
    } else if(t == Tokens::OPEN_CURLY()) {
        v = parseObject(true);
    } else if(t == Tokens::OPEN_SQUARE()) {
        v = parseArray_();
    } else {
        throw parseError(addQuoteSuggestion(npc(t)->toString(), ::java::lang::StringBuilder().append(u"Expecting a value but got wrong token: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString()));
    }
    if(equalsCount != startingEqualsCount)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Bug in config parser: unbalanced equals count"_j);

    return v;
}

com::typesafe::config::impl::ConfigNodePath* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseKey(Token* token)
{
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
        if(Tokens::isValueWithType(token, ::com::typesafe::config::ConfigValueType::STRING)) {
            return PathParser::parsePathNodeExpression(npc(::java::util::Collections::singletonList(token))->iterator(), nullptr);
        } else {
            throw parseError(::java::lang::StringBuilder().append(u"Expecting close brace } or a field name here, got "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
        }
    } else {
        ::java::util::List* expression = new ::java::util::ArrayList();
        auto t = token;
        while (Tokens::isValue(t) || Tokens::isUnquotedText(t)) {
            npc(expression)->add(t);
            t = nextToken();
        }
        if(npc(expression)->isEmpty()) {
            throw parseError(::java::lang::StringBuilder().append(u"expecting a close brace or a field name here, got "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
        }
        putBack(t);
        return PathParser::parsePathNodeExpression(npc(expression)->iterator(), nullptr);
    }
}

bool com::typesafe::config::impl::ConfigDocumentParser_ParseContext::isIncludeKeyword(Token* t)
{
    clinit();
    return Tokens::isUnquotedText(t) && npc(Tokens::getUnquotedText(t))->equals(u"include"_j);
}

bool com::typesafe::config::impl::ConfigDocumentParser_ParseContext::isUnquotedWhitespace(Token* t)
{
    clinit();
    if(!Tokens::isUnquotedText(t))
        return false;

    auto s = Tokens::getUnquotedText(t);
    for (auto i = int32_t(0); i < npc(s)->length(); ++i) {
        auto c = npc(s)->charAt(i);
        if(!ConfigImplUtil::isWhitespace(c))
            return false;

    }
    return true;
}

bool com::typesafe::config::impl::ConfigDocumentParser_ParseContext::isKeyValueSeparatorToken(Token* t)
{
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
        return t == Tokens::COLON();
    } else {
        return t == Tokens::COLON() || t == Tokens::EQUALS() || t == Tokens::PLUS_EQUALS();
    }
}

com::typesafe::config::impl::ConfigNodeInclude* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseInclude(::java::util::ArrayList* children)
{
    auto t = nextTokenCollectingWhitespace(children);
    if(Tokens::isUnquotedText(t)) {
        auto kindText = Tokens::getUnquotedText(t);
        ConfigIncludeKind* kind;
        if(npc(kindText)->equals(u"url("_j)) {
            kind = ConfigIncludeKind::URL;
        } else if(npc(kindText)->equals(u"file("_j)) {
            kind = ConfigIncludeKind::FILE;
        } else if(npc(kindText)->equals(u"classpath("_j)) {
            kind = ConfigIncludeKind::CLASSPATH;
        } else {
            throw parseError(::java::lang::StringBuilder().append(u"expecting include parameter to be quoted filename, file(), classpath(), or url(). No spaces are allowed before the open paren. Not expecting: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
        }
        npc(children)->add(new ConfigNodeSingleToken(t));
        t = nextTokenCollectingWhitespace(children);
        if(!Tokens::isValueWithType(t, ::com::typesafe::config::ConfigValueType::STRING)) {
            throw parseError(::java::lang::StringBuilder().append(u"expecting a quoted string inside file(), classpath(), or url(), rather than: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
        }
        npc(children)->add(new ConfigNodeSimpleValue(t));
        t = nextTokenCollectingWhitespace(children);
        if(Tokens::isUnquotedText(t) && npc(Tokens::getUnquotedText(t))->equals(u")"_j)) {
        } else {
            throw parseError(::java::lang::StringBuilder().append(u"expecting a close parentheses ')' here, not: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
        }
        return new ConfigNodeInclude(children, kind);
    } else if(Tokens::isValueWithType(t, ::com::typesafe::config::ConfigValueType::STRING)) {
        npc(children)->add(new ConfigNodeSimpleValue(t));
        return new ConfigNodeInclude(children, ConfigIncludeKind::HEURISTIC);
    } else {
        throw parseError(::java::lang::StringBuilder().append(u"include keyword is not followed by a quoted string, but by: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
    }
}

com::typesafe::config::impl::ConfigNodeComplexValue* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseObject(bool hadOpenCurly)
{
    auto afterComma = false;
    Path* lastPath = nullptr;
    auto lastInsideEquals = false;
    auto objectNodes = new ::java::util::ArrayList();
    ::java::util::ArrayList* keyValueNodes;
    auto keys = new ::java::util::HashMap();
    if(hadOpenCurly)
        npc(objectNodes)->add(new ConfigNodeSingleToken(Tokens::OPEN_CURLY()));

    while (true) {
        auto t = nextTokenCollectingWhitespace(objectNodes);
        if(t == Tokens::CLOSE_CURLY()) {
            if(flavor == ::com::typesafe::config::ConfigSyntax::JSON && afterComma) {
                throw parseError(addQuoteSuggestion(npc(t)->toString(), u"expecting a field name after a comma, got a close brace } instead"_j));
            } else if(!hadOpenCurly) {
                throw parseError(addQuoteSuggestion(npc(t)->toString(), u"unbalanced close brace '}' with no open brace"_j));
            }
            npc(objectNodes)->add(new ConfigNodeSingleToken(Tokens::CLOSE_CURLY()));
            break;
        } else if(t == Tokens::END() && !hadOpenCurly) {
            putBack(t);
            break;
        } else if(flavor != ::com::typesafe::config::ConfigSyntax::JSON && isIncludeKeyword(t)) {
            auto includeNodes = new ::java::util::ArrayList();
            npc(includeNodes)->add(new ConfigNodeSingleToken(t));
            npc(objectNodes)->add(parseInclude(includeNodes));
            afterComma = false;
        } else {
            keyValueNodes = new ::java::util::ArrayList();
            auto keyToken = t;
            auto path = parseKey(keyToken);
            npc(keyValueNodes)->add(path);
            auto afterKey = nextTokenCollectingWhitespace(keyValueNodes);
            auto insideEquals = false;
            AbstractConfigNodeValue* nextValue;
            if(flavor == ::com::typesafe::config::ConfigSyntax::CONF && afterKey == Tokens::OPEN_CURLY()) {
                nextValue = parseValue(afterKey);
            } else {
                if(!isKeyValueSeparatorToken(afterKey)) {
                    throw parseError(addQuoteSuggestion(npc(afterKey)->toString(), ::java::lang::StringBuilder().append(u"Key '"_j)->append(npc(path)->render())
                        ->append(u"' may not be followed by token: "_j)
                        ->append(static_cast< ::java::lang::Object* >(afterKey))->toString()));
                }
                npc(keyValueNodes)->add(new ConfigNodeSingleToken(afterKey));
                if(afterKey == Tokens::EQUALS()) {
                    insideEquals = true;
                    equalsCount += 1;
                }
                nextValue = consolidateValues(keyValueNodes);
                if(nextValue == nullptr) {
                    nextValue = parseValue(nextTokenCollectingWhitespace(keyValueNodes));
                }
            }
            npc(keyValueNodes)->add(nextValue);
            if(insideEquals) {
                equalsCount -= 1;
            }
            lastInsideEquals = insideEquals;
            auto key = npc(npc(path)->value())->first();
            auto remaining = npc(npc(path)->value())->remainder();
            if(remaining == nullptr) {
                auto existing = java_cast< ::java::lang::Boolean* >(npc(keys)->get(key));
                if(existing != nullptr) {
                    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
                        throw parseError(::java::lang::StringBuilder().append(u"JSON does not allow duplicate fields: '"_j)->append(key)
                            ->append(u"' was already seen"_j)->toString());
                    }
                }
                npc(keys)->put(key, ::java::lang::Boolean::valueOf(true));
            } else {
                if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"somehow got multi-element path in JSON mode"_j);
                }
                npc(keys)->put(key, ::java::lang::Boolean::valueOf(true));
            }
            afterComma = false;
            npc(objectNodes)->add(new ConfigNodeField(keyValueNodes));
        }
        if(checkElementSeparator(objectNodes)) {
            afterComma = true;
        } else {
            t = nextTokenCollectingWhitespace(objectNodes);
            if(t == Tokens::CLOSE_CURLY()) {
                if(!hadOpenCurly) {
                    throw parseError(addQuoteSuggestion(lastPath, lastInsideEquals, npc(t)->toString(), u"unbalanced close brace '}' with no open brace"_j));
                }
                npc(objectNodes)->add(new ConfigNodeSingleToken(t));
                break;
            } else if(hadOpenCurly) {
                throw parseError(addQuoteSuggestion(lastPath, lastInsideEquals, npc(t)->toString(), ::java::lang::StringBuilder().append(u"Expecting close brace } or a comma, got "_j)->append(static_cast< ::java::lang::Object* >(t))->toString()));
            } else {
                if(t == Tokens::END()) {
                    putBack(t);
                    break;
                } else {
                    throw parseError(addQuoteSuggestion(lastPath, lastInsideEquals, npc(t)->toString(), ::java::lang::StringBuilder().append(u"Expecting end of input or a comma, got "_j)->append(static_cast< ::java::lang::Object* >(t))->toString()));
                }
            }
        }
    }
    return new ConfigNodeObject(objectNodes);
}

com::typesafe::config::impl::ConfigNodeComplexValue* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseArray_()
{
    auto children = new ::java::util::ArrayList();
    npc(children)->add(new ConfigNodeSingleToken(Tokens::OPEN_SQUARE()));
    Token* t;
    auto nextValue = consolidateValues(children);
    if(nextValue != nullptr) {
        npc(children)->add(nextValue);
    } else {
        t = nextTokenCollectingWhitespace(children);
        if(t == Tokens::CLOSE_SQUARE()) {
            npc(children)->add(new ConfigNodeSingleToken(t));
            return new ConfigNodeArray_(children);
        } else if(Tokens::isValue(t) || t == Tokens::OPEN_CURLY() || t == Tokens::OPEN_SQUARE() || Tokens::isUnquotedText(t) || Tokens::isSubstitution(t)) {
            nextValue = parseValue(t);
            npc(children)->add(nextValue);
        } else {
            throw parseError(::java::lang::StringBuilder().append(u"List should have ] or a first element after the open [, instead had token: "_j)->append(static_cast< ::java::lang::Object* >(t))
                ->append(u" (if you want "_j)
                ->append(static_cast< ::java::lang::Object* >(t))
                ->append(u" to be part of a string value, then double-quote it)"_j)->toString());
        }
    }
    while (true) {
        if(checkElementSeparator(children)) {
        } else {
            t = nextTokenCollectingWhitespace(children);
            if(t == Tokens::CLOSE_SQUARE()) {
                npc(children)->add(new ConfigNodeSingleToken(t));
                return new ConfigNodeArray_(children);
            } else {
                throw parseError(::java::lang::StringBuilder().append(u"List should have ended with ] or had a comma, instead had token: "_j)->append(static_cast< ::java::lang::Object* >(t))
                    ->append(u" (if you want "_j)
                    ->append(static_cast< ::java::lang::Object* >(t))
                    ->append(u" to be part of a string value, then double-quote it)"_j)->toString());
            }
        }
        nextValue = consolidateValues(children);
        if(nextValue != nullptr) {
            npc(children)->add(nextValue);
        } else {
            t = nextTokenCollectingWhitespace(children);
            if(Tokens::isValue(t) || t == Tokens::OPEN_CURLY() || t == Tokens::OPEN_SQUARE() || Tokens::isUnquotedText(t) || Tokens::isSubstitution(t)) {
                nextValue = parseValue(t);
                npc(children)->add(nextValue);
            } else if(flavor != ::com::typesafe::config::ConfigSyntax::JSON && t == Tokens::CLOSE_SQUARE()) {
                putBack(t);
            } else {
                throw parseError(::java::lang::StringBuilder().append(u"List should have had new element after a comma, instead had token: "_j)->append(static_cast< ::java::lang::Object* >(t))
                    ->append(u" (if you want the comma or "_j)
                    ->append(static_cast< ::java::lang::Object* >(t))
                    ->append(u" to be part of a string value, then double-quote it)"_j)->toString());
            }
        }
    }
}

com::typesafe::config::impl::ConfigNodeRoot* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parse()
{
    auto children = new ::java::util::ArrayList();
    auto t = nextToken();
    if(t == Tokens::START()) {
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"token stream did not begin with START, had "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
    }
    t = nextTokenCollectingWhitespace(children);
    AbstractConfigNode* result = nullptr;
    auto missingCurly = false;
    if(t == Tokens::OPEN_CURLY() || t == Tokens::OPEN_SQUARE()) {
        result = parseValue(t);
    } else {
        if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
            if(t == Tokens::END()) {
                throw parseError(u"Empty document"_j);
            } else {
                throw parseError(::java::lang::StringBuilder().append(u"Document must have an object or array at root, unexpected token: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
            }
        } else {
            putBack(t);
            missingCurly = true;
            result = parseObject(false);
        }
    }
    if(dynamic_cast< ConfigNodeObject* >(result) != nullptr && missingCurly) {
        npc(children)->addAll(npc((java_cast< ConfigNodeComplexValue* >(result)))->children());
    } else {
        npc(children)->add(result);
    }
    t = nextTokenCollectingWhitespace(children);
    if(t == Tokens::END()) {
        if(missingCurly) {
            return new ConfigNodeRoot(::java::util::Collections::singletonList(java_cast< AbstractConfigNode* >(new ConfigNodeObject(children))), baseOrigin);
        } else {
            return new ConfigNodeRoot(children, baseOrigin);
        }
    } else {
        throw parseError(::java::lang::StringBuilder().append(u"Document has trailing tokens after first object or array: "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
    }
}

com::typesafe::config::impl::AbstractConfigNodeValue* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::parseSingleValue()
{
    auto t = nextToken();
    if(t == Tokens::START()) {
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"token stream did not begin with START, had "_j)->append(static_cast< ::java::lang::Object* >(t))->toString());
    }
    t = nextToken();
    if(Tokens::isIgnoredWhitespace(t) || Tokens::isNewline(t) || isUnquotedWhitespace(t)|| Tokens::isComment(t)) {
        throw parseError(u"The value from withValueText cannot have leading or trailing newlines, whitespace, or comments"_j);
    }
    if(t == Tokens::END()) {
        throw parseError(u"Empty value"_j);
    }
    if(flavor == ::com::typesafe::config::ConfigSyntax::JSON) {
        auto node = parseValue(t);
        t = nextToken();
        if(t == Tokens::END()) {
            return node;
        } else {
            throw parseError(::java::lang::StringBuilder().append(u"Parsing JSON and the value set in withValueText was either a concatenation or "_j)->append(u"had trailing whitespace, newlines, or comments"_j)->toString());
        }
    } else {
        putBack(t);
        auto nodes = new ::java::util::ArrayList();
        auto node = consolidateValues(nodes);
        t = nextToken();
        if(t == Tokens::END()) {
            return node;
        } else {
            throw parseError(u"The value from withValueText cannot have leading or trailing newlines, whitespace, or comments"_j);
        }
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigDocumentParser.ParseContext", 58);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigDocumentParser_ParseContext::getClass0()
{
    return class_();
}

