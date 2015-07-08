// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>

#include <com/typesafe/config/Config.hpp>
#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigMergeable.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigRenderOptions.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/ConfigDelayedMerge.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/impl/MergeableValue.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>

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
com::typesafe::config::impl::AbstractConfigValue::AbstractConfigValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::AbstractConfigValue::AbstractConfigValue(::com::typesafe::config::ConfigOrigin* origin) 
    : AbstractConfigValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin);
}

void com::typesafe::config::impl::AbstractConfigValue::ctor(::com::typesafe::config::ConfigOrigin* origin)
{
    super::ctor();
    this->origin_ = java_cast< SimpleConfigOrigin* >(origin);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::AbstractConfigValue::origin()
{
    return this->origin_;
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::AbstractConfigValue::resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    return ResolveResult::make(context, this);
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::AbstractConfigValue::resolveStatus()
{
    return ResolveStatus::RESOLVED;
}

java::util::List* com::typesafe::config::impl::AbstractConfigValue::replaceChildInList(::java::util::List* list, AbstractConfigValue* child, AbstractConfigValue* replacement)
{
    clinit();
    auto i = int32_t(0);
    while (i < npc(list)->size() && java_cast< AbstractConfigValue* >(npc(list)->get(i)) != child) 
                ++i;

    if(i == npc(list)->size())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"tried to replace "_j)->append(static_cast< ::java::lang::Object* >(child))
            ->append(u" which is not in "_j)
            ->append(static_cast< ::java::lang::Object* >(list))->toString());

    ::java::util::List* newStack = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(list));
    if(replacement != nullptr)
        npc(newStack)->set(i, replacement);
    else
        npc(newStack)->remove(i);
    if(npc(newStack)->isEmpty())
        return nullptr;
    else
        return newStack;
}

