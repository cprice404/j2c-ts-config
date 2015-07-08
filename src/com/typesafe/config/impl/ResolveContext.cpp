// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveContext.java
#include <com/typesafe/config/impl/ResolveContext.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NotPossibleToResolve.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/ConfigReference.hpp>
#include <com/typesafe/config/impl/MemoKey.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveMemos.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SubstitutionExpression.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/IdentityHashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>

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
com::typesafe::config::impl::ResolveContext::ResolveContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveContext::ResolveContext(ResolveMemos* memos, ::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild, ::java::util::List* resolveStack, ::java::util::Set* cycleMarkers) 
    : ResolveContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(memos,options,restrictToChild,resolveStack,cycleMarkers);
}

com::typesafe::config::impl::ResolveContext::ResolveContext(::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild) 
    : ResolveContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(options,restrictToChild);
}

void com::typesafe::config::impl::ResolveContext::ctor(ResolveMemos* memos, ::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild, ::java::util::List* resolveStack, ::java::util::Set* cycleMarkers)
{
    super::ctor();
    this->memos = memos;
    this->options_ = options;
    this->restrictToChild_ = restrictToChild;
    this->resolveStack = ::java::util::Collections::unmodifiableList(resolveStack);
    this->cycleMarkers = ::java::util::Collections::unmodifiableSet(cycleMarkers);
}

java::util::Set* com::typesafe::config::impl::ResolveContext::newCycleMarkers()
{
    clinit();
    return ::java::util::Collections::newSetFromMap(new ::java::util::IdentityHashMap());
}

void com::typesafe::config::impl::ResolveContext::ctor(::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild)
{
    ctor(new ResolveMemos(), options, restrictToChild, new ::java::util::ArrayList(), newCycleMarkers());
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"ResolveContext restrict to child "_j)->append(static_cast< ::java::lang::Object* >(restrictToChild))->toString());

}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::addCycleMarker(AbstractConfigValue* value)
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"++ Cycle marker "_j)->append(static_cast< ::java::lang::Object* >(value))
            ->append(u"@"_j)
            ->append(::java::lang::System::identityHashCode(value))->toString());

    if(npc(cycleMarkers)->contains(value))
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Added cycle marker twice "_j)->append(static_cast< ::java::lang::Object* >(value))->toString());

    auto copy = newCycleMarkers();
    npc(copy)->addAll(cycleMarkers);
    npc(copy)->add(value);
    return new ResolveContext(memos, options_, restrictToChild_, resolveStack, copy);
}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::removeCycleMarker(AbstractConfigValue* value)
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"-- Cycle marker "_j)->append(static_cast< ::java::lang::Object* >(value))
            ->append(u"@"_j)
            ->append(::java::lang::System::identityHashCode(value))->toString());

    auto copy = newCycleMarkers();
    npc(copy)->addAll(cycleMarkers);
    npc(copy)->remove(value);
    return new ResolveContext(memos, options_, restrictToChild_, resolveStack, copy);
}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::memoize(MemoKey* key, AbstractConfigValue* value)
{
    auto changed = npc(memos)->put(key, value);
    return new ResolveContext(changed, options_, restrictToChild_, resolveStack, cycleMarkers);
}

com::typesafe::config::ConfigResolveOptions* com::typesafe::config::impl::ResolveContext::options()
{
    return options_;
}

bool com::typesafe::config::impl::ResolveContext::isRestrictedToChild()
{
    return restrictToChild_ != nullptr;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::ResolveContext::restrictToChild()
{
    return restrictToChild_;
}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::restrict(Path* restrictTo)
{
    if(restrictTo == restrictToChild_)
        return this;
    else
        return new ResolveContext(memos, options_, restrictTo, resolveStack, cycleMarkers);
}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::unrestricted()
{
    return restrict(nullptr);
}

java::lang::String* com::typesafe::config::impl::ResolveContext::traceString()
{
    auto separator = u", "_j;
    auto sb = new ::java::lang::StringBuilder();
    for (auto _i = npc(resolveStack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* value = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< ConfigReference* >(value) != nullptr) {
                npc(sb)->append(npc(npc((java_cast< ConfigReference* >(value)))->expression())->toString());
                npc(sb)->append(separator);
            }
        }
    }
    if(npc(sb)->length() > 0)
        npc(sb)->setLength(npc(sb)->length() - npc(separator)->length());

    return npc(sb)->toString();
}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::pushTrace(AbstractConfigValue* value)
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"pushing trace "_j)->append(static_cast< ::java::lang::Object* >(value))->toString());

    ::java::util::List* copy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(resolveStack));
    npc(copy)->add(value);
    return new ResolveContext(memos, options_, restrictToChild_, copy, cycleMarkers);
}

com::typesafe::config::impl::ResolveContext* com::typesafe::config::impl::ResolveContext::popTrace()
{
    ::java::util::List* copy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(resolveStack));
    auto old = java_cast< AbstractConfigValue* >(npc(copy)->remove(npc(resolveStack)->size() - int32_t(1)));
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(depth() - int32_t(1), ::java::lang::StringBuilder().append(u"popped trace "_j)->append(static_cast< ::java::lang::Object* >(old))->toString());

    return new ResolveContext(memos, options_, restrictToChild_, copy, cycleMarkers);
}

