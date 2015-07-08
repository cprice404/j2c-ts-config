// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncluder.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/impl/FullIncluder.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleIncluder
    : public virtual ::java::lang::Object
    , public virtual FullIncluder
{

public:
    typedef ::java::lang::Object super;

private:
    ::com::typesafe::config::ConfigIncluder* fallback {  };
protected:
    void ctor(::com::typesafe::config::ConfigIncluder* fallback);

public: /* package */
    static ::com::typesafe::config::ConfigParseOptions* clearForInclude(::com::typesafe::config::ConfigParseOptions* options);

public:
    ::com::typesafe::config::ConfigObject* include(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* name) override;

public: /* package */
    static ::com::typesafe::config::ConfigObject* includeWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* name);

public:
    ::com::typesafe::config::ConfigObject* includeURL(::com::typesafe::config::ConfigIncludeContext* context, ::java::net::URL* url) override;

public: /* package */
    static ::com::typesafe::config::ConfigObject* includeURLWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::net::URL* url);

public:
    ::com::typesafe::config::ConfigObject* includeFile(::com::typesafe::config::ConfigIncludeContext* context, ::java::io::File* file) override;

public: /* package */
    static ::com::typesafe::config::ConfigObject* includeFileWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::io::File* file);

public:
    ::com::typesafe::config::ConfigObject* includeResources(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* resource) override;

public: /* package */
    static ::com::typesafe::config::ConfigObject* includeResourceWithoutFallback(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* resource);

public:
    ::com::typesafe::config::ConfigIncluder* withFallback(::com::typesafe::config::ConfigIncluder* fallback) override;

public: /* package */
    static ::com::typesafe::config::ConfigObject* fromBasename(SimpleIncluder_NameSource* source, ::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* options);
    static FullIncluder* makeFull(::com::typesafe::config::ConfigIncluder* includer);

    // Generated
    SimpleIncluder(::com::typesafe::config::ConfigIncluder* fallback);
protected:
    SimpleIncluder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleIncluder_NameSource;
    friend class SimpleIncluder_RelativeNameSource;
    friend class SimpleIncluder_Proxy;
};
