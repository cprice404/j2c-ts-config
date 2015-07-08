// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigParser.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static AbstractConfigValue* parse(ConfigNodeRoot* document, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* options, ::com::typesafe::config::ConfigIncludeContext* includeContext);

    // Generated

public:
    ConfigParser();
protected:
    ConfigParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigParser_ParseContext;
};
