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

class com::typesafe::config::impl::SimpleIncluder_Proxy
    : public virtual ::java::lang::Object
    , public virtual FullIncluder
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::com::typesafe::config::ConfigIncluder* delegate {  };
protected:
    void ctor(::com::typesafe::config::ConfigIncluder* delegate);

public:
    ::com::typesafe::config::ConfigIncluder* withFallback(::com::typesafe::config::ConfigIncluder* fallback) override;
    ::com::typesafe::config::ConfigObject* include(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* what) override;
    ::com::typesafe::config::ConfigObject* includeResources(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* what) override;
    ::com::typesafe::config::ConfigObject* includeURL(::com::typesafe::config::ConfigIncludeContext* context, ::java::net::URL* what) override;
    ::com::typesafe::config::ConfigObject* includeFile(::com::typesafe::config::ConfigIncludeContext* context, ::java::io::File* what) override;

    // Generated

public: /* package */
    SimpleIncluder_Proxy(::com::typesafe::config::ConfigIncluder* delegate);
protected:
    SimpleIncluder_Proxy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleIncluder;
    friend class SimpleIncluder_NameSource;
    friend class SimpleIncluder_RelativeNameSource;
};
