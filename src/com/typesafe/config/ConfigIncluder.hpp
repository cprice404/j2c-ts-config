// Generated from /config/src/main/java/com/typesafe/config/ConfigIncluder.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigIncluder
    : public virtual ::java::lang::Object
{
    virtual ConfigIncluder* withFallback(ConfigIncluder* fallback) = 0;
    virtual ConfigObject* include(ConfigIncludeContext* context, ::java::lang::String* what) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
