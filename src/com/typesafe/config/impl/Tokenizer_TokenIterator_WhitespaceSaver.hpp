// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokenizer_TokenIterator_WhitespaceSaver
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::StringBuilder* whitespace {  };
    bool lastTokenWasSimpleValue {  };
protected:
    void ctor();

public: /* package */
    virtual void add(int32_t c);
    virtual Token* check(Token* t, ::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber);

private:
    Token* nextIsNotASimpleValue(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber);
    Token* nextIsASimpleValue(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber);
    Token* createWhitespaceTokenFromSaver(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber);

    // Generated

public: /* package */
    Tokenizer_TokenIterator_WhitespaceSaver();
protected:
    Tokenizer_TokenIterator_WhitespaceSaver(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokenizer;
    friend class Tokenizer_ProblemException;
    friend class Tokenizer_TokenIterator;
};
