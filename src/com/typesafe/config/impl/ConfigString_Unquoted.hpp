// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigString.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigString.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigString_Unquoted final
    : public ConfigString
{

public:
    typedef ConfigString super;
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value);

public: /* protected */
    ConfigString_Unquoted* newCopy(::com::typesafe::config::ConfigOrigin* origin) override;

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

    // Generated

public: /* package */
    ConfigString_Unquoted(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value);
protected:
    ConfigString_Unquoted(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigString;
    friend class ConfigString_Quoted;
};
