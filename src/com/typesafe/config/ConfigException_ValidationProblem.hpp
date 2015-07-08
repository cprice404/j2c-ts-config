// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigException_ValidationProblem
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* path_ {  };
    ConfigOrigin* origin_ {  };
    ::java::lang::String* problem_ {  };
protected:
    void ctor(::java::lang::String* path, ConfigOrigin* origin, ::java::lang::String* problem);

public:
    virtual ::java::lang::String* path();
    virtual ConfigOrigin* origin();
    virtual ::java::lang::String* problem();
    ::java::lang::String* toString() override;

    // Generated
    ConfigException_ValidationProblem(::java::lang::String* path, ConfigOrigin* origin, ::java::lang::String* problem);
protected:
    ConfigException_ValidationProblem(const ::default_init_tag&);


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
    friend class ConfigException_ValidationFailed;
    friend class ConfigException_BadBean;
    friend class ConfigException_Generic;
};
