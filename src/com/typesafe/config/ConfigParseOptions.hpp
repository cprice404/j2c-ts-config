// Generated from /config/src/main/java/com/typesafe/config/ConfigParseOptions.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigParseOptions final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ConfigSyntax* syntax {  };
    ::java::lang::String* originDescription {  };
    bool allowMissing {  };
    ConfigIncluder* includer {  };
    ::java::lang::ClassLoader* classLoader {  };
protected:
    void ctor(ConfigSyntax* syntax, ::java::lang::String* originDescription, bool allowMissing, ConfigIncluder* includer, ::java::lang::ClassLoader* classLoader);

public:
    static ConfigParseOptions* defaults();
    ConfigParseOptions* setSyntax(ConfigSyntax* syntax);
    ConfigSyntax* getSyntax();
    ConfigParseOptions* setOriginDescription(::java::lang::String* originDescription);
    ::java::lang::String* getOriginDescription();

public: /* package */
    ConfigParseOptions* withFallbackOriginDescription(::java::lang::String* originDescription);

public:
    ConfigParseOptions* setAllowMissing(bool allowMissing);
    bool getAllowMissing();
    ConfigParseOptions* setIncluder(ConfigIncluder* includer);
    ConfigParseOptions* prependIncluder(ConfigIncluder* includer);
    ConfigParseOptions* appendIncluder(ConfigIncluder* includer);
    ConfigIncluder* getIncluder();
    ConfigParseOptions* setClassLoader(::java::lang::ClassLoader* loader);
    ::java::lang::ClassLoader* getClassLoader();

    // Generated

private:
    ConfigParseOptions(ConfigSyntax* syntax, ::java::lang::String* originDescription, bool allowMissing, ConfigIncluder* includer, ::java::lang::ClassLoader* classLoader);
protected:
    ConfigParseOptions(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
