// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/ConfigException_Missing.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigException_Null
    : public ConfigException_Missing
{

public:
    typedef ConfigException_Missing super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    static ::java::lang::String* makeMessage(::java::lang::String* path, ::java::lang::String* expected);
protected:
    void ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::Throwable* cause);
    void ctor(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected);

    // Generated

public:
    ConfigException_Null(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected, ::java::lang::Throwable* cause);
    ConfigException_Null(ConfigOrigin* origin, ::java::lang::String* path, ::java::lang::String* expected);
protected:
    ConfigException_Null(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigException;
    friend class ConfigException_WrongType;
    friend class ConfigException_Missing;
    friend class ConfigException_BadValue;
    friend class ConfigException_BadPath;
    friend class ConfigException_BugOrBroken;
    friend class ConfigException_IO;
    friend class ConfigException_Parse;
    friend class ConfigException_UnresolvedSubstitution;
    friend class ConfigException_NotResolved;
    friend class ConfigException_ValidationProblem;
    friend class ConfigException_ValidationFailed;
    friend class ConfigException_BadBean;
    friend class ConfigException_Generic;
};
