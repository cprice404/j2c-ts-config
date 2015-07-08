// Generated from /config/src/main/java/com/typesafe/config/ConfigIncludeContext.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigIncludeContext
    : public virtual ::java::lang::Object
{
    virtual ConfigParseable* relativeTo(::java::lang::String* filename) = 0;
    virtual ConfigParseOptions* parseOptions() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
