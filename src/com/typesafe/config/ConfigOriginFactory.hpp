// Generated from /config/src/main/java/com/typesafe/config/ConfigOriginFactory.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigOriginFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ConfigOrigin* newSimple();
    static ConfigOrigin* newSimple(::java::lang::String* description);
    static ConfigOrigin* newFile(::java::lang::String* filename);
    static ConfigOrigin* newURL(::java::net::URL* url);

    // Generated

private:
    ConfigOriginFactory();
protected:
    ConfigOriginFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
