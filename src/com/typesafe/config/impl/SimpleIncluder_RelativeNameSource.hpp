// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncluder.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/impl/SimpleIncluder_NameSource.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleIncluder_RelativeNameSource
    : public virtual ::java::lang::Object
    , public virtual SimpleIncluder_NameSource
{

public:
    typedef ::java::lang::Object super;

private:
    ::com::typesafe::config::ConfigIncludeContext* context {  };
protected:
    void ctor(::com::typesafe::config::ConfigIncludeContext* context);

public:
    ::com::typesafe::config::ConfigParseable* nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* options) override;

    // Generated

public: /* package */
    SimpleIncluder_RelativeNameSource(::com::typesafe::config::ConfigIncludeContext* context);
protected:
    SimpleIncluder_RelativeNameSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleIncluder;
    friend class SimpleIncluder_NameSource;
    friend class SimpleIncluder_Proxy;
};
