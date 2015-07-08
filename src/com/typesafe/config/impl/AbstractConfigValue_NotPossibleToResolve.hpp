// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class com::typesafe::config::impl::AbstractConfigValue_NotPossibleToResolve
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    ::java::lang::String* traceString_ {  };
protected:
    void ctor(ResolveContext* context);

public: /* package */
    virtual ::java::lang::String* traceString();

    // Generated
    AbstractConfigValue_NotPossibleToResolve(ResolveContext* context);
protected:
    AbstractConfigValue_NotPossibleToResolve(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AbstractConfigValue;
    friend class AbstractConfigValue_Modifier;
    friend class AbstractConfigValue_NoExceptionsModifier;
};
