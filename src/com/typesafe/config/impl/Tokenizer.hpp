// Generated from /config/src/main/java/com/typesafe/config/impl/Tokenizer.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Tokenizer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* asString(int32_t codepoint);

public: /* package */
    static ::java::util::Iterator* tokenize(::com::typesafe::config::ConfigOrigin* origin, ::java::io::Reader* input, ::com::typesafe::config::ConfigSyntax* flavor);
    static ::java::lang::String* render(::java::util::Iterator* tokens);

    // Generated

public:
    Tokenizer();
protected:
    Tokenizer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Tokenizer_ProblemException;
    friend class Tokenizer_TokenIterator;
    friend class Tokenizer_TokenIterator_WhitespaceSaver;
};
