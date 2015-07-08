// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokens final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static bool isValue(Token* token);
    static AbstractConfigValue* getValue(Token* token);
    static bool isValueWithType(Token* t, ::com::typesafe::config::ConfigValueType* valueType);
    static bool isNewline(Token* token);
    static bool isProblem(Token* token);
    static ::java::lang::String* getProblemWhat(Token* token);
    static ::java::lang::String* getProblemMessage(Token* token);
    static bool getProblemSuggestQuotes(Token* token);
    static ::java::lang::Throwable* getProblemCause(Token* token);
    static bool isComment(Token* token);
    static ::java::lang::String* getCommentText(Token* token);
    static bool isUnquotedText(Token* token);
    static ::java::lang::String* getUnquotedText(Token* token);
    static bool isIgnoredWhitespace(Token* token);
    static bool isSubstitution(Token* token);
    static ::java::util::List* getSubstitutionPathExpression(Token* token);
    static bool getSubstitutionOptional(Token* token);

private:
    static Token* START_;
    static Token* END_;
    static Token* COMMA_;
    static Token* EQUALS_;
    static Token* COLON_;
    static Token* OPEN_CURLY_;
    static Token* CLOSE_CURLY_;
    static Token* OPEN_SQUARE_;
    static Token* CLOSE_SQUARE_;
    static Token* PLUS_EQUALS_;

public: /* package */
    static Token* newLine(::com::typesafe::config::ConfigOrigin* origin);
    static Token* newProblem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause);
    static Token* newCommentDoubleSlash(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text);
    static Token* newCommentHash(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text);
    static Token* newUnquotedText(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s);
    static Token* newIgnoredWhitespace(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s);
    static Token* newSubstitution(::com::typesafe::config::ConfigOrigin* origin, bool optional, ::java::util::List* expression);
    static Token* newValue(AbstractConfigValue* value);
    static Token* newValue(AbstractConfigValue* value, ::java::lang::String* origText);
    static Token* newString(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value, ::java::lang::String* origText);
    static Token* newInt(::com::typesafe::config::ConfigOrigin* origin, int32_t value, ::java::lang::String* origText);
    static Token* newDouble(::com::typesafe::config::ConfigOrigin* origin, double value, ::java::lang::String* origText);
    static Token* newLong(::com::typesafe::config::ConfigOrigin* origin, int64_t value, ::java::lang::String* origText);
    static Token* newNull(::com::typesafe::config::ConfigOrigin* origin);
    static Token* newBoolean(::com::typesafe::config::ConfigOrigin* origin, bool value);

    // Generated

public:
    Tokens();
protected:
    Tokens(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static Token*& START();
    static Token*& END();
    static Token*& COMMA();
    static Token*& EQUALS();
    static Token*& COLON();
    static Token*& OPEN_CURLY();
    static Token*& CLOSE_CURLY();
    static Token*& OPEN_SQUARE();
    static Token*& CLOSE_SQUARE();
    static Token*& PLUS_EQUALS();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokens_Value;
    friend class Tokens_Line;
    friend class Tokens_UnquotedText;
    friend class Tokens_IgnoredWhitespace;
    friend class Tokens_Problem;
    friend class Tokens_Comment;
    friend class Tokens_Comment_DoubleSlashComment;
    friend class Tokens_Comment_HashComment;
    friend class Tokens_Substitution;
};
