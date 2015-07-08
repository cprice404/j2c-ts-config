// Generated from /config/src/main/java/com/typesafe/config/ConfigIncluderFile.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigIncluderFile
    : public virtual ::java::lang::Object
{
    virtual ConfigObject* includeFile(ConfigIncludeContext* context, ::java::io::File* what) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
