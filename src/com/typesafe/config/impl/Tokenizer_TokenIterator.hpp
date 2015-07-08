// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <com/typesafe/config/impl/Token.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokenizer_TokenIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    SimpleConfigOrigin* origin {  };
    ::java::io::Reader* input {  };
    ::java::util::LinkedList* buffer {  };
    int32_t lineNumber {  };
    ::com::typesafe::config::ConfigOrigin* lineOrigin_ {  };
    ::java::util::Queue* tokens {  };
    Tokenizer_TokenIterator_WhitespaceSaver* whitespaceSaver {  };
    bool allowComments {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::io::Reader* input, bool allowComments);

private:
    int32_t nextCharRaw();
    void putBack(int32_t c);

public: /* package */
    static bool isWhitespace(int32_t c);
    static bool isWhitespaceNotNewline(int32_t c);

private:
    bool startOfComment(int32_t c);
    int32_t nextCharAfterWhitespace(Tokenizer_TokenIterator_WhitespaceSaver* saver);
    Tokenizer_ProblemException* problem(::java::lang::String* message);
    Tokenizer_ProblemException* problem(::java::lang::String* what, ::java::lang::String* message);
    Tokenizer_ProblemException* problem(::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes);
    Tokenizer_ProblemException* problem(::java::lang::String* what, ::java::lang::String* message, ::java::lang::Throwable* cause);
    Tokenizer_ProblemException* problem(::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause);
    static Tokenizer_ProblemException* problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, ::java::lang::Throwable* cause);
    static Tokenizer_ProblemException* problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* what, ::java::lang::String* message, bool suggestQuotes, ::java::lang::Throwable* cause);
    static Tokenizer_ProblemException* problem(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* message);
    static ::com::typesafe::config::ConfigOrigin* lineOrigin(::com::typesafe::config::ConfigOrigin* baseOrigin, int32_t lineNumber);
    Token* pullComment(int32_t firstChar);
    static ::java::lang::String* firstNumberChars_;
    static ::java::lang::String* numberChars_;
    static ::java::lang::String* notInUnquotedText_;
    Token* pullUnquotedText();
    Token* pullNumber(int32_t firstChar) /* throws(ProblemException) */;
    void pullEscapeSequence(::java::lang::StringBuilder* sb, ::java::lang::StringBuilder* sbOrig) /* throws(ProblemException) */;
    void appendTripleQuotedString(::java::lang::StringBuilder* sb, ::java::lang::StringBuilder* sbOrig) /* throws(ProblemException) */;
    Token* pullQuotedString() /* throws(ProblemException) */;
    Token* pullPlusEquals() /* throws(ProblemException) */;
    Token* pullSubstitution() /* throws(ProblemException) */;
    Token* pullNextToken(Tokenizer_TokenIterator_WhitespaceSaver* saver) /* throws(ProblemException) */;
    static bool isSimpleValue(Token* t);
    void queueNextToken() /* throws(ProblemException) */;

public:
    bool hasNext() override;
    Token* next() override;
    void remove() override;

    // Generated

public: /* package */
    Tokenizer_TokenIterator(::com::typesafe::config::ConfigOrigin* origin, ::java::io::Reader* input, bool allowComments);
protected:
    Tokenizer_TokenIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::java::lang::String*& firstNumberChars();
    static ::java::lang::String*& numberChars();
    static ::java::lang::String*& notInUnquotedText();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokenizer;
    friend class Tokenizer_ProblemException;
    friend class Tokenizer_TokenIterator_WhitespaceSaver;
};
