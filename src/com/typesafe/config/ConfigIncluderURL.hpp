// Generated from /config/src/main/java/com/typesafe/config/ConfigIncluderURL.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigIncluderURL
    : public virtual ::java::lang::Object
{
    virtual ConfigObject* includeURL(ConfigIncludeContext* context, ::java::net::URL* what) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
