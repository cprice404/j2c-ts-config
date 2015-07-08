// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeSingleToken.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeSingleToken
    : public AbstractConfigNode
{

public:
    typedef AbstractConfigNode super;

public: /* package */
    Token* token_ {  };
protected:
    void ctor(Token* t);

public: /* protected */
    ::java::util::Collection* tokens() override;
    virtual Token* token();

    // Generated

public: /* package */
    ConfigNodeSingleToken(Token* t);
protected:
    ConfigNodeSingleToken(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
