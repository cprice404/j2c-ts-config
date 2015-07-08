// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigMergeable.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigRenderOptions.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_Modifier.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NoExceptionsModifier.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NotPossibleToResolve.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/impl/MergeableValue.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject_relativized_1.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject_RenderComparator.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject_ResolveModifier.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/AbstractMap_SimpleImmutableEntry.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
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

namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
}  // namespace lang
}  // namespace java

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
com::typesafe::config::impl::SimpleConfigObject::SimpleConfigObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigObject::SimpleConfigObject(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value, ResolveStatus* status, bool ignoresFallbacks) 
    : SimpleConfigObject(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value,status,ignoresFallbacks);
}

com::typesafe::config::impl::SimpleConfigObject::SimpleConfigObject(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value) 
    : SimpleConfigObject(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value);
}

constexpr int64_t com::typesafe::config::impl::SimpleConfigObject::serialVersionUID;

void com::typesafe::config::impl::SimpleConfigObject::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value, ResolveStatus* status, bool ignoresFallbacks)
{
    super::ctor(origin);
    if(value == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"creating config object with null map"_j);

    this->value = value;
    this->resolved = status == ResolveStatus::RESOLVED;
    this->ignoresFallbacks_ = ignoresFallbacks;
    if(status != ResolveStatus::fromValues(npc(value)->values()))
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Wrong resolved status on "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());

}

