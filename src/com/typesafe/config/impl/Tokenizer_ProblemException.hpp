// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokenizer_ProblemException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    Token* problem_ {  };
protected:
    void ctor(Token* problem);

public: /* package */
    virtual Token* problem();

    // Generated
    Tokenizer_ProblemException(Token* problem);
protected:
    Tokenizer_ProblemException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokenizer;
    friend class Tokenizer_TokenIterator;
    friend class Tokenizer_TokenIterator_WhitespaceSaver;
};
