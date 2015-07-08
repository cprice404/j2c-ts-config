// Generated from /config/src/main/java/com/typesafe/config/ConfigMergeable.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigMergeable
    : public virtual ::java::lang::Object
{
    virtual ConfigMergeable* withFallback(ConfigMergeable* other) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
