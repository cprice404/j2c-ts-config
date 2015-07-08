// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDocumentParser.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigDocumentParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static ConfigNodeRoot* parse(::java::util::Iterator* tokens, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* options);
    static AbstractConfigNodeValue* parseValue(::java::util::Iterator* tokens, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* options);

    // Generated

public:
    ConfigDocumentParser();
protected:
    ConfigDocumentParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigDocumentParser_ParseContext;
};
