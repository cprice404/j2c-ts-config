// Generated from /config/src/main/java/com/typesafe/config/ConfigList.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/List.hpp>
#include <com/typesafe/config/ConfigValue.hpp>

struct com::typesafe::config::ConfigList
    : public virtual ::java::util::List
    , public virtual ConfigValue
{
    ::java::util::List* unwrapped() = 0;
    ConfigList* withOrigin(ConfigOrigin* origin) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
