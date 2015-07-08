// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveResult.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ResolveResult final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ResolveContext* context {  };
    AbstractConfigValue* value {  };
protected:
    void ctor(ResolveContext* context, AbstractConfigValue* value);

public: /* package */
    static /* <V extends AbstractConfigValue> */ResolveResult* make(ResolveContext* context, AbstractConfigValue* value);
    ResolveResult* asObjectResult();
    ResolveResult* asValueResult();
    ResolveResult* popTrace();

public:
    ::java::lang::String* toString() override;

    // Generated

private:
    ResolveResult(ResolveContext* context, AbstractConfigValue* value);
protected:
    ResolveResult(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