bool com::typesafe::config::impl::AbstractConfigValue::hasDescendantInList(::java::util::List* list, AbstractConfigValue* descendant)
{
    clinit();
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(v == descendant)
                return true;

        }
    }
    for (auto _i = npc(list)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< Container* >(v) != nullptr && npc((java_cast< Container* >(v)))->hasDescendant(descendant))
                return true;

        }
    }
    return false;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::relativized(Path* prefix)
{
    return this;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::toFallbackValue()
{
    return this;
}

bool com::typesafe::config::impl::AbstractConfigValue::ignoresFallbacks()
{
    return resolveStatus() == ResolveStatus::RESOLVED;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::withFallbacksIgnored()
{
    if(ignoresFallbacks())
        return this;
    else
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"value class doesn't implement forced fallback-ignoring "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());
}

void com::typesafe::config::impl::AbstractConfigValue::requireNotIgnoringFallbacks()
{
    if(ignoresFallbacks())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"method should not have been called with ignoresFallbacks=true "_j)->append(npc(getClass())->getSimpleName())->toString());

}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::constructDelayedMerge(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack)
{
    return new ConfigDelayedMerge(origin, stack);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::mergedWithTheUnmergeable(::java::util::Collection* stack, Unmergeable* fallback)
{
    requireNotIgnoringFallbacks();
    ::java::util::List* newStack = new ::java::util::ArrayList();
    npc(newStack)->addAll(stack);
    npc(newStack)->addAll(npc(fallback)->unmergedValues());
    return constructDelayedMerge(AbstractConfigObject::mergeOrigins(static_cast< ::java::util::Collection* >(newStack)), newStack);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::delayMerge(::java::util::Collection* stack, AbstractConfigValue* fallback)
{
    ::java::util::List* newStack = new ::java::util::ArrayList();
    npc(newStack)->addAll(stack);
    npc(newStack)->add(fallback);
    return constructDelayedMerge(AbstractConfigObject::mergeOrigins(static_cast< ::java::util::Collection* >(newStack)), newStack);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback)
{
    requireNotIgnoringFallbacks();
    if(dynamic_cast< AbstractConfigObject* >(this) != nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Objects must reimplement mergedWithObject"_j);

    return mergedWithNonObject(stack, fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::mergedWithNonObject(::java::util::Collection* stack, AbstractConfigValue* fallback)
{
    requireNotIgnoringFallbacks();
    if(resolveStatus() == ResolveStatus::RESOLVED) {
        return withFallbacksIgnored();
    } else {
        return delayMerge(stack, fallback);
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::mergedWithTheUnmergeable(Unmergeable* fallback)
{
    requireNotIgnoringFallbacks();
    return mergedWithTheUnmergeable(::java::util::Collections::singletonList(this), fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::mergedWithObject(AbstractConfigObject* fallback)
{
    requireNotIgnoringFallbacks();
    return mergedWithObject(::java::util::Collections::singletonList(this), fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::mergedWithNonObject(AbstractConfigValue* fallback)
{
    requireNotIgnoringFallbacks();
    return mergedWithNonObject(::java::util::Collections::singletonList(this), fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::withOrigin(::com::typesafe::config::ConfigOrigin* origin)
{
    if(static_cast< ::java::lang::Object* >(this->origin_) == static_cast< ::java::lang::Object* >(origin))
        return this;
    else
        return newCopy(origin);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue::withFallback(::com::typesafe::config::ConfigMergeable* mergeable)
{
    if(ignoresFallbacks()) {
        return this;
    } else {
        auto other = npc((java_cast< MergeableValue* >(mergeable)))->toFallbackValue();
        if(dynamic_cast< Unmergeable* >(other) != nullptr) {
            return mergedWithTheUnmergeable(java_cast< Unmergeable* >(other));
        } else if(dynamic_cast< AbstractConfigObject* >(other) != nullptr) {
            return mergedWithObject(java_cast< AbstractConfigObject* >(other));
        } else {
            return mergedWithNonObject(java_cast< AbstractConfigValue* >(other));
        }
    }
}

bool com::typesafe::config::impl::AbstractConfigValue::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ::com::typesafe::config::ConfigValue* >(other) != nullptr;
}

bool com::typesafe::config::impl::AbstractConfigValue::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ::com::typesafe::config::ConfigValue* >(other) != nullptr) {
        return canEqual(other) && (this->valueType() == npc((java_cast< ::com::typesafe::config::ConfigValue* >(other)))->valueType()) && ConfigImplUtil::equalsHandlingNull(this->unwrapped(), npc((java_cast< ::com::typesafe::config::ConfigValue* >(other)))->unwrapped());
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::AbstractConfigValue::hashCode()
{
    auto o = this->unwrapped();
    if(o == nullptr)
        return 0;
    else
        return npc(o)->hashCode();
}

java::lang::String* com::typesafe::config::impl::AbstractConfigValue::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    render(sb, 0, true, nullptr, ::com::typesafe::config::ConfigRenderOptions::concise());
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"("_j)
        ->append(npc(sb)->toString())
        ->append(u")"_j)->toString();
}

void com::typesafe::config::impl::AbstractConfigValue::indent(::java::lang::StringBuilder* sb, int32_t indent, ::com::typesafe::config::ConfigRenderOptions* options)
{
    clinit();
    if(npc(options)->getFormatted()) {
        auto remaining = indent;
        while (remaining > 0) {
            npc(sb)->append(u"    "_j);
            --remaining;
        }
    }
}

void com::typesafe::config::impl::AbstractConfigValue::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    if(atKey != nullptr) {
        ::java::lang::String* renderedKey;
        if(npc(options)->getJson())
            renderedKey = ConfigImplUtil::renderJsonString(atKey);
        else
            renderedKey = ConfigImplUtil::renderStringUnquotedIfPossible(atKey);
        npc(sb)->append(renderedKey);
        if(npc(options)->getJson()) {
            if(npc(options)->getFormatted())
                npc(sb)->append(u" : "_j);
            else
                npc(sb)->append(u":"_j);
        } else {
            if(dynamic_cast< ::com::typesafe::config::ConfigObject* >(this) != nullptr) {
                if(npc(options)->getFormatted())
                    npc(sb)->append(u' ');

            } else {
                npc(sb)->append(u"="_j);
            }
        }
    }
    render(sb, indent, atRoot, options);
}

void com::typesafe::config::impl::AbstractConfigValue::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    auto u = unwrapped();
    npc(sb)->append(npc(u)->toString());
}

java::lang::String* com::typesafe::config::impl::AbstractConfigValue::render()
{
    return render(::com::typesafe::config::ConfigRenderOptions::defaults());
}

java::lang::String* com::typesafe::config::impl::AbstractConfigValue::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    auto sb = new ::java::lang::StringBuilder();
    render(sb, 0, true, nullptr, options);
    return npc(sb)->toString();
}

java::lang::String* com::typesafe::config::impl::AbstractConfigValue::transformToString()
{
    return nullptr;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::AbstractConfigValue::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    auto m = ::java::util::Collections::singletonMap(key, this);
    return java_cast< SimpleConfig* >((new SimpleConfigObject(origin, m))->toConfig());
}

com::typesafe::config::Config* com::typesafe::config::impl::AbstractConfigValue::atKey(::java::lang::String* key)
{
    return atKey(SimpleConfigOrigin::newSimple(::java::lang::StringBuilder().append(u"atKey("_j)->append(key)
        ->append(u")"_j)->toString()), key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::AbstractConfigValue::atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path)
{
    auto parent = npc(path)->parent();
    auto result = atKey(origin, npc(path)->last());
    while (parent != nullptr) {
        auto key = npc(parent)->last();
        result = npc(result)->atKey(origin, key);
        parent = npc(parent)->parent();
    }
    return result;
}

com::typesafe::config::Config* com::typesafe::config::impl::AbstractConfigValue::atPath(::java::lang::String* pathExpression)
{
    auto origin = SimpleConfigOrigin::newSimple(::java::lang::StringBuilder().append(u"atPath("_j)->append(pathExpression)
        ->append(u")"_j)->toString());
    return atPath(origin, Path::newPath(pathExpression));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::AbstractConfigValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.AbstractConfigValue", 44);
    return c;
}

java::lang::Class* com::typesafe::config::impl::AbstractConfigValue::getClass0()
{
    return class_();
}

