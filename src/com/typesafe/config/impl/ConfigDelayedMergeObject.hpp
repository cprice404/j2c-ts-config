// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDelayedMergeObject.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>
#include <com/typesafe/config/impl/ReplaceableMergeStack.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigDelayedMergeObject final
    : public AbstractConfigObject
    , public Unmergeable
    , public ReplaceableMergeStack
{

public:
    typedef AbstractConfigObject super;

private:
    ::java::util::List* stack {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack);

public: /* protected */
    ConfigDelayedMergeObject* newCopy(ResolveStatus* status, ::com::typesafe::config::ConfigOrigin* origin) override;

public: /* package */
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */ override;

public:
    AbstractConfigValue* makeReplacement(ResolveContext* context, int32_t skipping) override;

public: /* package */
    ResolveStatus* resolveStatus() override;

public:
    AbstractConfigValue* replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement) override;
    bool hasDescendant(AbstractConfigValue* descendant) override;

public: /* package */
    ConfigDelayedMergeObject* relativized(Path* prefix) override;

public: /* protected */
    bool ignoresFallbacks() override;
    ConfigDelayedMergeObject* mergedWithTheUnmergeable(Unmergeable* fallback) override;
    ConfigDelayedMergeObject* mergedWithObject(AbstractConfigObject* fallback) override;
    ConfigDelayedMergeObject* mergedWithNonObject(AbstractConfigValue* fallback) override;

public:
    ConfigDelayedMergeObject* withFallback(::com::typesafe::config::ConfigMergeable* mergeable) override;
    ConfigDelayedMergeObject* withOnlyKey(::java::lang::String* key) override;
    ConfigDelayedMergeObject* withoutKey(::java::lang::String* key) override;

public: /* protected */
    AbstractConfigObject* withOnlyPathOrNull(Path* path) override;

public: /* package */
    AbstractConfigObject* withOnlyPath(Path* path) override;
    AbstractConfigObject* withoutPath(Path* path) override;

public:
    ConfigDelayedMergeObject* withValue(::java::lang::String* key, ::com::typesafe::config::ConfigValue* value) override;

public: /* package */
    ConfigDelayedMergeObject* withValue(Path* path, ::com::typesafe::config::ConfigValue* value) override;

public:
    ::java::util::Collection* unmergedValues() override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options) override;
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) override;

private:
    static ::com::typesafe::config::ConfigException* notResolved();

public:
    ::java::util::Map* unwrapped() override;
    AbstractConfigValue* get(::java::lang::Object* key) override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::util::Set* entrySet() override;
    bool isEmpty() override;
    ::java::util::Set* keySet() override;
    int32_t size() override;
    ::java::util::Collection* values() override;

public: /* protected */
    AbstractConfigValue* attemptPeekWithPartialResolve(::java::lang::String* key) override;

    // Generated

public: /* package */
    ConfigDelayedMergeObject(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack);
protected:
    ConfigDelayedMergeObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual SimpleConfig* atKey(::java::lang::String* key);
    virtual SimpleConfig* atPath(::java::lang::String* path);
    virtual SimpleConfigOrigin* origin();
    virtual ::java::lang::String* render();
    virtual ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);
    virtual ::com::typesafe::config::ConfigValueType* valueType();
    virtual AbstractConfigObject* withOrigin(::com::typesafe::config::ConfigOrigin* origin);

public: /* protected */
    AbstractConfigObject* newCopy(::com::typesafe::config::ConfigOrigin* origin);

public: /* package */
    virtual SimpleConfig* atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key);
    virtual SimpleConfig* atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path);

public: /* protected */
    AbstractConfigValue* mergedWithNonObject(::java::util::Collection* stack, AbstractConfigValue* fallback);
    AbstractConfigValue* mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback);
    AbstractConfigValue* mergedWithTheUnmergeable(::java::util::Collection* stack, Unmergeable* fallback);

private:
    virtual ::java::lang::Class* getClass0();
};
