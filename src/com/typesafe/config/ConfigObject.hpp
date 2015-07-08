// Generated from /config/src/main/java/com/typesafe/config/ConfigObject.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <java/util/Map.hpp>

struct com::typesafe::config::ConfigObject
    : public virtual ConfigValue
    , public virtual ::java::util::Map
{
    virtual Config* toConfig() = 0;
    ::java::util::Map* unwrapped() = 0;
    ConfigObject* withFallback(ConfigMergeable* other) = 0;
    ConfigValue* get(::java::lang::Object* key) = 0;
    virtual ConfigObject* withOnlyKey(::java::lang::String* key) = 0;
    virtual ConfigObject* withoutKey(::java::lang::String* key) = 0;
    virtual ConfigObject* withValue(::java::lang::String* key, ConfigValue* value) = 0;
    ConfigObject* withOrigin(ConfigOrigin* origin) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
