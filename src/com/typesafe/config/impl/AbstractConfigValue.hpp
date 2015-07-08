// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/MergeableValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>

struct default_init_tag;

class com::typesafe::config::impl::AbstractConfigValue
    : public virtual ::java::lang::Object
    , public virtual ::com::typesafe::config::ConfigValue
    , public virtual MergeableValue
{

public:
    typedef ::java::lang::Object super;

private:
    SimpleConfigOrigin* origin_ {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin);

public:
    SimpleConfigOrigin* origin() override;

public: /* package */
    virtual ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */;
    virtual ResolveStatus* resolveStatus();

public: /* protected */
    static ::java::util::List* replaceChildInList(::java::util::List* list, AbstractConfigValue* child, AbstractConfigValue* replacement);
    static bool hasDescendantInList(::java::util::List* list, AbstractConfigValue* descendant);

public: /* package */
    virtual AbstractConfigValue* relativized(Path* prefix);

public:
    AbstractConfigValue* toFallbackValue() override;

public: /* protected */
    virtual AbstractConfigValue* newCopy(::com::typesafe::config::ConfigOrigin* origin) = 0;
    virtual bool ignoresFallbacks();
    virtual AbstractConfigValue* withFallbacksIgnored();
    void requireNotIgnoringFallbacks();
    virtual AbstractConfigValue* constructDelayedMerge(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack);
    AbstractConfigValue* mergedWithTheUnmergeable(::java::util::Collection* stack, Unmergeable* fallback);

private:
    AbstractConfigValue* delayMerge(::java::util::Collection* stack, AbstractConfigValue* fallback);

public: /* protected */
    AbstractConfigValue* mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback);
    AbstractConfigValue* mergedWithNonObject(::java::util::Collection* stack, AbstractConfigValue* fallback);
    virtual AbstractConfigValue* mergedWithTheUnmergeable(Unmergeable* fallback);
    virtual AbstractConfigValue* mergedWithObject(AbstractConfigObject* fallback);
    virtual AbstractConfigValue* mergedWithNonObject(AbstractConfigValue* fallback);

public:
    AbstractConfigValue* withOrigin(::com::typesafe::config::ConfigOrigin* origin) override;
    AbstractConfigValue* withFallback(::com::typesafe::config::ConfigMergeable* mergeable) override;

public: /* protected */
    virtual bool canEqual(::java::lang::Object* other);

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

public: /* protected */
    static void indent(::java::lang::StringBuilder* sb, int32_t indent, ::com::typesafe::config::ConfigRenderOptions* options);
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options);

public:
    ::java::lang::String* render() override;
    ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options) override;

public: /* package */
    virtual ::java::lang::String* transformToString();
    virtual SimpleConfig* atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key);

public:
    ::com::typesafe::config::Config* atKey(::java::lang::String* key) override;

public: /* package */
    virtual SimpleConfig* atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path);

public:
    ::com::typesafe::config::Config* atPath(::java::lang::String* pathExpression) override;

    // Generated

public: /* package */
    AbstractConfigValue(::com::typesafe::config::ConfigOrigin* origin);
protected:
    AbstractConfigValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AbstractConfigValue_NotPossibleToResolve;
    friend class AbstractConfigValue_Modifier;
    friend class AbstractConfigValue_NoExceptionsModifier;
};
