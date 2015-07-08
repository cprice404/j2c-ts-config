// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/Token.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokens_Value
    : public Token
{

public:
    typedef Token super;

private:
    AbstractConfigValue* value_ {  };
protected:
    void ctor(AbstractConfigValue* value);
    void ctor(AbstractConfigValue* value, ::java::lang::String* origText);

public: /* package */
    virtual AbstractConfigValue* value();

public:
    ::java::lang::String* toString() override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

public: /* package */
    Tokens_Value(AbstractConfigValue* value);
    Tokens_Value(AbstractConfigValue* value, ::java::lang::String* origText);
protected:
    Tokens_Value(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokens;
    friend class Tokens_Line;
    friend class Tokens_UnquotedText;
    friend class Tokens_IgnoredWhitespace;
    friend class Tokens_Problem;
    friend class Tokens_Comment;
    friend class Tokens_Comment_DoubleSlashComment;
    friend class Tokens_Comment_HashComment;
    friend class Tokens_Substitution;
};
