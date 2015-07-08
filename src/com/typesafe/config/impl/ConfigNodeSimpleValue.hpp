// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeSimpleValue.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeSimpleValue final
    : public AbstractConfigNodeValue
{

public:
    typedef AbstractConfigNodeValue super;

public: /* package */
    Token* token_ {  };
protected:
    void ctor(Token* value);

public: /* protected */
    ::java::util::Collection* tokens() override;
    Token* token();
    AbstractConfigValue* value();

    // Generated

public: /* package */
    ConfigNodeSimpleValue(Token* value);
protected:
    ConfigNodeSimpleValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
