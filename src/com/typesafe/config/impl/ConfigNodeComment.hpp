// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeComment.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigNodeSingleToken.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeComment final
    : public ConfigNodeSingleToken
{

public:
    typedef ConfigNodeSingleToken super;
protected:
    void ctor(Token* comment);

public: /* protected */
    ::java::lang::String* commentText();

    // Generated

public: /* package */
    ConfigNodeComment(Token* comment);
protected:
    ConfigNodeComment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
