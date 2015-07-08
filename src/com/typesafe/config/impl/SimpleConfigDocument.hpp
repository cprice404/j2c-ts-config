// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigDocument.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/parser/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/parser/ConfigDocument.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigDocument final
    : public virtual ::java::lang::Object
    , public ::com::typesafe::config::parser::ConfigDocument
{

public:
    typedef ::java::lang::Object super;

private:
    ConfigNodeRoot* configNodeTree {  };
    ::com::typesafe::config::ConfigParseOptions* parseOptions {  };
protected:
    void ctor(ConfigNodeRoot* parsedNode, ::com::typesafe::config::ConfigParseOptions* parseOptions);

public:
    ::com::typesafe::config::parser::ConfigDocument* withValueText(::java::lang::String* path, ::java::lang::String* newValue) override;
    ::com::typesafe::config::parser::ConfigDocument* withValue(::java::lang::String* path, ::com::typesafe::config::ConfigValue* newValue) override;
    ::com::typesafe::config::parser::ConfigDocument* withoutPath(::java::lang::String* path) override;
    bool hasPath(::java::lang::String* path) override;
    ::java::lang::String* render() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

public: /* package */
    SimpleConfigDocument(ConfigNodeRoot* parsedNode, ::com::typesafe::config::ConfigParseOptions* parseOptions);
protected:
    SimpleConfigDocument(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
