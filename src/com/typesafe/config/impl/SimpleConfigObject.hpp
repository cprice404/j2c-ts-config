// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <java/io/Serializable.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigObject final
    : public AbstractConfigObject
    , public ::java::io::Serializable
{

public:
    typedef AbstractConfigObject super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2LL) };
    ::java::util::Map* value {  };
    bool resolved {  };
    bool ignoresFallbacks_ {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value, ResolveStatus* status, bool ignoresFallbacks);
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value);

public:
    SimpleConfigObject* withOnlyKey(::java::lang::String* key) override;
    SimpleConfigObject* withoutKey(::java::lang::String* key) override;

public: /* protected */
    SimpleConfigObject* withOnlyPathOrNull(Path* path) override;

public: /* package */
    SimpleConfigObject* withOnlyPath(Path* path) override;
    SimpleConfigObject* withoutPath(Path* path) override;

public:
    SimpleConfigObject* withValue(::java::lang::String* key, ::com::typesafe::config::ConfigValue* v) override;

public: /* package */
    SimpleConfigObject* withValue(Path* path, ::com::typesafe::config::ConfigValue* v) override;

public: /* protected */
    AbstractConfigValue* attemptPeekWithPartialResolve(::java::lang::String* key) override;

private:
    SimpleConfigObject* newCopy(ResolveStatus* newStatus, ::com::typesafe::config::ConfigOrigin* newOrigin, bool newIgnoresFallbacks);

public: /* protected */
    SimpleConfigObject* newCopy(ResolveStatus* newStatus, ::com::typesafe::config::ConfigOrigin* newOrigin) override;
    SimpleConfigObject* withFallbacksIgnored() override;

public: /* package */
    ResolveStatus* resolveStatus() override;

public:
    SimpleConfigObject* replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement) override;
    bool hasDescendant(AbstractConfigValue* descendant) override;

public: /* protected */
    bool ignoresFallbacks() override;

public:
    ::java::util::Map* unwrapped() override;

public: /* protected */
    SimpleConfigObject* mergedWithObject(AbstractConfigObject* abstractFallback) override;

private:
    SimpleConfigObject* modify(AbstractConfigValue_NoExceptionsModifier* modifier);
    SimpleConfigObject* modifyMayThrow(AbstractConfigValue_Modifier* modifier) /* throws(Exception) */;

public: /* package */
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */ override;
    SimpleConfigObject* relativized(Path* prefix) override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) override;

public:
    AbstractConfigValue* get(::java::lang::Object* key) override;

private:
    static bool mapEquals(::java::util::Map* a, ::java::util::Map* b);
    static int32_t mapHash(::java::util::Map* m);

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;
    bool containsKey(::java::lang::Object* key) override;
    ::java::util::Set* keySet() override;
    bool containsValue(::java::lang::Object* v) override;
    ::java::util::Set* entrySet() override;
    bool isEmpty() override;
    int32_t size() override;
    ::java::util::Collection* values() override;

private:
    static ::java::lang::String* EMPTY_NAME_;
    static SimpleConfigObject* emptyInstance_;

public: /* package */
    static SimpleConfigObject* empty();
    static SimpleConfigObject* empty(::com::typesafe::config::ConfigOrigin* origin);
    static SimpleConfigObject* emptyMissing(::com::typesafe::config::ConfigOrigin* baseOrigin);

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

    // Generated

public: /* package */
    SimpleConfigObject(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value, ResolveStatus* status, bool ignoresFallbacks);
    SimpleConfigObject(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value);
protected:
    SimpleConfigObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    AbstractConfigObject* newCopy(::com::typesafe::config::ConfigOrigin* origin);
    AbstractConfigValue* mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback);
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

public:
    ::java::lang::String* render();
    ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);

private:
    static ::java::lang::String*& EMPTY_NAME();
    static SimpleConfigObject*& emptyInstance();
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigObject_ResolveModifier;
    friend class SimpleConfigObject_relativized_1;
    friend class SimpleConfigObject_RenderComparator;
};
