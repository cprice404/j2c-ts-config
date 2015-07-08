// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/ConfigException.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigException_ValidationFailed
    : public ConfigException
{

public:
    typedef ConfigException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    ::java::lang::Iterable* problems_ {  };
protected:
    void ctor(::java::lang::Iterable* problems);

public:
    virtual ::java::lang::Iterable* problems();

private:
    static ::java::lang::String* makeMessage(::java::lang::Iterable* problems);

    // Generated

public:
    ConfigException_ValidationFailed(::java::lang::Iterable* problems);
protected:
    ConfigException_ValidationFailed(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigException;
    friend class ConfigException_WrongType;
    friend class ConfigException_Missing;
    friend class ConfigException_Null;
    friend class ConfigException_BadValue;
    friend class ConfigException_BadPath;
    friend class ConfigException_BugOrBroken;
    friend class ConfigException_IO;
    friend class ConfigException_Parse;
    friend class ConfigException_UnresolvedSubstitution;
    friend class ConfigException_NotResolved;
    friend class ConfigException_ValidationProblem;
    friend class ConfigException_BadBean;
    friend class ConfigException_Generic;
};
