// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::impl::AbstractConfigValue_Modifier
    : public virtual ::java::lang::Object
{
    virtual AbstractConfigValue* modifyChildMayThrow(::java::lang::String* keyOrNull, AbstractConfigValue* v) /* throws(Exception) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