void com::typesafe::config::impl::SimpleConfigObject::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* value)
{
    ctor(origin, value, ResolveStatus::fromValues(npc(value)->values()), false);
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withOnlyKey(::java::lang::String* key)
{
    return withOnlyPath(Path::newKey(key));
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withoutKey(::java::lang::String* key)
{
    return withoutPath(Path::newKey(key));
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withOnlyPathOrNull(Path* path)
{
    auto key = npc(path)->first();
    auto next = npc(path)->remainder();
    auto v = java_cast< AbstractConfigValue* >(npc(value)->get(key));
    if(next != nullptr) {
        if(v != nullptr && (dynamic_cast< AbstractConfigObject* >(v) != nullptr)) {
            v = npc((java_cast< AbstractConfigObject* >(v)))->withOnlyPathOrNull(next);
        } else {
            v = nullptr;
        }
    }
    if(v == nullptr) {
        return nullptr;
    } else {
        return new SimpleConfigObject(origin(), ::java::util::Collections::singletonMap(key, v), npc(v)->resolveStatus(), ignoresFallbacks_);
    }
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withOnlyPath(Path* path)
{
    auto o = withOnlyPathOrNull(path);
    if(o == nullptr) {
        return new SimpleConfigObject(origin(), ::java::util::Collections::/* <String, AbstractConfigValue> */emptyMap(), ResolveStatus::RESOLVED, ignoresFallbacks_);
    } else {
        return o;
    }
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withoutPath(Path* path)
{
    auto key = npc(path)->first();
    auto next = npc(path)->remainder();
    auto v = java_cast< AbstractConfigValue* >(npc(value)->get(key));
    if(v != nullptr && next != nullptr && dynamic_cast< AbstractConfigObject* >(v) != nullptr) {
        v = npc((java_cast< AbstractConfigObject* >(v)))->withoutPath(next);
        ::java::util::Map* updated = new ::java::util::HashMap(static_cast< ::java::util::Map* >(value));
        npc(updated)->put(key, v);
        return new SimpleConfigObject(origin(), updated, ResolveStatus::fromValues(npc(updated)->values()), ignoresFallbacks_);
    } else if(next != nullptr || v == nullptr) {
        return this;
    } else {
        ::java::util::Map* smaller = new ::java::util::HashMap(npc(value)->size() - int32_t(1));
        for (auto _i = npc(npc(value)->entrySet())->iterator(); _i->hasNext(); ) {
            ::java::util::Map_Entry* old = java_cast< ::java::util::Map_Entry* >(_i->next());
            {
                if(!npc(java_cast< ::java::lang::String* >(npc(old)->getKey()))->equals(key))
                    npc(smaller)->put(java_cast< ::java::lang::String* >(npc(old)->getKey()), java_cast< AbstractConfigValue* >(npc(old)->getValue()));

            }
        }
        return new SimpleConfigObject(origin(), smaller, ResolveStatus::fromValues(npc(smaller)->values()), ignoresFallbacks_);
    }
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withValue(::java::lang::String* key, ::com::typesafe::config::ConfigValue* v)
{
    if(v == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Trying to store null ConfigValue in a ConfigObject"_j);

    ::java::util::Map* newMap;
    if(npc(value)->isEmpty()) {
        newMap = ::java::util::Collections::singletonMap(key, java_cast< AbstractConfigValue* >(v));
    } else {
        newMap = new ::java::util::HashMap(static_cast< ::java::util::Map* >(value));
        npc(newMap)->put(key, java_cast< AbstractConfigValue* >(v));
    }
    return new SimpleConfigObject(origin(), newMap, ResolveStatus::fromValues(npc(newMap)->values()), ignoresFallbacks_);
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withValue(Path* path, ::com::typesafe::config::ConfigValue* v)
{
    auto key = npc(path)->first();
    auto next = npc(path)->remainder();
    if(next == nullptr) {
        return withValue(key, v);
    } else {
        auto child = java_cast< AbstractConfigValue* >(npc(value)->get(key));
        if(child != nullptr && dynamic_cast< AbstractConfigObject* >(child) != nullptr) {
            return withValue(key, static_cast< ::com::typesafe::config::ConfigValue* >(npc((java_cast< AbstractConfigObject* >(child)))->withValue(next, v)));
        } else {
            auto subtree = npc((java_cast< AbstractConfigValue* >(v)))->atPath(SimpleConfigOrigin::newSimple(::java::lang::StringBuilder().append(u"withValue("_j)->append(npc(next)->render())
                ->append(u")"_j)->toString()), next);
            return withValue(key, static_cast< ::com::typesafe::config::ConfigValue* >(java_cast< AbstractConfigObject* >(npc(subtree)->root())));
        }
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigObject::attemptPeekWithPartialResolve(::java::lang::String* key)
{
    return java_cast< AbstractConfigValue* >(npc(value)->get(key));
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::newCopy(ResolveStatus* newStatus, ::com::typesafe::config::ConfigOrigin* newOrigin, bool newIgnoresFallbacks)
{
    return new SimpleConfigObject(newOrigin, value, newStatus, newIgnoresFallbacks);
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::newCopy(ResolveStatus* newStatus, ::com::typesafe::config::ConfigOrigin* newOrigin)
{
    return newCopy(newStatus, newOrigin, ignoresFallbacks_);
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::withFallbacksIgnored()
{
    if(ignoresFallbacks_)
        return this;
    else
        return newCopy(resolveStatus(), origin(), true);
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::SimpleConfigObject::resolveStatus()
{
    return ResolveStatus::fromBoolean(resolved);
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement)
{
    auto newChildren = new ::java::util::HashMap(static_cast< ::java::util::Map* >(value));
    for (auto _i = npc(npc(newChildren)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* old = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            if(java_cast< AbstractConfigValue* >(npc(old)->getValue()) == child) {
                if(replacement != nullptr)
                    npc(old)->setValue(replacement);
                else
                    npc(newChildren)->remove(java_cast< ::java::lang::String* >(npc(old)->getKey()));
                return new SimpleConfigObject(origin(), newChildren, ResolveStatus::fromValues(npc(newChildren)->values()), ignoresFallbacks_);
            }
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"SimpleConfigObject.replaceChild did not find "_j)->append(static_cast< ::java::lang::Object* >(child))
        ->append(u" in "_j)
        ->append(static_cast< ::java::lang::Object* >(this))->toString());
}

bool com::typesafe::config::impl::SimpleConfigObject::hasDescendant(AbstractConfigValue* descendant)
{
    for (auto _i = npc(npc(value)->values())->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* child = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(child == descendant)
                return true;

        }
    }
    for (auto _i = npc(npc(value)->values())->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* child = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< Container* >(child) != nullptr && npc((java_cast< Container* >(child)))->hasDescendant(descendant))
                return true;

        }
    }
    return false;
}

bool com::typesafe::config::impl::SimpleConfigObject::ignoresFallbacks()
{
    return ignoresFallbacks_;
}

java::util::Map* com::typesafe::config::impl::SimpleConfigObject::unwrapped()
{
    ::java::util::Map* m = new ::java::util::HashMap();
    for (auto _i = npc(npc(value)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* e = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            npc(m)->put(java_cast< ::java::lang::String* >(npc(e)->getKey()), npc(java_cast< AbstractConfigValue* >(npc(e)->getValue()))->unwrapped());
        }
    }
    return m;
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::mergedWithObject(AbstractConfigObject* abstractFallback)
{
    requireNotIgnoringFallbacks();
    if(!(dynamic_cast< SimpleConfigObject* >(abstractFallback) != nullptr)) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"should not be reached (merging non-SimpleConfigObject)"_j);
    }
    auto fallback = java_cast< SimpleConfigObject* >(abstractFallback);
    auto changed = false;
    auto allResolved = true;
    ::java::util::Map* merged = new ::java::util::HashMap();
    ::java::util::Set* allKeys = new ::java::util::HashSet();
    npc(allKeys)->addAll(this->keySet());
    npc(allKeys)->addAll(npc(fallback)->keySet());
    for (auto _i = npc(allKeys)->iterator(); _i->hasNext(); ) {
        ::java::lang::String* key = java_cast< ::java::lang::String* >(_i->next());
        {
            auto first = java_cast< AbstractConfigValue* >(npc(java_cast< ::java::util::Map* >(this->value))->get(key));
            auto second = java_cast< AbstractConfigValue* >(npc(npc(fallback)->value)->get(key));
            AbstractConfigValue* kept;
            if(first == nullptr)
                kept = second;
            else if(second == nullptr)
                kept = first;
            else
                kept = npc(first)->withFallback(second);
            npc(merged)->put(key, kept);
            if(first != kept)
                changed = true;

            if(npc(kept)->resolveStatus() == ResolveStatus::UNRESOLVED)
                allResolved = false;

        }
    }
    auto newResolveStatus = ResolveStatus::fromBoolean(allResolved);
    auto newIgnoresFallbacks = npc(fallback)->ignoresFallbacks();
    if(changed)
        return new SimpleConfigObject(mergeOrigins(new AbstractConfigObjectArray({static_cast< AbstractConfigObject* >(this), static_cast< AbstractConfigObject* >(fallback)})), merged, newResolveStatus, newIgnoresFallbacks);
    else if(newResolveStatus != resolveStatus() || newIgnoresFallbacks != ignoresFallbacks())
        return newCopy(newResolveStatus, origin(), newIgnoresFallbacks);
    else
        return this;
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::modify(AbstractConfigValue_NoExceptionsModifier* modifier)
{
    try {
        return modifyMayThrow(modifier);
    } catch (::java::lang::RuntimeException* e) {
        throw e;
    } catch (::java::lang::Exception* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"unexpected checked exception"_j, e);
    }
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::modifyMayThrow(AbstractConfigValue_Modifier* modifier) /* throws(Exception) */
{
    ::java::util::Map* changes = nullptr;
    for (auto _i = npc(keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::String* k = java_cast< ::java::lang::String* >(_i->next());
        {
            auto v = java_cast< AbstractConfigValue* >(npc(value)->get(k));
            auto modified = npc(modifier)->modifyChildMayThrow(k, v);
            if(modified != v) {
                if(changes == nullptr)
                    changes = new ::java::util::HashMap();

                npc(changes)->put(k, modified);
            }
        }
    }
    if(changes == nullptr) {
        return this;
    } else {
        ::java::util::Map* modified = new ::java::util::HashMap();
        auto sawUnresolved = false;
        for (auto _i = npc(keySet())->iterator(); _i->hasNext(); ) {
            ::java::lang::String* k = java_cast< ::java::lang::String* >(_i->next());
            {
                if(npc(changes)->containsKey(k)) {
                    auto newValue = java_cast< AbstractConfigValue* >(npc(changes)->get(k));
                    if(newValue != nullptr) {
                        npc(modified)->put(k, newValue);
                        if(npc(newValue)->resolveStatus() == ResolveStatus::UNRESOLVED)
                            sawUnresolved = true;

                    } else {
                    }
                } else {
                    auto newValue = java_cast< AbstractConfigValue* >(npc(value)->get(k));
                    npc(modified)->put(k, newValue);
                    if(npc(newValue)->resolveStatus() == ResolveStatus::UNRESOLVED)
                        sawUnresolved = true;

                }
            }
        }
        return new SimpleConfigObject(origin(), modified, sawUnresolved ? ResolveStatus::UNRESOLVED : ResolveStatus::RESOLVED, ignoresFallbacks());
    }
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::SimpleConfigObject::resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    if(resolveStatus() == ResolveStatus::RESOLVED)
        return ResolveResult::make(context, this);

    auto const sourceWithParent = npc(source)->pushParent(this);
    try {
        auto modifier = new SimpleConfigObject_ResolveModifier(context, sourceWithParent);
        AbstractConfigValue* value = modifyMayThrow(modifier);
        return npc(ResolveResult::make(npc(modifier)->context, value))->asObjectResult();
    } catch (AbstractConfigValue_NotPossibleToResolve* e) {
        throw e;
    } catch (::java::lang::RuntimeException* e) {
        throw e;
    } catch (::java::lang::Exception* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"unexpected checked exception"_j, e);
    }
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::relativized(Path* prefix)
{
    return modify(new SimpleConfigObject_relativized_1(this, prefix));
}

void com::typesafe::config::impl::SimpleConfigObject::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    if(isEmpty()) {
        npc(sb)->append(u"{}"_j);
    } else {
        auto outerBraces = npc(options)->getJson() || !atRoot;
        int32_t innerIndent;
        if(outerBraces) {
            innerIndent = indent + int32_t(1);
            npc(sb)->append(u"{"_j);
            if(npc(options)->getFormatted())
                npc(sb)->append(u'\u000a');

        } else {
            innerIndent = indent;
        }
        auto separatorCount = int32_t(0);
        auto keys = java_cast< ::java::lang::StringArray* >(npc(keySet())->toArray_(new ::java::lang::StringArray(size())));
        ::java::util::Arrays::sort(keys, new SimpleConfigObject_RenderComparator());
        for(auto k : *npc(keys)) {
            AbstractConfigValue* v;
            v = java_cast< AbstractConfigValue* >(npc(value)->get(k));
            if(npc(options)->getOriginComments()) {
                auto lines = npc(npc(npc(v)->origin())->description())->split(u"\n"_j);
                for(auto l : *npc(lines)) {
                    AbstractConfigValue::indent(sb, indent + int32_t(1), options);
                    npc(sb)->append(u'#');
                    if(!npc(l)->isEmpty())
                        npc(sb)->append(u' ');

                    npc(sb)->append(l);
                    npc(sb)->append(u"\n"_j);
                }
            }
            if(npc(options)->getComments()) {
                for (auto _i = npc(npc(npc(v)->origin())->comments())->iterator(); _i->hasNext(); ) {
                    ::java::lang::String* comment = java_cast< ::java::lang::String* >(_i->next());
                    {
                        AbstractConfigValue::indent(sb, innerIndent, options);
                        npc(sb)->append(u"#"_j);
                        if(!npc(comment)->startsWith(u" "_j))
                            npc(sb)->append(u' ');

                        npc(sb)->append(comment);
                        npc(sb)->append(u"\n"_j);
                    }
                }
            }
            AbstractConfigValue::indent(sb, innerIndent, options);
            npc(v)->render(sb, innerIndent, false, k, options);
            if(npc(options)->getFormatted()) {
                if(npc(options)->getJson()) {
                    npc(sb)->append(u","_j);
                    separatorCount = 2;
                } else {
                    separatorCount = 1;
                }
                npc(sb)->append(u'\u000a');
            } else {
                npc(sb)->append(u","_j);
                separatorCount = 1;
            }
        }
        npc(sb)->setLength(npc(sb)->length() - separatorCount);
        if(outerBraces) {
            if(npc(options)->getFormatted()) {
                npc(sb)->append(u'\u000a');
                if(outerBraces)
                    AbstractConfigValue::indent(sb, indent, options);

            }
            npc(sb)->append(u"}"_j);
        }
    }
    if(atRoot && npc(options)->getFormatted())
        npc(sb)->append(u'\u000a');

}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigObject::get(::java::lang::Object* key)
{
    return java_cast< AbstractConfigValue* >(npc(value)->get(key));
}

bool com::typesafe::config::impl::SimpleConfigObject::mapEquals(::java::util::Map* a, ::java::util::Map* b)
{
    clinit();
    if(a == b)
        return true;

    auto aKeys = npc(a)->keySet();
    auto bKeys = npc(b)->keySet();
    if(!npc(aKeys)->equals(bKeys))
        return false;

    for (auto _i = npc(aKeys)->iterator(); _i->hasNext(); ) {
        ::java::lang::String* key = java_cast< ::java::lang::String* >(_i->next());
        {
            if(!npc(java_cast< ::com::typesafe::config::ConfigValue* >(npc(a)->get(key)))->equals(java_cast< ::com::typesafe::config::ConfigValue* >(npc(b)->get(key))))
                return false;

        }
    }
    return true;
}

int32_t com::typesafe::config::impl::SimpleConfigObject::mapHash(::java::util::Map* m)
{
    clinit();
    ::java::util::List* keys = new ::java::util::ArrayList();
    npc(keys)->addAll(npc(m)->keySet());
    ::java::util::Collections::sort(keys);
    auto valuesHash = int32_t(0);
    for (auto _i = npc(keys)->iterator(); _i->hasNext(); ) {
        ::java::lang::String* k = java_cast< ::java::lang::String* >(_i->next());
        {
            valuesHash += npc(java_cast< ::com::typesafe::config::ConfigValue* >(npc(m)->get(k)))->hashCode();
        }
    }
    return int32_t(41) * (int32_t(41) + npc(keys)->hashCode()) + valuesHash;
}

bool com::typesafe::config::impl::SimpleConfigObject::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ::com::typesafe::config::ConfigObject* >(other) != nullptr;
}

bool com::typesafe::config::impl::SimpleConfigObject::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ::com::typesafe::config::ConfigObject* >(other) != nullptr) {
        return canEqual(other) && mapEquals(this, (java_cast< ::com::typesafe::config::ConfigObject* >(other)));
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::SimpleConfigObject::hashCode()
{
    return mapHash(this);
}

bool com::typesafe::config::impl::SimpleConfigObject::containsKey(::java::lang::Object* key)
{
    return npc(value)->containsKey(key);
}

java::util::Set* com::typesafe::config::impl::SimpleConfigObject::keySet()
{
    return npc(value)->keySet();
}

bool com::typesafe::config::impl::SimpleConfigObject::containsValue(::java::lang::Object* v)
{
    return npc(value)->containsValue(v);
}

java::util::Set* com::typesafe::config::impl::SimpleConfigObject::entrySet()
{
    auto entries = new ::java::util::HashSet();
    for (auto _i = npc(npc(value)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* e = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            npc(entries)->add(new ::java::util::AbstractMap_SimpleImmutableEntry(java_cast< ::java::lang::String* >(npc(e)->getKey()), java_cast< AbstractConfigValue* >(npc(e)->getValue())));
        }
    }
    return entries;
}

bool com::typesafe::config::impl::SimpleConfigObject::isEmpty()
{
    return npc(value)->isEmpty();
}

int32_t com::typesafe::config::impl::SimpleConfigObject::size()
{
    return npc(value)->size();
}

java::util::Collection* com::typesafe::config::impl::SimpleConfigObject::values()
{
    return new ::java::util::HashSet(static_cast< ::java::util::Collection* >(npc(value)->values()));
}

java::lang::String*& com::typesafe::config::impl::SimpleConfigObject::EMPTY_NAME()
{
    clinit();
    return EMPTY_NAME_;
}
java::lang::String* com::typesafe::config::impl::SimpleConfigObject::EMPTY_NAME_;

com::typesafe::config::impl::SimpleConfigObject*& com::typesafe::config::impl::SimpleConfigObject::emptyInstance()
{
    clinit();
    return emptyInstance_;
}
com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::emptyInstance_;

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::empty()
{
    clinit();
    return emptyInstance_;
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::empty(::com::typesafe::config::ConfigOrigin* origin)
{
    clinit();
    if(origin == nullptr)
        return empty();
    else
        return new SimpleConfigObject(origin, ::java::util::Collections::/* <String, AbstractConfigValue> */emptyMap());
}

com::typesafe::config::impl::SimpleConfigObject* com::typesafe::config::impl::SimpleConfigObject::emptyMissing(::com::typesafe::config::ConfigOrigin* baseOrigin)
{
    clinit();
    return new SimpleConfigObject(SimpleConfigOrigin::newSimple(::java::lang::StringBuilder().append(npc(baseOrigin)->description())->append(u" (not found)"_j)->toString()), ::java::util::Collections::/* <String, AbstractConfigValue> */emptyMap());
}

java::lang::Object* com::typesafe::config::impl::SimpleConfigObject::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigObject", 43);
    return c;
}

void com::typesafe::config::impl::SimpleConfigObject::clinit()
{
struct string_init_ {
    string_init_() {
    EMPTY_NAME_ = u"empty config"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        emptyInstance_ = empty(SimpleConfigOrigin::newSimple(EMPTY_NAME_));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::SimpleConfigObject::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return super::newCopy(origin);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigObject::mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback)
{
    return super::mergedWithObject(stack, fallback);
}

void com::typesafe::config::impl::SimpleConfigObject::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

java::lang::String* com::typesafe::config::impl::SimpleConfigObject::render()
{
    return super::render();
}

java::lang::String* com::typesafe::config::impl::SimpleConfigObject::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return super::render(options);
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject::getClass0()
{
    return class_();
}

