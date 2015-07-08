// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncluder.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::impl::SimpleIncluder_NameSource
    : public virtual ::java::lang::Object
{
    virtual ::com::typesafe::config::ConfigParseable* nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* parseOptions) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
