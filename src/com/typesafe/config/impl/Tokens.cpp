// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java
#include <com/typesafe/config/impl/Tokens.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigBoolean.hpp>
#include <com/typesafe/config/impl/ConfigNull.hpp>
#include <com/typesafe/config/impl/ConfigNumber.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <com/typesafe/config/impl/Token.hpp>
#include <com/typesafe/config/impl/TokenType.hpp>
#include <com/typesafe/config/impl/Tokens_Comment_DoubleSlashComment.hpp>
#include <com/typesafe/config/impl/Tokens_Comment_HashComment.hpp>
#include <com/typesafe/config/impl/Tokens_Comment.hpp>
#include <com/typesafe/config/impl/Tokens_IgnoredWhitespace.hpp>
#include <com/typesafe/config/impl/Tokens_Line.hpp>
#include <com/typesafe/config/impl/Tokens_Problem.hpp>
#include <com/typesafe/config/impl/Tokens_Substitution.hpp>
#include <com/typesafe/config/impl/Tokens_UnquotedText.hpp>
#include <com/typesafe/config/impl/Tokens_Value.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/List.hpp>

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
com::typesafe::config::impl::Tokens::Tokens(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Tokens::Tokens()
    : Tokens(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool com::typesafe::config::impl::Tokens::isValue(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_Value* >(token) != nullptr;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Tokens::getValue(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Value* >(token) != nullptr) {
        return npc((java_cast< Tokens_Value* >(token)))->value();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get value of non-value token "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

bool com::typesafe::config::impl::Tokens::isValueWithType(Token* t, ::com::typesafe::config::ConfigValueType* valueType)
{
    clinit();
    return isValue(t) && npc(getValue(t))->valueType() == valueType;
}

bool com::typesafe::config::impl::Tokens::isNewline(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_Line* >(token) != nullptr;
}

bool com::typesafe::config::impl::Tokens::isProblem(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_Problem* >(token) != nullptr;
}

java::lang::String* com::typesafe::config::impl::Tokens::getProblemWhat(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Problem* >(token) != nullptr) {
        return npc((java_cast< Tokens_Problem* >(token)))->what();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get problem what from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

java::lang::String* com::typesafe::config::impl::Tokens::getProblemMessage(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Problem* >(token) != nullptr) {
        return npc((java_cast< Tokens_Problem* >(token)))->message();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get problem message from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

bool com::typesafe::config::impl::Tokens::getProblemSuggestQuotes(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Problem* >(token) != nullptr) {
        return npc((java_cast< Tokens_Problem* >(token)))->suggestQuotes();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get problem suggestQuotes from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

java::lang::Throwable* com::typesafe::config::impl::Tokens::getProblemCause(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Problem* >(token) != nullptr) {
        return npc((java_cast< Tokens_Problem* >(token)))->cause();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get problem cause from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

bool com::typesafe::config::impl::Tokens::isComment(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_Comment* >(token) != nullptr;
}

java::lang::String* com::typesafe::config::impl::Tokens::getCommentText(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Comment* >(token) != nullptr) {
        return npc((java_cast< Tokens_Comment* >(token)))->text();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get comment text from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

bool com::typesafe::config::impl::Tokens::isUnquotedText(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_UnquotedText* >(token) != nullptr;
}

java::lang::String* com::typesafe::config::impl::Tokens::getUnquotedText(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_UnquotedText* >(token) != nullptr) {
        return npc((java_cast< Tokens_UnquotedText* >(token)))->value();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get unquoted text from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

bool com::typesafe::config::impl::Tokens::isIgnoredWhitespace(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_IgnoredWhitespace* >(token) != nullptr;
}

bool com::typesafe::config::impl::Tokens::isSubstitution(Token* token)
{
    clinit();
    return dynamic_cast< Tokens_Substitution* >(token) != nullptr;
}

java::util::List* com::typesafe::config::impl::Tokens::getSubstitutionPathExpression(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Substitution* >(token) != nullptr) {
        return npc((java_cast< Tokens_Substitution* >(token)))->value();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get substitution from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

bool com::typesafe::config::impl::Tokens::getSubstitutionOptional(Token* token)
{
    clinit();
    if(dynamic_cast< Tokens_Substitution* >(token) != nullptr) {
        return npc((java_cast< Tokens_Substitution* >(token)))->optional();
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to get substitution optionality from "_j)->append(static_cast< ::java::lang::Object* >(token))->toString());
    }
}

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::START()
{
    clinit();
    return START_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::START_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::END()
{
    clinit();
    return END_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::END_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::COMMA()
{
    clinit();
    return COMMA_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::COMMA_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::EQUALS()
{
    clinit();
    return EQUALS_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::EQUALS_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::COLON()
{
    clinit();
    return COLON_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::COLON_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::OPEN_CURLY()
{
    clinit();
    return OPEN_CURLY_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::OPEN_CURLY_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::CLOSE_CURLY()
{
    clinit();
    return CLOSE_CURLY_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::CLOSE_CURLY_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::OPEN_SQUARE()
{
    clinit();
    return OPEN_SQUARE_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::OPEN_SQUARE_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::CLOSE_SQUARE()
{
    clinit();
    return CLOSE_SQUARE_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::CLOSE_SQUARE_;

com::typesafe::config::impl::Token*& com::typesafe::config::impl::Tokens::PLUS_EQUALS()
{
    clinit();
    return PLUS_EQUALS_;
}
com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::PLUS_EQUALS_;

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newLine(::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    return new Tokens_Line(origin);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newProblem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause)
{
    clinit();
    return new Tokens_Problem(origin, what, message, suggestQuotes, cause);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newCommentDoubleSlash(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text)
{
    clinit();
    return new Tokens_Comment_DoubleSlashComment(origin, text);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newCommentHash(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text)
{
    clinit();
    return new Tokens_Comment_HashComment(origin, text);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newUnquotedText(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s)
{
    clinit();
    return new Tokens_UnquotedText(origin, s);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newIgnoredWhitespace(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s)
{
    clinit();
    return new Tokens_IgnoredWhitespace(origin, s);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newSubstitution(::com::typesafe::config::ConfigOrigin* origin, bool optional, ::java::util::List* expression)
{
    clinit();
    return new Tokens_Substitution(origin, optional, expression);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newValue(AbstractConfigValue* value)
{
    clinit();
    return new Tokens_Value(value);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newValue(AbstractConfigValue* value, ::java::lang::String* origText)
{
    clinit();
    return new Tokens_Value(value, origText);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newString(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value, ::java::lang::String* origText)
{
    clinit();
    return newValue(new ConfigString_Quoted(origin, value), origText);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newInt(::com::typesafe::config::ConfigOrigin* origin, int32_t value, ::java::lang::String* origText)
{
    clinit();
    return newValue(ConfigNumber::newNumber(origin, static_cast< int64_t >(value), origText), origText);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newDouble(::com::typesafe::config::ConfigOrigin* origin, double value, ::java::lang::String* origText)
{
    clinit();
    return newValue(ConfigNumber::newNumber(origin, value, origText), origText);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newLong(::com::typesafe::config::ConfigOrigin* origin, int64_t value, ::java::lang::String* origText)
{
    clinit();
    return newValue(ConfigNumber::newNumber(origin, value, origText), origText);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newNull(::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    return newValue(new ConfigNull(origin), u"null"_j);
}

com::typesafe::config::impl::Token* com::typesafe::config::impl::Tokens::newBoolean(::com::typesafe::config::ConfigOrigin* origin, bool value)
{
    clinit();
    return newValue(new ConfigBoolean(origin, value), ::java::lang::StringBuilder().append(u""_j)->append(value)->toString());
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Tokens::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Tokens", 31);
    return c;
}

void com::typesafe::config::impl::Tokens::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        START_ = Token::newWithoutOrigin(TokenType::START, u"start of file"_j, u""_j);
        END_ = Token::newWithoutOrigin(TokenType::END, u"end of file"_j, u""_j);
        COMMA_ = Token::newWithoutOrigin(TokenType::COMMA, u"','"_j, u","_j);
        EQUALS_ = Token::newWithoutOrigin(TokenType::EQUALS, u"'='"_j, u"="_j);
        COLON_ = Token::newWithoutOrigin(TokenType::COLON, u"':'"_j, u":"_j);
        OPEN_CURLY_ = Token::newWithoutOrigin(TokenType::OPEN_CURLY, u"'{'"_j, u"{"_j);
        CLOSE_CURLY_ = Token::newWithoutOrigin(TokenType::CLOSE_CURLY, u"'}'"_j, u"}"_j);
        OPEN_SQUARE_ = Token::newWithoutOrigin(TokenType::OPEN_SQUARE, u"'['"_j, u"["_j);
        CLOSE_SQUARE_ = Token::newWithoutOrigin(TokenType::CLOSE_SQUARE, u"']'"_j, u"]"_j);
        PLUS_EQUALS_ = Token::newWithoutOrigin(TokenType::PLUS_EQUALS, u"'+='"_j, u"+="_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::Tokens::getClass0()
{
    return class_();
}

