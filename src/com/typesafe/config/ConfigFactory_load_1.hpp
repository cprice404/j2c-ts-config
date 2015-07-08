// Generated from /config/src/main/java/com/typesafe/config/ConfigFactory.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <com/typesafe/config/Config.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigFactory_load_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::concurrent::Callable
{

public:
    typedef ::java::lang::Object super;
    Config* call() override;

    // Generated
    ConfigFactory_load_1(::java::lang::ClassLoader* loader, ConfigParseOptions* withLoader);
    static ::java::lang::Class *class_();
    ::java::lang::ClassLoader* loader;
    ConfigParseOptions* withLoader;

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigFactory;
};
