// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDelayedMerge.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>
#include <com/typesafe/config/impl/ReplaceableMergeStack.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigDelayedMerge final
    : public AbstractConfigValue
    , public Unmergeable
    , public ReplaceableMergeStack
{

public:
    typedef AbstractConfigValue super;

private:
    ::java::util::List* stack {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack);

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::Object* unwrapped() override;

public: /* package */
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */ override;
    static ResolveResult* resolveSubstitutions(ReplaceableMergeStack* replaceable, ::java::util::List* stack, ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */;

public:
    AbstractConfigValue* makeReplacement(ResolveContext* context, int32_t skipping) override;

public: /* package */
    static AbstractConfigValue* makeReplacement(ResolveContext* context, ::java::util::List* stack, int32_t skipping);
    ResolveStatus* resolveStatus() override;

public:
    AbstractConfigValue* replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement) override;
    bool hasDescendant(AbstractConfigValue* descendant) override;

public: /* package */
    ConfigDelayedMerge* relativized(Path* prefix) override;
    static bool stackIgnoresFallbacks(::java::util::List* stack);

public: /* protected */
    bool ignoresFallbacks() override;
    AbstractConfigValue* newCopy(::com::typesafe::config::ConfigOrigin* newOrigin) override;
    ConfigDelayedMerge* mergedWithTheUnmergeable(Unmergeable* fallback) override;
    ConfigDelayedMerge* mergedWithObject(AbstractConfigObject* fallback) override;
    ConfigDelayedMerge* mergedWithNonObject(AbstractConfigValue* fallback) override;

public:
    ::java::util::Collection* unmergedValues() override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options) override;

public: /* package */
    static void render(::java::util::List* stack, ::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

    // Generated
    ConfigDelayedMerge(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack);
protected:
    ConfigDelayedMerge(const ::default_init_tag&);


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
    AbstractConfigValue* mergedWithNonObject(::java::util::Collection* stack, AbstractConfigValue* fallback);
    AbstractConfigValue* mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback);
    AbstractConfigValue* mergedWithTheUnmergeable(::java::util::Collection* stack, Unmergeable* fallback);
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options);

private:
    virtual ::java::lang::Class* getClass0();
};
