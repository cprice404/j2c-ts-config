// Generated from /config/src/main/java/com/typesafe/config/impl/FullIncluder.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/ConfigIncluder.hpp>
#include <com/typesafe/config/ConfigIncluderFile.hpp>
#include <com/typesafe/config/ConfigIncluderURL.hpp>
#include <com/typesafe/config/ConfigIncluderClasspath.hpp>

struct com::typesafe::config::impl::FullIncluder
    : public virtual ::com::typesafe::config::ConfigIncluder
    , public virtual ::com::typesafe::config::ConfigIncluderFile
    , public virtual ::com::typesafe::config::ConfigIncluderURL
    , public virtual ::com::typesafe::config::ConfigIncluderClasspath
{

    // Generated
    static ::java::lang::Class *class_();
};
