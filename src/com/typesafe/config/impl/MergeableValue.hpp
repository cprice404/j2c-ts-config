// Generated from /config/src/main/java/com/typesafe/config/impl/MergeableValue.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/ConfigMergeable.hpp>

struct com::typesafe::config::impl::MergeableValue
    : public virtual ::com::typesafe::config::ConfigMergeable
{
    virtual ::com::typesafe::config::ConfigValue* toFallbackValue() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
