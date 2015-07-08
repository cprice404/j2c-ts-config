// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigException
    : public ::java::lang::RuntimeException
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    ConfigOrigin* origin_ {  };
protected:
    void ctor(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause);
    void ctor(ConfigOrigin* origin, ::java::lang::String* message);
    void ctor(::java::lang::String* message, ::java::lang::Throwable* cause);
    void ctor(::java::lang::String* message);

public:
    virtual ConfigOrigin* origin();

private:
    void writeObject(::java::io::ObjectOutputStream* out) /* throws(IOException) */;
    void readObject(::java::io::ObjectInputStream* in) /* throws(IOException, ClassNotFoundException) */;

    // Generated

public: /* protected */
    ConfigException(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause);
    ConfigException(ConfigOrigin* origin, ::java::lang::String* message);
    ConfigException(::java::lang::String* message, ::java::lang::Throwable* cause);
    ConfigException(::java::lang::String* message);
protected:
    ConfigException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
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
    friend class ConfigException_ValidationFailed;
    friend class ConfigException_BadBean;
    friend class ConfigException_Generic;
};
