// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java
#include <com/typesafe/config/impl/ResolveSource.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource_Node.hpp>
#include <com/typesafe/config/impl/ResolveSource_ResultWithPath.hpp>
#include <com/typesafe/config/impl/ResolveSource_ValueWithPath.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SubstitutionExpression.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>

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
com::typesafe::config::impl::ResolveSource::ResolveSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveSource::ResolveSource(AbstractConfigObject* root, ResolveSource_Node* pathFromRoot) 
    : ResolveSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(root,pathFromRoot);
}

com::typesafe::config::impl::ResolveSource::ResolveSource(AbstractConfigObject* root) 
    : ResolveSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(root);
}

void com::typesafe::config::impl::ResolveSource::ctor(AbstractConfigObject* root, ResolveSource_Node* pathFromRoot)
{
    super::ctor();
    this->root = root;
    this->pathFromRoot = pathFromRoot;
}

void com::typesafe::config::impl::ResolveSource::ctor(AbstractConfigObject* root)
{
    super::ctor();
    this->root = root;
    this->pathFromRoot = nullptr;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::ResolveSource::rootMustBeObj(Container* value)
{
    if(dynamic_cast< AbstractConfigObject* >(value) != nullptr) {
        return java_cast< AbstractConfigObject* >(value);
    } else {
        return SimpleConfigObject::empty();
    }
}

com::typesafe::config::impl::ResolveSource_ResultWithPath* com::typesafe::config::impl::ResolveSource::findInObject(AbstractConfigObject* obj, ResolveContext* context, Path* path) /* throws(NotPossibleToResolve) */
{
    clinit();
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(::java::lang::StringBuilder().append(u"*** finding '"_j)->append(static_cast< ::java::lang::Object* >(path))
            ->append(u"' in "_j)
            ->append(static_cast< ::java::lang::Object* >(obj))->toString());

    auto restriction = npc(context)->restrictToChild();
    auto partiallyResolved = npc(npc(context)->restrict(path))->resolve(obj, new ResolveSource(obj));
    auto newContext = npc(npc(partiallyResolved)->context)->restrict(restriction);
    if(dynamic_cast< AbstractConfigObject* >(java_cast< AbstractConfigValue* >(npc(partiallyResolved)->value)) != nullptr) {
        auto pair = findInObject(java_cast< AbstractConfigObject* >(java_cast< AbstractConfigValue* >(npc(partiallyResolved)->value)), path);
        return new ResolveSource_ResultWithPath(ResolveResult::make(newContext, npc(pair)->value), npc(pair)->pathFromRoot);
    } else {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"resolved object to non-object "_j)->append(static_cast< ::java::lang::Object* >(obj))
            ->append(u" to "_j)
            ->append(static_cast< ::java::lang::Object* >(partiallyResolved))->toString());
    }
}

com::typesafe::config::impl::ResolveSource_ValueWithPath* com::typesafe::config::impl::ResolveSource::findInObject(AbstractConfigObject* obj, Path* path)
{
    clinit();
    try {
        return findInObject(obj, path, static_cast< ResolveSource_Node* >(nullptr));
    } catch (::com::typesafe::config::ConfigException_NotResolved* e) {
        throw ConfigImpl::improveNotResolved(path, e);
    }
}

com::typesafe::config::impl::ResolveSource_ValueWithPath* com::typesafe::config::impl::ResolveSource::findInObject(AbstractConfigObject* obj, Path* path, ResolveSource_Node* parents)
{
    clinit();
    auto key = npc(path)->first();
    auto next = npc(path)->remainder();
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(::java::lang::StringBuilder().append(u"*** looking up '"_j)->append(key)
            ->append(u"' in "_j)
            ->append(static_cast< ::java::lang::Object* >(obj))->toString());

    auto v = npc(obj)->attemptPeekWithPartialResolve(key);
    auto newParents = parents == nullptr ? new ResolveSource_Node(obj) : npc(parents)->prepend(obj);
    if(next == nullptr) {
        return new ResolveSource_ValueWithPath(v, newParents);
    } else {
        if(dynamic_cast< AbstractConfigObject* >(v) != nullptr) {
            return findInObject(java_cast< AbstractConfigObject* >(v), next, newParents);
        } else {
            return new ResolveSource_ValueWithPath(nullptr, newParents);
        }
    }
}

