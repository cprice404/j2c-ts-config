// Generated from /config/src/main/java/com/typesafe/config/impl/ReplaceableMergeStack.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/impl/Container.hpp>

struct com::typesafe::config::impl::ReplaceableMergeStack
    : public virtual Container
{
    virtual AbstractConfigValue* makeReplacement(ResolveContext* context, int32_t skipping) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
