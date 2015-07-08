// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDelayedMergeObject.java
#include <com/typesafe/config/impl/ConfigDelayedMergeObject.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigException.hpp>
#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigDelayedMerge.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>

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
com::typesafe::config::impl::ConfigDelayedMergeObject::ConfigDelayedMergeObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigDelayedMergeObject::ConfigDelayedMergeObject(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack) 
    : ConfigDelayedMergeObject(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,stack);
}

void com::typesafe::config::impl::ConfigDelayedMergeObject::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack)
{
    super::ctor(origin);
    this->stack = stack;
    if(npc(stack)->isEmpty())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"creating empty delayed merge object"_j);

    if(!(dynamic_cast< AbstractConfigObject* >(java_cast< AbstractConfigValue* >(npc(stack)->get(0))) != nullptr))
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"created a delayed merge object not guaranteed to be an object"_j);

    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< ConfigDelayedMerge* >(v) != nullptr || dynamic_cast< ConfigDelayedMergeObject* >(v) != nullptr)
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"placed nested DelayedMerge in a ConfigDelayedMergeObject, should have consolidated stack"_j);

        }
    }
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::newCopy(ResolveStatus* status, ::com::typesafe::config::ConfigOrigin* origin)
{
    if(status != resolveStatus())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"attempt to create resolved ConfigDelayedMergeObject"_j);

    return new ConfigDelayedMergeObject(origin, stack);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ConfigDelayedMergeObject::resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    auto merged = ConfigDelayedMerge::resolveSubstitutions(this, stack, context, source);
    return npc(merged)->asObjectResult();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::makeReplacement(ResolveContext* context, int32_t skipping)
{
    return ConfigDelayedMerge::makeReplacement(context, stack, skipping);
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ConfigDelayedMergeObject::resolveStatus()
{
    return ResolveStatus::UNRESOLVED;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement)
{
    auto newStack = replaceChildInList(stack, child, replacement);
    if(newStack == nullptr)
        return nullptr;
    else
        return new ConfigDelayedMergeObject(origin(), newStack);
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::hasDescendant(AbstractConfigValue* descendant)
{
    return hasDescendantInList(stack, descendant);
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::relativized(Path* prefix)
{
    ::java::util::List* newStack = new ::java::util::ArrayList();
    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* o = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(newStack)->add(npc(o)->relativized(prefix));
        }
    }
    return new ConfigDelayedMergeObject(origin(), newStack);
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::ignoresFallbacks()
{
    return ConfigDelayedMerge::stackIgnoresFallbacks(stack);
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::mergedWithTheUnmergeable(Unmergeable* fallback)
{
    requireNotIgnoringFallbacks();
    return java_cast< ConfigDelayedMergeObject* >(mergedWithTheUnmergeable(stack, fallback));
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::mergedWithObject(AbstractConfigObject* fallback)
{
    return mergedWithNonObject(fallback);
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::mergedWithNonObject(AbstractConfigValue* fallback)
{
    requireNotIgnoringFallbacks();
    return java_cast< ConfigDelayedMergeObject* >(mergedWithNonObject(stack, fallback));
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withFallback(::com::typesafe::config::ConfigMergeable* mergeable)
{
    return java_cast< ConfigDelayedMergeObject* >(super::withFallback(mergeable));
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withOnlyKey(::java::lang::String* key)
{
    throw notResolved();
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withoutKey(::java::lang::String* key)
{
    throw notResolved();
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withOnlyPathOrNull(Path* path)
{
    throw notResolved();
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withOnlyPath(Path* path)
{
    throw notResolved();
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withoutPath(Path* path)
{
    throw notResolved();
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withValue(::java::lang::String* key, ::com::typesafe::config::ConfigValue* value)
{
    throw notResolved();
}

com::typesafe::config::impl::ConfigDelayedMergeObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withValue(Path* path, ::com::typesafe::config::ConfigValue* value)
{
    throw notResolved();
}

java::util::Collection* com::typesafe::config::impl::ConfigDelayedMergeObject::unmergedValues()
{
    return stack;
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ConfigDelayedMergeObject* >(other) != nullptr;
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ConfigDelayedMergeObject* >(other) != nullptr) {
        return canEqual(other) && (java_cast< ::java::util::List* >(this->stack) == java_cast< ::java::util::List* >(npc((java_cast< ConfigDelayedMergeObject* >(other)))->stack) || npc(java_cast< ::java::util::List* >(this->stack))->equals(java_cast< ::java::util::List* >(npc((java_cast< ConfigDelayedMergeObject* >(other)))->stack)));
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::ConfigDelayedMergeObject::hashCode()
{
    return npc(stack)->hashCode();
}

void com::typesafe::config::impl::ConfigDelayedMergeObject::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    ConfigDelayedMerge::render(stack, sb, indent, atRoot, atKey, options);
}

void com::typesafe::config::impl::ConfigDelayedMergeObject::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    render(sb, indent, atRoot, nullptr, options);
}

com::typesafe::config::ConfigException* com::typesafe::config::impl::ConfigDelayedMergeObject::notResolved()
{
    clinit();
    return new ::com::typesafe::config::ConfigException_NotResolved(u"need to Config#resolve() before using this object, see the API docs for Config#resolve()"_j);
}

java::util::Map* com::typesafe::config::impl::ConfigDelayedMergeObject::unwrapped()
{
    throw notResolved();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::get(::java::lang::Object* key)
{
    throw notResolved();
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::containsKey(::java::lang::Object* key)
{
    throw notResolved();
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::containsValue(::java::lang::Object* value)
{
    throw notResolved();
}

java::util::Set* com::typesafe::config::impl::ConfigDelayedMergeObject::entrySet()
{
    throw notResolved();
}

bool com::typesafe::config::impl::ConfigDelayedMergeObject::isEmpty()
{
    throw notResolved();
}

java::util::Set* com::typesafe::config::impl::ConfigDelayedMergeObject::keySet()
{
    throw notResolved();
}

int32_t com::typesafe::config::impl::ConfigDelayedMergeObject::size()
{
    throw notResolved();
}

java::util::Collection* com::typesafe::config::impl::ConfigDelayedMergeObject::values()
{
    throw notResolved();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::attemptPeekWithPartialResolve(::java::lang::String* key)
{
    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* layer = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< AbstractConfigObject* >(layer) != nullptr) {
                auto objectLayer = java_cast< AbstractConfigObject* >(layer);
                auto v = npc(objectLayer)->attemptPeekWithPartialResolve(key);
                if(v != nullptr) {
                    if(npc(v)->ignoresFallbacks()) {
                        return v;
                    } else {
                        continue;
                    }
                } else if(dynamic_cast< Unmergeable* >(layer) != nullptr) {
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"should not be reached: unmergeable object returned null value"_j);
                } else {
                    continue;
                }
            } else if(dynamic_cast< Unmergeable* >(layer) != nullptr) {
                throw new ::com::typesafe::config::ConfigException_NotResolved(::java::lang::StringBuilder().append(u"Key '"_j)->append(key)
                    ->append(u"' is not available at '"_j)
                    ->append(npc(origin())->description())
                    ->append(u"' because value at '"_j)
                    ->append(npc(npc(layer)->origin())->description())
                    ->append(u"' has not been resolved and may turn out to contain or hide '"_j)
                    ->append(key)
                    ->append(u"'."_j)
                    ->append(u" Be sure to Config#resolve() before using a config object."_j)->toString());
            } else if(npc(layer)->resolveStatus() == ResolveStatus::UNRESOLVED) {
                if(!(dynamic_cast< ::com::typesafe::config::ConfigList* >(layer) != nullptr))
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Expecting a list here, not "_j)->append(static_cast< ::java::lang::Object* >(layer))->toString());

                return nullptr;
            } else {
                if(!npc(layer)->ignoresFallbacks()) {
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"resolved non-object should ignore fallbacks"_j);
                }
                return nullptr;
            }
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Delayed merge stack does not contain any unmergeable values"_j);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigDelayedMergeObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigDelayedMergeObject", 49);
    return c;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMergeObject::atKey(::java::lang::String* key)
{
    return AbstractConfigValue::atKey(key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMergeObject::atPath(::java::lang::String* path)
{
    return AbstractConfigValue::atPath(path);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::ConfigDelayedMergeObject::origin()
{
    return AbstractConfigValue::origin();
}

java::lang::String* com::typesafe::config::impl::ConfigDelayedMergeObject::render()
{
    return AbstractConfigValue::render();
}

java::lang::String* com::typesafe::config::impl::ConfigDelayedMergeObject::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return AbstractConfigValue::render(options);
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigDelayedMergeObject::valueType()
{
    return AbstractConfigObject::valueType();
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigDelayedMergeObject::withOrigin(::com::typesafe::config::ConfigOrigin* origin)
{
    return AbstractConfigObject::withOrigin(origin);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ConfigDelayedMergeObject::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return super::newCopy(origin);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMergeObject::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    return super::atKey(origin, key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMergeObject::atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path)
{
    return super::atPath(origin, path);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::mergedWithNonObject(::java::util::Collection* stack, AbstractConfigValue* fallback)
{
    return super::mergedWithNonObject(stack, fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback)
{
    return super::mergedWithObject(stack, fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMergeObject::mergedWithTheUnmergeable(::java::util::Collection* stack, Unmergeable* fallback)
{
    return super::mergedWithTheUnmergeable(stack, fallback);
}

java::lang::Class* com::typesafe::config::impl::ConfigDelayedMergeObject::getClass0()
{
    return class_();
}

