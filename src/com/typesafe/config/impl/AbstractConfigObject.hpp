// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigObject.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com {
namespace typesafe {
namespace config {
typedef ::SubArray< ::com::typesafe::config::ConfigMergeable, ::java::lang::ObjectArray > ConfigMergeableArray;
typedef ::SubArray< ::com::typesafe::config::ConfigValue, ::java::lang::ObjectArray, ConfigMergeableArray > ConfigValueArray;
}  // namespace config
}  // namespace typesafe
}  // namespace com

namespace java {
namespace util {
typedef ::SubArray< ::java::util::Map, ::java::lang::ObjectArray > MapArray;
}  // namespace util
}  // namespace java

namespace com {
namespace typesafe {
namespace config {
typedef ::SubArray< ::com::typesafe::config::ConfigObject, ::java::lang::ObjectArray, ConfigValueArray, ::java::util::MapArray > ConfigObjectArray;

namespace impl {
typedef ::SubArray< ::com::typesafe::config::impl::MergeableValue, ::java::lang::ObjectArray, ::com::typesafe::config::ConfigMergeableArray > MergeableValueArray;
typedef ::SubArray< ::com::typesafe::config::impl::AbstractConfigValue, ::java::lang::ObjectArray, ::com::typesafe::config::ConfigValueArray, MergeableValueArray > AbstractConfigValueArray;
typedef ::SubArray< ::com::typesafe::config::impl::Container, ::java::lang::ObjectArray, ::com::typesafe::config::ConfigValueArray > ContainerArray;
typedef ::SubArray< ::com::typesafe::config::impl::AbstractConfigObject, AbstractConfigValueArray, ::com::typesafe::config::ConfigObjectArray, ContainerArray > AbstractConfigObjectArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

struct default_init_tag;

class com::typesafe::config::impl::AbstractConfigObject
    : public AbstractConfigValue
    , public virtual ::com::typesafe::config::ConfigObject
    , public virtual Container
{

public:
    typedef AbstractConfigValue super;

private:
    SimpleConfig* config {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin);

public:
    ::com::typesafe::config::Config* toConfig() override;
    AbstractConfigObject* toFallbackValue() override;
    AbstractConfigObject* withOnlyKey(::java::lang::String* key) = 0;
    AbstractConfigObject* withoutKey(::java::lang::String* key) = 0;
    AbstractConfigObject* withValue(::java::lang::String* key, ::com::typesafe::config::ConfigValue* value) = 0;

public: /* protected */
    virtual AbstractConfigObject* withOnlyPathOrNull(Path* path) = 0;

public: /* package */
    virtual AbstractConfigObject* withOnlyPath(Path* path) = 0;
    virtual AbstractConfigObject* withoutPath(Path* path) = 0;
    virtual AbstractConfigObject* withValue(Path* path, ::com::typesafe::config::ConfigValue* value) = 0;

public: /* protected */
    AbstractConfigValue* peekAssumingResolved(::java::lang::String* key, Path* originalPath);

public: /* package */
    virtual AbstractConfigValue* attemptPeekWithPartialResolve(::java::lang::String* key) = 0;

public: /* protected */
    virtual AbstractConfigValue* peekPath(Path* path);

private:
    static AbstractConfigValue* peekPath(AbstractConfigObject* self, Path* path);

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;

public: /* protected */
    virtual AbstractConfigObject* newCopy(ResolveStatus* status, ::com::typesafe::config::ConfigOrigin* origin) = 0;
    AbstractConfigObject* newCopy(::com::typesafe::config::ConfigOrigin* origin) override;
    AbstractConfigObject* constructDelayedMerge(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack) override;
    AbstractConfigObject* mergedWithObject(AbstractConfigObject* fallback) = 0;

public:
    AbstractConfigObject* withFallback(::com::typesafe::config::ConfigMergeable* mergeable) override;

public: /* package */
    static ::com::typesafe::config::ConfigOrigin* mergeOrigins(::java::util::Collection* stack);
    static ::com::typesafe::config::ConfigOrigin* mergeOrigins(AbstractConfigObjectArray*/*...*/ stack);
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */ = 0;
    AbstractConfigObject* relativized(Path* prefix) = 0;

public:
    AbstractConfigValue* get(::java::lang::Object* key) = 0;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) = 0;

private:
    static ::java::lang::UnsupportedOperationException* weAreImmutable(::java::lang::String* method);

public:
    void clear() override;
    virtual ::com::typesafe::config::ConfigValue* put(::java::lang::String* arg0, ::com::typesafe::config::ConfigValue* arg1);
    void putAll(::java::util::Map* arg0) override;
    ::com::typesafe::config::ConfigValue* remove(::java::lang::Object* arg0) override;
    AbstractConfigObject* withOrigin(::com::typesafe::config::ConfigOrigin* origin) override;

    // Generated

public: /* protected */
    AbstractConfigObject(::com::typesafe::config::ConfigOrigin* origin);
protected:
    AbstractConfigObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual SimpleConfig* atKey(::java::lang::String* key);
    virtual SimpleConfig* atPath(::java::lang::String* path);
    virtual SimpleConfigOrigin* origin();
    virtual ::java::lang::String* render();
    virtual ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;

public: /* package */
    virtual SimpleConfig* atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key);
    virtual SimpleConfig* atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path);

public: /* protected */
    AbstractConfigValue* mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback);
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

public:
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    virtual ::java::lang::Class* getClass0();
};
