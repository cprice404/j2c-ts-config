// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigParser.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigParser_ParseContext final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t lineNumber {  };
    ConfigNodeRoot* document {  };
    FullIncluder* includer {  };
    ::com::typesafe::config::ConfigIncludeContext* includeContext {  };
    ::com::typesafe::config::ConfigSyntax* flavor {  };
    ::com::typesafe::config::ConfigOrigin* baseOrigin {  };
    ::java::util::LinkedList* pathStack {  };

public: /* package */
    int32_t arrayCount {  };
protected:
    void ctor(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ConfigNodeRoot* document, FullIncluder* includer, ::com::typesafe::config::ConfigIncludeContext* includeContext);

private:
    AbstractConfigValue* parseConcatenation(ConfigNodeConcatenation* n);
    SimpleConfigOrigin* lineOrigin();
    ::com::typesafe::config::ConfigException* parseError(::java::lang::String* message);
    ::com::typesafe::config::ConfigException* parseError(::java::lang::String* message, ::java::lang::Throwable* cause);
    Path* fullCurrentPath();
    AbstractConfigValue* parseValue(AbstractConfigNodeValue* n, ::java::util::List* comments);
    static AbstractConfigObject* createValueUnderPath(Path* path, AbstractConfigValue* value);
    void parseInclude(::java::util::Map* values, ConfigNodeInclude* n);
    AbstractConfigObject* parseObject(ConfigNodeObject* n);
    SimpleConfigList* parseArray_(ConfigNodeArray_* n);

public: /* package */
    AbstractConfigValue* parse();

    // Generated
    ConfigParser_ParseContext(::com::typesafe::config::ConfigSyntax* flavor, ::com::typesafe::config::ConfigOrigin* origin, ConfigNodeRoot* document, FullIncluder* includer, ::com::typesafe::config::ConfigIncludeContext* includeContext);
protected:
    ConfigParser_ParseContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigParser;
};
