// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigConcatenation.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigConcatenation final
    : public AbstractConfigValue
    , public Unmergeable
    , public Container
{

public:
    typedef AbstractConfigValue super;

private:
    ::java::util::List* pieces {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* pieces);

private:
    ::com::typesafe::config::ConfigException_NotResolved* notResolved();

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::Object* unwrapped() override;

public: /* protected */
    ConfigConcatenation* newCopy(::com::typesafe::config::ConfigOrigin* newOrigin) override;
    bool ignoresFallbacks() override;

public:
    ::java::util::Collection* unmergedValues() override;

private:
    static bool isIgnoredWhitespace(AbstractConfigValue* value);
    static void join(::java::util::ArrayList* builder, AbstractConfigValue* origRight);

public: /* package */
    static ::java::util::List* consolidate(::java::util::List* pieces);
    static AbstractConfigValue* concatenate(::java::util::List* pieces);
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */ override;
    ResolveStatus* resolveStatus() override;

public:
    ConfigConcatenation* replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement) override;
    bool hasDescendant(AbstractConfigValue* descendant) override;

public: /* package */
    ConfigConcatenation* relativized(Path* prefix) override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) override;

    // Generated

public: /* package */
    ConfigConcatenation(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* pieces);
protected:
    ConfigConcatenation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual SimpleConfig* atKey(::java::lang::String* key);
    virtual SimpleConfig* atPath(::java::lang::String* path);
    virtual SimpleConfigOrigin* origin();
    virtual ::java::lang::String* render();
    virtual ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);
    AbstractConfigValue* withFallback(::com::typesafe::config::ConfigMergeable* other);
    virtual AbstractConfigValue* withOrigin(::com::typesafe::config::ConfigOrigin* origin);

public: /* package */
    virtual SimpleConfig* atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key);
    virtual SimpleConfig* atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path);

public: /* protected */
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

private:
    virtual ::java::lang::Class* getClass0();
};
