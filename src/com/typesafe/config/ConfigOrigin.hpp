// Generated from /config/src/main/java/com/typesafe/config/ConfigOrigin.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct com::typesafe::config::ConfigOrigin
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* description() = 0;
    virtual ::java::lang::String* filename() = 0;
    virtual ::java::net::URL* url() = 0;
    virtual ::java::lang::String* resource() = 0;
    virtual int32_t lineNumber() = 0;
    virtual ::java::util::List* comments() = 0;
    virtual ConfigOrigin* withComments(::java::util::List* comments) = 0;
    virtual ConfigOrigin* withLineNumber(int32_t lineNumber) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
