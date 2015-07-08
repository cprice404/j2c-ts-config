// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigReference.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigReference final
    : public AbstractConfigValue
    , public Unmergeable
{

public:
    typedef AbstractConfigValue super;

private:
    SubstitutionExpression* expr {  };
    int32_t prefixLength {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr);
    void ctor(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr, int32_t prefixLength);

private:
    ::com::typesafe::config::ConfigException_NotResolved* notResolved();

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::Object* unwrapped() override;

public: /* protected */
    ConfigReference* newCopy(::com::typesafe::config::ConfigOrigin* newOrigin) override;
    bool ignoresFallbacks() override;

public:
    ::java::util::Collection* unmergedValues() override;

public: /* package */
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) override;
    ResolveStatus* resolveStatus() override;
    ConfigReference* relativized(Path* prefix) override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) override;

public: /* package */
    SubstitutionExpression* expression();

    // Generated
    ConfigReference(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr);

private:
    ConfigReference(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr, int32_t prefixLength);
protected:
    ConfigReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

public:
    ::java::lang::String* render();
    ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);

private:
    virtual ::java::lang::Class* getClass0();
};
