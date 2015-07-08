// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::impl::Parseable_Relativizer
    : public virtual ::java::lang::Object
{
    virtual ::com::typesafe::config::ConfigParseable* relativeTo(::java::lang::String* filename) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
