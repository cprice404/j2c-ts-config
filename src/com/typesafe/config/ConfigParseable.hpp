// Generated from /config/src/main/java/com/typesafe/config/ConfigParseable.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigParseable
    : public virtual ::java::lang::Object
{
    virtual ConfigObject* parse(ConfigParseOptions* options) = 0;
    virtual ConfigOrigin* origin() = 0;
    virtual ConfigParseOptions* options() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
