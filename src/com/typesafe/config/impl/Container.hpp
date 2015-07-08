// Generated from /config/src/main/java/com/typesafe/config/impl/Container.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/ConfigValue.hpp>

struct com::typesafe::config::impl::Container
    : public virtual ::com::typesafe::config::ConfigValue
{
    virtual AbstractConfigValue* replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement) = 0;
    virtual bool hasDescendant(AbstractConfigValue* descendant) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
