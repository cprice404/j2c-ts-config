// Generated from /config/src/main/java/com/typesafe/config/impl/Tokens.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/Tokens_Comment.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokens_Comment_HashComment final
    : public Tokens_Comment
{

public:
    typedef Tokens_Comment super;
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text);

public:
    ::java::lang::String* tokenText() override;

    // Generated

public: /* package */
    Tokens_Comment_HashComment(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* text);
protected:
    Tokens_Comment_HashComment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokens;
    friend class Tokens_Value;
    friend class Tokens_Line;
    friend class Tokens_UnquotedText;
    friend class Tokens_IgnoredWhitespace;
    friend class Tokens_Problem;
    friend class Tokens_Comment;
    friend class Tokens_Comment_DoubleSlashComment;
    friend class Tokens_Substitution;
};
