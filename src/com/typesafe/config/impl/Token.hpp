// Generated from /config/src/main/java/com/typesafe/config/impl/Token.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Token
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    TokenType* tokenType_ {  };
    ::java::lang::String* debugString {  };
    ::com::typesafe::config::ConfigOrigin* origin_ {  };
    ::java::lang::String* tokenText_ {  };
protected:
    void ctor(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin);
    void ctor(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText);
    void ctor(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText, ::java::lang::String* debugString);

public: /* package */
    static Token* newWithoutOrigin(TokenType* tokenType, ::java::lang::String* debugString, ::java::lang::String* tokenText);
    TokenType* tokenType();

public:
    virtual ::java::lang::String* tokenText();

public: /* package */
    ::com::typesafe::config::ConfigOrigin* origin();
    int32_t lineNumber();

public:
    ::java::lang::String* toString() override;

public: /* protected */
    virtual bool canEqual(::java::lang::Object* other);

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

public: /* package */
    Token(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin);
    Token(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText);
    Token(TokenType* tokenType, ::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* tokenText, ::java::lang::String* debugString);
protected:
    Token(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
