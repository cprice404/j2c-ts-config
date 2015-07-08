// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeObject.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeObject final
    : public ConfigNodeComplexValue
{

public:
    typedef ConfigNodeComplexValue super;
protected:
    void ctor(::java::util::Collection* children);

public: /* protected */
    ConfigNodeObject* newNode(::java::util::Collection* nodes) override;

public:
    bool hasValue(Path* desiredPath);

public: /* protected */
    ConfigNodeObject* changeValueOnPath(Path* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor);

public:
    ConfigNodeObject* setValueOnPath(::java::lang::String* desiredPath, AbstractConfigNodeValue* value);
    ConfigNodeObject* setValueOnPath(::java::lang::String* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor);

private:
    ConfigNodeObject* setValueOnPath(ConfigNodePath* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor);
    ::java::util::Collection* indentation();

public: /* protected */
    ConfigNodeObject* addValueOnPath(ConfigNodePath* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor);

public:
    ConfigNodeObject* removeValueOnPath(::java::lang::String* desiredPath, ::com::typesafe::config::ConfigSyntax* flavor);

    // Generated

public: /* package */
    ConfigNodeObject(::java::util::Collection* children);
protected:
    ConfigNodeObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