int32_t com::typesafe::config::impl::ResolveContext::depth()
{
    if(npc(resolveStack)->size() > 30)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"resolve getting too deep"_j);

    return npc(resolveStack)->size();
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ResolveContext::resolve(AbstractConfigValue* original, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"resolving "_j)->append(static_cast< ::java::lang::Object* >(original))
            ->append(u" restrictToChild="_j)
            ->append(static_cast< ::java::lang::Object* >(restrictToChild_))
            ->append(u" in "_j)
            ->append(static_cast< ::java::lang::Object* >(source))->toString());

    return npc(npc(pushTrace(original))->realResolve(original, source))->popTrace();
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ResolveContext::realResolve(AbstractConfigValue* original, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    auto const fullKey = new MemoKey(original, nullptr);
    MemoKey* restrictedKey = nullptr;
    auto cached = npc(memos)->get(fullKey);
    if(cached == nullptr && isRestrictedToChild()) {
        restrictedKey = new MemoKey(original, restrictToChild());
        cached = npc(memos)->get(restrictedKey);
    }
    if(cached != nullptr) {
        if(ConfigImpl::traceSubstitutionsEnabled())
            ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"using cached resolution "_j)->append(static_cast< ::java::lang::Object* >(cached))
                ->append(u" for "_j)
                ->append(static_cast< ::java::lang::Object* >(original))
                ->append(u" restrictToChild "_j)
                ->append(static_cast< ::java::lang::Object* >(restrictToChild()))->toString());

        return ResolveResult::make(this, cached);
    } else {
        if(ConfigImpl::traceSubstitutionsEnabled())
            ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"not found in cache, resolving "_j)->append(static_cast< ::java::lang::Object* >(original))
                ->append(u"@"_j)
                ->append(::java::lang::System::identityHashCode(original))->toString());

        if(npc(cycleMarkers)->contains(original)) {
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"Cycle detected, can't resolve; "_j)->append(static_cast< ::java::lang::Object* >(original))
                    ->append(u"@"_j)
                    ->append(::java::lang::System::identityHashCode(original))->toString());

            throw new AbstractConfigValue_NotPossibleToResolve(this);
        }
        auto result = npc(original)->resolveSubstitutions(this, source);
        auto resolved = java_cast< AbstractConfigValue* >(npc(result)->value);
        if(ConfigImpl::traceSubstitutionsEnabled())
            ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"resolved to "_j)->append(static_cast< ::java::lang::Object* >(resolved))
                ->append(u"@"_j)
                ->append(::java::lang::System::identityHashCode(resolved))
                ->append(u" from "_j)
                ->append(static_cast< ::java::lang::Object* >(original))
                ->append(u"@"_j)
                ->append(::java::lang::System::identityHashCode(resolved))->toString());

        auto withMemo = npc(result)->context;
        if(resolved == nullptr || npc(resolved)->resolveStatus() == ResolveStatus::RESOLVED) {
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"caching "_j)->append(static_cast< ::java::lang::Object* >(fullKey))
                    ->append(u" result "_j)
                    ->append(static_cast< ::java::lang::Object* >(resolved))->toString());

            withMemo = npc(withMemo)->memoize(fullKey, resolved);
        } else {
            if(isRestrictedToChild()) {
                if(restrictedKey == nullptr) {
                    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"restrictedKey should not be null here"_j);
                }
                if(ConfigImpl::traceSubstitutionsEnabled())
                    ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"caching "_j)->append(static_cast< ::java::lang::Object* >(restrictedKey))
                        ->append(u" result "_j)
                        ->append(static_cast< ::java::lang::Object* >(resolved))->toString());

                withMemo = npc(withMemo)->memoize(restrictedKey, resolved);
            } else if(npc(options())->getAllowUnresolved()) {
                if(ConfigImpl::traceSubstitutionsEnabled())
                    ConfigImpl::trace(depth(), ::java::lang::StringBuilder().append(u"caching "_j)->append(static_cast< ::java::lang::Object* >(fullKey))
                        ->append(u" result "_j)
                        ->append(static_cast< ::java::lang::Object* >(resolved))->toString());

                withMemo = npc(withMemo)->memoize(fullKey, resolved);
            } else {
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"resolveSubstitutions() did not give us a resolved object"_j);
            }
        }
        return ResolveResult::make(withMemo, resolved);
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ResolveContext::resolve(AbstractConfigValue* value, AbstractConfigObject* root, ::com::typesafe::config::ConfigResolveOptions* options)
{
    clinit();
    auto source = new ResolveSource(root);
    auto context = new ResolveContext(options, nullptr);
    try {
        return java_cast< AbstractConfigValue* >(npc(npc(context)->resolve(value, source))->value);
    } catch (AbstractConfigValue_NotPossibleToResolve* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"NotPossibleToResolve was thrown from an outermost resolve"_j, e);
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveContext", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveContext::getClass0()
{
    return class_();
}