com::typesafe::config::impl::ResolveSource_ResultWithPath* com::typesafe::config::impl::ResolveSource::lookupSubst(ResolveContext* context, SubstitutionExpression* subst, int32_t prefixLength) /* throws(NotPossibleToResolve) */
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(npc(context)->depth(), ::java::lang::StringBuilder().append(u"searching for "_j)->append(static_cast< ::java::lang::Object* >(subst))->toString());

    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(npc(context)->depth(), ::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(subst))->append(u" - looking up relative to file it occurred in"_j)->toString());

    auto result = findInObject(root, context, npc(subst)->path());
    if(java_cast< AbstractConfigValue* >(npc(npc(result)->result)->value) == nullptr) {
        auto unprefixed = npc(npc(subst)->path())->subPath(prefixLength);
        if(prefixLength > 0) {
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(npc(npc(result)->result)->context)->depth(), ::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(unprefixed))->append(u" - looking up relative to parent file"_j)->toString());

            result = findInObject(root, npc(npc(result)->result)->context, unprefixed);
        }
        if(java_cast< AbstractConfigValue* >(npc(npc(result)->result)->value) == nullptr && npc(npc(npc(npc(result)->result)->context)->options())->getUseSystemEnvironment()) {
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(npc(npc(result)->result)->context)->depth(), ::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(unprefixed))->append(u" - looking up in system environment"_j)->toString());

            result = findInObject(ConfigImpl::envVariablesAsConfigObject(), context, unprefixed);
        }
    }
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(npc(npc(npc(result)->result)->context)->depth(), ::java::lang::StringBuilder().append(u"resolved to "_j)->append(static_cast< ::java::lang::Object* >(result))->toString());

    return result;
}

com::typesafe::config::impl::ResolveSource* com::typesafe::config::impl::ResolveSource::pushParent(Container* parent)
{
    if(parent == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"can't push null parent"_j);

    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(::java::lang::StringBuilder().append(u"pushing parent "_j)->append(static_cast< ::java::lang::Object* >(parent))
            ->append(u" ==root "_j)
            ->append((parent == static_cast< Container* >(root)))
            ->append(u" onto "_j)
            ->append(static_cast< ::java::lang::Object* >(this))->toString());

    if(pathFromRoot == nullptr) {
        if(parent == static_cast< Container* >(root)) {
            return new ResolveSource(root, new ResolveSource_Node(parent));
        } else {
            if(ConfigImpl::traceSubstitutionsEnabled()) {
                if(npc(root)->hasDescendant(java_cast< AbstractConfigValue* >(parent)))
                    ConfigImpl::trace(::java::lang::StringBuilder().append(u"***** BUG ***** tried to push parent "_j)->append(static_cast< ::java::lang::Object* >(parent))
                        ->append(u" without having a path to it in "_j)
                        ->append(static_cast< ::java::lang::Object* >(this))->toString());

            }
            return this;
        }
    } else {
        auto parentParent = java_cast< Container* >(npc(pathFromRoot)->head());
        if(ConfigImpl::traceSubstitutionsEnabled()) {
            if(parentParent != nullptr && !npc(parentParent)->hasDescendant(java_cast< AbstractConfigValue* >(parent)))
                ConfigImpl::trace(::java::lang::StringBuilder().append(u"***** BUG ***** trying to push non-child of "_j)->append(static_cast< ::java::lang::Object* >(parentParent))
                    ->append(u", non-child was "_j)
                    ->append(static_cast< ::java::lang::Object* >(parent))->toString());

        }
        return new ResolveSource(root, npc(pathFromRoot)->prepend(parent));
    }
}

com::typesafe::config::impl::ResolveSource* com::typesafe::config::impl::ResolveSource::resetParents()
{
    if(pathFromRoot == nullptr)
        return this;
    else
        return new ResolveSource(root);
}

com::typesafe::config::impl::ResolveSource_Node* com::typesafe::config::impl::ResolveSource::replace(ResolveSource_Node* list, Container* old, AbstractConfigValue* replacement)
{
    clinit();
    auto child = java_cast< Container* >(npc(list)->head());
    if(child != old)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Can only replace() the top node we're resolving; had "_j)->append(static_cast< ::java::lang::Object* >(child))
            ->append(u" on top and tried to replace "_j)
            ->append(static_cast< ::java::lang::Object* >(old))
            ->append(u" overall list was "_j)
            ->append(static_cast< ::java::lang::Object* >(list))->toString());

    auto parent = npc(list)->tail() == nullptr ? static_cast< Container* >(nullptr) : java_cast< Container* >(npc(npc(list)->tail())->head());
    if(replacement == nullptr || !(dynamic_cast< Container* >(replacement) != nullptr)) {
        if(parent == nullptr) {
            return nullptr;
        } else {
            auto newParent = npc(parent)->replaceChild(java_cast< AbstractConfigValue* >(old), nullptr);
            return replace(npc(list)->tail(), parent, newParent);
        }
    } else {
        if(parent == nullptr) {
            return new ResolveSource_Node(java_cast< Container* >(replacement));
        } else {
            auto newParent = npc(parent)->replaceChild(java_cast< AbstractConfigValue* >(old), replacement);
            auto newTail = replace(npc(list)->tail(), parent, newParent);
            if(newTail != nullptr)
                return npc(newTail)->prepend(java_cast< Container* >(replacement));
            else
                return new ResolveSource_Node(java_cast< Container* >(replacement));
        }
    }
}

