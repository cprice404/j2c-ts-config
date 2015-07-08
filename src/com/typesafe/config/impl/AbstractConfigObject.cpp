// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigObject.java
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigMergeable.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigDelayedMergeObject.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/impl/MergeableValue.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::AbstractConfigObject::AbstractConfigObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::AbstractConfigObject::AbstractConfigObject(::com::typesafe::config::ConfigOrigin* origin) 
    : AbstractConfigObject(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin);
}

void com::typesafe::config::impl::AbstractConfigObject::ctor(::com::typesafe::config::ConfigOrigin* origin)
{
    super::ctor(origin);
    this->config = new SimpleConfig(this);
}

com::typesafe::config::Config* com::typesafe::config::impl::AbstractConfigObject::toConfig()
{
    return config;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::AbstractConfigObject::toFallbackValue()
{
    return this;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigObject::peekAssumingResolved(::java::lang::String* key, Path* originalPath)
{
    try {
        return attemptPeekWithPartialResolve(key);
    } catch (::com::typesafe::config::ConfigException_NotResolved* e) {
        throw ConfigImpl::improveNotResolved(originalPath, e);
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigObject::peekPath(Path* path)
{
    return peekPath(this, path);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigObject::peekPath(AbstractConfigObject* self, Path* path)
{
    clinit();
    try {
        auto next = npc(path)->remainder();
        auto v = npc(self)->attemptPeekWithPartialResolve(npc(path)->first());
        if(next == nullptr) {
            return v;
        } else {
            if(dynamic_cast< AbstractConfigObject* >(v) != nullptr) {
                return peekPath(java_cast< AbstractConfigObject* >(v), next);
            } else {
                return nullptr;
            }
        }
    } catch (::com::typesafe::config::ConfigException_NotResolved* e) {
        throw ConfigImpl::improveNotResolved(path, e);
    }
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::AbstractConfigObject::valueType()
{
    return ::com::typesafe::config::ConfigValueType::OBJECT;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::AbstractConfigObject::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return newCopy(resolveStatus(), origin);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::AbstractConfigObject::constructDelayedMerge(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack)
{
    return new ConfigDelayedMergeObject(origin, stack);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::AbstractConfigObject::withFallback(::com::typesafe::config::ConfigMergeable* mergeable)
{
    return java_cast< AbstractConfigObject* >(super::withFallback(mergeable));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::AbstractConfigObject::mergeOrigins(::java::util::Collection* stack)
{
    clinit();
    if(npc(stack)->isEmpty())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"can't merge origins on empty list"_j);

    ::java::util::List* origins = new ::java::util::ArrayList();
    ::com::typesafe::config::ConfigOrigin* firstOrigin = nullptr;
    auto numMerged = int32_t(0);
    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(firstOrigin == nullptr)
                firstOrigin = npc(v)->origin();

            if(dynamic_cast< AbstractConfigObject* >(v) != nullptr && npc((java_cast< AbstractConfigObject* >(v)))->resolveStatus() == ResolveStatus::RESOLVED && npc((java_cast< ::com::typesafe::config::ConfigObject* >(v)))->isEmpty()) {
            } else {
                npc(origins)->add(npc(v)->origin());
                numMerged += 1;
            }
        }
    }
    if(numMerged == 0) {
        npc(origins)->add(firstOrigin);
    }
    return SimpleConfigOrigin::mergeOrigins(static_cast< ::java::util::Collection* >(origins));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::AbstractConfigObject::mergeOrigins(AbstractConfigObjectArray*/*...*/ stack)
{
    clinit();
    return mergeOrigins(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(stack)));
}

java::lang::UnsupportedOperationException* com::typesafe::config::impl::AbstractConfigObject::weAreImmutable(::java::lang::String* method)
{
    clinit();
    return new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"ConfigObject is immutable, you can't call Map."_j)->append(method)->toString());
}

void com::typesafe::config::impl::AbstractConfigObject::clear()
{
    throw weAreImmutable(u"clear"_j);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::AbstractConfigObject::put(::java::lang::String* arg0, ::com::typesafe::config::ConfigValue* arg1)
{
    throw weAreImmutable(u"put"_j);
}

java::lang::Object* com::typesafe::config::impl::AbstractConfigObject::put(::java::lang::Object* key, ::java::lang::Object* value)
{ 
    return put(dynamic_cast< ::java::lang::String* >(key), dynamic_cast< ::com::typesafe::config::ConfigValue* >(value));
}

void com::typesafe::config::impl::AbstractConfigObject::putAll(::java::util::Map* arg0)
{
    throw weAreImmutable(u"putAll"_j);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::AbstractConfigObject::remove(::java::lang::Object* arg0)
{
    throw weAreImmutable(u"remove"_j);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::AbstractConfigObject::withOrigin(::com::typesafe::config::ConfigOrigin* origin)
{
    return java_cast< AbstractConfigObject* >(super::withOrigin(origin));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::AbstractConfigObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.AbstractConfigObject", 45);
    return c;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::AbstractConfigObject::atKey(::java::lang::String* key)
{
    return AbstractConfigValue::atKey(key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::AbstractConfigObject::atPath(::java::lang::String* path)
{
    return AbstractConfigValue::atPath(path);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::AbstractConfigObject::origin()
{
    return AbstractConfigValue::origin();
}

java::lang::String* com::typesafe::config::impl::AbstractConfigObject::render()
{
    return AbstractConfigValue::render();
}

java::lang::String* com::typesafe::config::impl::AbstractConfigObject::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return AbstractConfigValue::render(options);
}

bool com::typesafe::config::impl::AbstractConfigObject::equals(::java::lang::Object* o)
{
    return AbstractConfigValue::equals(o);
}

int32_t com::typesafe::config::impl::AbstractConfigObject::hashCode()
{
    return AbstractConfigValue::hashCode();
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::AbstractConfigObject::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    return super::atKey(origin, key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::AbstractConfigObject::atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path)
{
    return super::atPath(origin, path);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigObject::mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback)
{
    return super::mergedWithObject(stack, fallback);
}

void com::typesafe::config::impl::AbstractConfigObject::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

bool com::typesafe::config::impl::AbstractConfigObject::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return super::remove(key, value);
}

java::lang::Class* com::typesafe::config::impl::AbstractConfigObject::getClass0()
{
    return class_();
}

