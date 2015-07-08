// Generated from /config/src/main/java/com/typesafe/config/ConfigValue.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/ConfigMergeable.hpp>

struct com::typesafe::config::ConfigValue
    : public virtual ConfigMergeable
{
    virtual ConfigOrigin* origin() = 0;
    virtual ConfigValueType* valueType() = 0;
    virtual ::java::lang::Object* unwrapped() = 0;
    virtual ::java::lang::String* render() = 0;
    virtual ::java::lang::String* render(ConfigRenderOptions* options) = 0;
    ConfigValue* withFallback(ConfigMergeable* other) = 0;
    virtual Config* atPath(::java::lang::String* path) = 0;
    virtual Config* atKey(::java::lang::String* key) = 0;
    virtual ConfigValue* withOrigin(ConfigOrigin* origin) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
