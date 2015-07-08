// Generated from /config/src/main/java/com/typesafe/config/ConfigIncluderClasspath.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigIncluderClasspath
    : public virtual ::java::lang::Object
{
    virtual ConfigObject* includeResources(ConfigIncludeContext* context, ::java::lang::String* what) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
