// Generated from /config/src/main/java/com/typesafe/config/parser/ConfigNode.java

#pragma once

#include <com/typesafe/config/parser/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::parser::ConfigNode
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* render() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
