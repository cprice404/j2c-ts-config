// Generated from /config/src/main/java/com/typesafe/config/ConfigResolveOptions.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigResolveOptions final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool useSystemEnvironment {  };
    bool allowUnresolved {  };
protected:
    void ctor(bool useSystemEnvironment, bool allowUnresolved);

public:
    static ConfigResolveOptions* defaults();
    static ConfigResolveOptions* noSystem();
    ConfigResolveOptions* setUseSystemEnvironment(bool value);
    bool getUseSystemEnvironment();
    ConfigResolveOptions* setAllowUnresolved(bool value);
    bool getAllowUnresolved();

    // Generated

private:
    ConfigResolveOptions(bool useSystemEnvironment, bool allowUnresolved);
protected:
    ConfigResolveOptions(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
