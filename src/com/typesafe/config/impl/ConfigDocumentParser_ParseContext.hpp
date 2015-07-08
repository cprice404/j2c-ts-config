// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDocumentParser.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigDocumentParser_ParseContext final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t lineNumber {  };
    ::java::util::Stack* buffer {  };
    ::java::util::Iterator* tokens {  };
    ::com::typesafe::config::ConfigSyntax* flavor {  };
    ::com::typesafe::config::ConfigOrigin* baseOrigin {  };

public: /* package */
    int32_t equalsCount {  };
protected:
    void ctor(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ::java::util::Iterator* tokens);

private:
    Token* popToken();
    Token* nextToken();
    Token* nextTokenCollectingWhitespace(::java::util::Collection* nodes);
    void putBack(Token* token);
    bool checkElementSeparator(::java::util::Collection* nodes);
    AbstractConfigNodeValue* consolidateValues(::java::util::Collection* nodes);
    ::com::typesafe::config::ConfigException* parseError(::java::lang::String* message);
    ::com::typesafe::config::ConfigException* parseError(::java::lang::String* message, ::java::lang::Throwable* cause);
    ::java::lang::String* addQuoteSuggestion(::java::lang::String* badToken, ::java::lang::String* message);
    ::java::lang::String* addQuoteSuggestion(Path* lastPath, bool insideEquals, ::java::lang::String* badToken, ::java::lang::String* message);
    AbstractConfigNodeValue* parseValue(Token* t);
    ConfigNodePath* parseKey(Token* token);
    static bool isIncludeKeyword(Token* t);
    static bool isUnquotedWhitespace(Token* t);
    bool isKeyValueSeparatorToken(Token* t);
    ConfigNodeInclude* parseInclude(::java::util::ArrayList* children);
    ConfigNodeComplexValue* parseObject(bool hadOpenCurly);
    ConfigNodeComplexValue* parseArray_();

public: /* package */
    ConfigNodeRoot* parse();
    AbstractConfigNodeValue* parseSingleValue();

    // Generated
    ConfigDocumentParser_ParseContext(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ::java::util::Iterator* tokens);
protected:
    ConfigDocumentParser_ParseContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigDocumentParser;
};