com::typesafe::config::impl::ResolveSource* com::typesafe::config::impl::ResolveSource::replaceCurrentParent(Container* old, Container* replacement)
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(::java::lang::StringBuilder().append(u"replaceCurrentParent old "_j)->append(static_cast< ::java::lang::Object* >(old))
            ->append(u"@"_j)
            ->append(::java::lang::System::identityHashCode(old))
            ->append(u" replacement "_j)
            ->append(static_cast< ::java::lang::Object* >(replacement))
            ->append(u"@"_j)
            ->append(::java::lang::System::identityHashCode(old))
            ->append(u" in "_j)
            ->append(static_cast< ::java::lang::Object* >(this))->toString());

    if(old == replacement) {
        return this;
    } else if(pathFromRoot != nullptr) {
        auto newPath = replace(pathFromRoot, old, java_cast< AbstractConfigValue* >(replacement));
        if(ConfigImpl::traceSubstitutionsEnabled()) {
            ConfigImpl::trace(::java::lang::StringBuilder().append(u"replaced "_j)->append(static_cast< ::java::lang::Object* >(old))
                ->append(u" with "_j)
                ->append(static_cast< ::java::lang::Object* >(replacement))
                ->append(u" in "_j)
                ->append(static_cast< ::java::lang::Object* >(this))->toString());
            ConfigImpl::trace(::java::lang::StringBuilder().append(u"path was: "_j)->append(static_cast< ::java::lang::Object* >(pathFromRoot))
                ->append(u" is now "_j)
                ->append(static_cast< ::java::lang::Object* >(newPath))->toString());
        }
        if(newPath != nullptr)
            return new ResolveSource(java_cast< AbstractConfigObject* >(java_cast< Container* >(npc(newPath)->last())), newPath);
        else
            return new ResolveSource(SimpleConfigObject::empty());
    } else {
        if(old == static_cast< Container* >(root)) {
            return new ResolveSource(rootMustBeObj(replacement));
        } else {
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"attempt to replace root "_j)->append(static_cast< ::java::lang::Object* >(root))
                ->append(u" with "_j)
                ->append(static_cast< ::java::lang::Object* >(replacement))->toString());
        }
    }
}

com::typesafe::config::impl::ResolveSource* com::typesafe::config::impl::ResolveSource::replaceWithinCurrentParent(AbstractConfigValue* old, AbstractConfigValue* replacement)
{
    if(ConfigImpl::traceSubstitutionsEnabled())
        ConfigImpl::trace(::java::lang::StringBuilder().append(u"replaceWithinCurrentParent old "_j)->append(static_cast< ::java::lang::Object* >(old))
            ->append(u"@"_j)
            ->append(::java::lang::System::identityHashCode(old))
            ->append(u" replacement "_j)
            ->append(static_cast< ::java::lang::Object* >(replacement))
            ->append(u"@"_j)
            ->append(::java::lang::System::identityHashCode(old))
            ->append(u" in "_j)
            ->append(static_cast< ::java::lang::Object* >(this))->toString());

    if(old == replacement) {
        return this;
    } else if(pathFromRoot != nullptr) {
        auto parent = java_cast< Container* >(npc(pathFromRoot)->head());
        auto newParent = npc(parent)->replaceChild(old, replacement);
        return replaceCurrentParent(parent, (dynamic_cast< Container* >(newParent) != nullptr) ? java_cast< Container* >(newParent) : static_cast< Container* >(nullptr));
    } else {
        if(old == static_cast< AbstractConfigValue* >(root) && dynamic_cast< Container* >(replacement) != nullptr) {
            return new ResolveSource(rootMustBeObj(java_cast< Container* >(replacement)));
        } else {
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"replace in parent not possible "_j)->append(static_cast< ::java::lang::Object* >(old))
                ->append(u" with "_j)
                ->append(static_cast< ::java::lang::Object* >(replacement))
                ->append(u" in "_j)
                ->append(static_cast< ::java::lang::Object* >(this))->toString());
        }
    }
}

java::lang::String* com::typesafe::config::impl::ResolveSource::toString()
{
    return ::java::lang::StringBuilder().append(u"ResolveSource(root="_j)->append(static_cast< ::java::lang::Object* >(root))
        ->append(u", pathFromRoot="_j)
        ->append(static_cast< ::java::lang::Object* >(pathFromRoot))
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveSource", 38);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveSource::getClass0()
{
    return class_();
}

