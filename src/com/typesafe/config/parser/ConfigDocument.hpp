// Generated from /config/src/main/java/com/typesafe/config/parser/ConfigDocument.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/parser/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::parser::ConfigDocument
    : public virtual ::java::lang::Object
{
    virtual ConfigDocument* withValueText(::java::lang::String* path, ::java::lang::String* newValue) = 0;
    virtual ConfigDocument* withValue(::java::lang::String* path, ::com::typesafe::config::ConfigValue* newValue) = 0;
    virtual ConfigDocument* withoutPath(::java::lang::String* path) = 0;
    virtual bool hasPath(::java::lang::String* path) = 0;
    virtual ::java::lang::String* render() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
