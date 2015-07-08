// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigReference.java
#include <com/typesafe/config/impl/ConfigReference.hpp>

#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigException_UnresolvedSubstitution.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NotPossibleToResolve.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource_Node.hpp>
#include <com/typesafe/config/impl/ResolveSource_ResultWithPath.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/SubstitutionExpression.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collections.hpp>
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
com::typesafe::config::impl::ConfigReference::ConfigReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigReference::ConfigReference(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr) 
    : ConfigReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,expr);
}

com::typesafe::config::impl::ConfigReference::ConfigReference(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr, int32_t prefixLength) 
    : ConfigReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,expr,prefixLength);
}

void com::typesafe::config::impl::ConfigReference::ctor(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr)
{
    ctor(origin, expr, int32_t(0));
}

void com::typesafe::config::impl::ConfigReference::ctor(::com::typesafe::config::ConfigOrigin* origin, SubstitutionExpression* expr, int32_t prefixLength)
{
    super::ctor(origin);
    this->expr = expr;
    this->prefixLength = prefixLength;
}

com::typesafe::config::ConfigException_NotResolved* com::typesafe::config::impl::ConfigReference::notResolved()
{
    return new ::com::typesafe::config::ConfigException_NotResolved(::java::lang::StringBuilder().append(u"need to Config#resolve(), see the API docs for Config#resolve(); substitution not resolved: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigReference::valueType()
{
    throw notResolved();
}

java::lang::Object* com::typesafe::config::impl::ConfigReference::unwrapped()
{
    throw notResolved();
}

com::typesafe::config::impl::ConfigReference* com::typesafe::config::impl::ConfigReference::newCopy(::com::typesafe::config::ConfigOrigin* newOrigin)
{
    return new ConfigReference(newOrigin, expr, prefixLength);
}

bool com::typesafe::config::impl::ConfigReference::ignoresFallbacks()
{
    return false;
}

java::util::Collection* com::typesafe::config::impl::ConfigReference::unmergedValues()
{
    return ::java::util::Collections::singleton(this);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ConfigReference::resolveSubstitutions(ResolveContext* context, ResolveSource* source)
{
    auto newContext = npc(context)->addCycleMarker(this);
    AbstractConfigValue* v;
    try {
        auto resultWithPath = npc(source)->lookupSubst(newContext, expr, prefixLength);
        newContext = npc(npc(resultWithPath)->result)->context;
        if(java_cast< AbstractConfigValue* >(npc(npc(resultWithPath)->result)->value) != nullptr) {
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"recursively resolving "_j)->append(static_cast< ::java::lang::Object* >(resultWithPath))
                    ->append(u" which was the resolution of "_j)
                    ->append(static_cast< ::java::lang::Object* >(expr))
                    ->append(u" against "_j)
                    ->append(static_cast< ::java::lang::Object* >(source))->toString());

            auto recursiveResolveSource = (new ResolveSource(java_cast< AbstractConfigObject* >(java_cast< Container* >(npc(npc(resultWithPath)->pathFromRoot)->last())), npc(resultWithPath)->pathFromRoot));
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"will recursively resolve against "_j)->append(static_cast< ::java::lang::Object* >(recursiveResolveSource))->toString());

            auto result = npc(newContext)->resolve(java_cast< AbstractConfigValue* >(npc(npc(resultWithPath)->result)->value), recursiveResolveSource);
            v = java_cast< AbstractConfigValue* >(npc(result)->value);
            newContext = npc(result)->context;
        } else {
            v = nullptr;
        }
    } catch (AbstractConfigValue_NotPossibleToResolve* e) {
        if(ConfigImpl::traceSubstitutionsEnabled())
            ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"not possible to resolve "_j)->append(static_cast< ::java::lang::Object* >(expr))
                ->append(u", cycle involved: "_j)
                ->append(npc(e)->traceString())->toString());

        if(npc(expr)->optional())
            v = nullptr;
        else
            throw new ::com::typesafe::config::ConfigException_UnresolvedSubstitution(origin(), ::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(expr))->append(u" was part of a cycle of substitutions involving "_j)
                ->append(npc(e)->traceString())->toString(), e);
    }
    if(v == nullptr && !npc(expr)->optional()) {
        if(npc(npc(newContext)->options())->getAllowUnresolved())
            return ResolveResult::make(npc(newContext)->removeCycleMarker(this), this);
        else
            throw new ::com::typesafe::config::ConfigException_UnresolvedSubstitution(origin(), npc(expr)->toString());
    } else {
        return ResolveResult::make(npc(newContext)->removeCycleMarker(this), v);
    }
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ConfigReference::resolveStatus()
{
    return ResolveStatus::UNRESOLVED;
}

com::typesafe::config::impl::ConfigReference* com::typesafe::config::impl::ConfigReference::relativized(Path* prefix)
{
    auto newExpr = npc(expr)->changePath(npc(npc(expr)->path())->prepend(prefix));
    return new ConfigReference(origin(), newExpr, prefixLength + npc(prefix)->length());
}

bool com::typesafe::config::impl::ConfigReference::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ConfigReference* >(other) != nullptr;
}

bool com::typesafe::config::impl::ConfigReference::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ConfigReference* >(other) != nullptr) {
        return canEqual(other) && npc(this->expr)->equals(npc((java_cast< ConfigReference* >(other)))->expr);
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::ConfigReference::hashCode()
{
    return npc(expr)->hashCode();
}

void com::typesafe::config::impl::ConfigReference::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    npc(sb)->append(npc(expr)->toString());
}

com::typesafe::config::impl::SubstitutionExpression* com::typesafe::config::impl::ConfigReference::expression()
{
    return expr;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigReference", 40);
    return c;
}

void com::typesafe::config::impl::ConfigReference::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

java::lang::String* com::typesafe::config::impl::ConfigReference::render()
{
    return super::render();
}

java::lang::String* com::typesafe::config::impl::ConfigReference::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return super::render(options);
}

java::lang::Class* com::typesafe::config::impl::ConfigReference::getClass0()
{
    return class_();
}

