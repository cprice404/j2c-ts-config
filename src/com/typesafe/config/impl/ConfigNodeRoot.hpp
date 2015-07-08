// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeRoot.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeRoot final
    : public ConfigNodeComplexValue
{

public:
    typedef ConfigNodeComplexValue super;

private:
    ::com::typesafe::config::ConfigOrigin* origin {  };
protected:
    void ctor(::java::util::Collection* children, ::com::typesafe::config::ConfigOrigin* origin);

public: /* protected */
    ConfigNodeRoot* newNode(::java::util::Collection* nodes) override;
    ConfigNodeComplexValue* value();
    ConfigNodeRoot* setValue(::java::lang::String* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor);
    bool hasValue(::java::lang::String* desiredPath);

    // Generated

public: /* package */
    ConfigNodeRoot(::java::util::Collection* children, ::com::typesafe::config::ConfigOrigin* origin);
protected:
    ConfigNodeRoot(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
