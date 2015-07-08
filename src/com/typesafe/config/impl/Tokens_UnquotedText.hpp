// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/Token.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokens_UnquotedText
    : public Token
{

public:
    typedef Token super;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s);

public: /* package */
    virtual ::java::lang::String* value();

public:
    ::java::lang::String* toString() override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;
    ::java::lang::String* tokenText() override;

    // Generated

public: /* package */
    Tokens_UnquotedText(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* s);
protected:
    Tokens_UnquotedText(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokens;
    friend class Tokens_Value;
    friend class Tokens_Line;
    friend class Tokens_IgnoredWhitespace;
    friend class Tokens_Problem;
    friend class Tokens_Comment;
    friend class Tokens_Comment_DoubleSlashComment;
    friend class Tokens_Comment_HashComment;
    friend class Tokens_Substitution;
};
