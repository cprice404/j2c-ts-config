// Generated from /config/src/main/java/com/typesafe/config/impl/Unmergeable.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::impl::Unmergeable
    : public virtual ::java::lang::Object
{
    virtual ::java::util::Collection* unmergedValues() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
