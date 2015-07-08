// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDelayedMerge.java
#include <com/typesafe/config/impl/ConfigDelayedMerge.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigRenderOptions.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigDelayedMergeObject.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ReplaceableMergeStack.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/Unmergeable.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
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
com::typesafe::config::impl::ConfigDelayedMerge::ConfigDelayedMerge(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigDelayedMerge::ConfigDelayedMerge(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack) 
    : ConfigDelayedMerge(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,stack);
}

void com::typesafe::config::impl::ConfigDelayedMerge::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* stack)
{
    super::ctor(origin);
    this->stack = stack;
    if(npc(stack)->isEmpty())
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"creating empty delayed merge value"_j);

    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< ConfigDelayedMerge* >(v) != nullptr || dynamic_cast< ConfigDelayedMergeObject* >(v) != nullptr)
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"placed nested DelayedMerge in a ConfigDelayedMerge, should have consolidated stack"_j);

        }
    }
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigDelayedMerge::valueType()
{
    throw new ::com::typesafe::config::ConfigException_NotResolved(u"called valueType() on value with unresolved substitutions, need to Config#resolve() first, see API docs"_j);
}

java::lang::Object* com::typesafe::config::impl::ConfigDelayedMerge::unwrapped()
{
    throw new ::com::typesafe::config::ConfigException_NotResolved(u"called unwrapped() on value with unresolved substitutions, need to Config#resolve() first, see API docs"_j);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ConfigDelayedMerge::resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    return resolveSubstitutions(this, stack, context, source);
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ConfigDelayedMerge::resolveSubstitutions(ReplaceableMergeStack* replaceable, ::java::util::List* stack, ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    clinit();
    if(ConfigImpl::traceSubstitutionsEnabled()) {
        ConfigImpl::trace(npc(context)->depth(), ::java::lang::StringBuilder().append(u"delayed merge stack has "_j)->append(npc(stack)->size())
            ->append(u" items:"_j)->toString());
        auto count = int32_t(0);
        for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
            AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
            {
                ConfigImpl::trace(npc(context)->depth() + int32_t(1), ::java::lang::StringBuilder().append(count)->append(u": "_j)
                    ->append(static_cast< ::java::lang::Object* >(v))->toString());
                count += 1;
            }
        }
    }
    auto newContext = context;
    auto count = int32_t(0);
    AbstractConfigValue* merged = nullptr;
    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* end = java_cast< AbstractConfigValue* >(_i->next());
        {
            ResolveSource* sourceForEnd;
            if(dynamic_cast< ReplaceableMergeStack* >(end) != nullptr)
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"A delayed merge should not contain another one: "_j)->append(static_cast< ::java::lang::Object* >(replaceable))->toString());
            else if(dynamic_cast< Unmergeable* >(end) != nullptr) {
                auto remainder = npc(replaceable)->makeReplacement(context, count + int32_t(1));
                if(ConfigImpl::traceSubstitutionsEnabled())
                    ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"remainder portion: "_j)->append(static_cast< ::java::lang::Object* >(remainder))->toString());

                if(ConfigImpl::traceSubstitutionsEnabled())
                    ConfigImpl::trace(npc(newContext)->depth(), u"building sourceForEnd"_j);

                sourceForEnd = npc(source)->replaceWithinCurrentParent(java_cast< AbstractConfigValue* >(replaceable), remainder);
                if(ConfigImpl::traceSubstitutionsEnabled())
                    ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"  sourceForEnd before reset parents but after replace: "_j)->append(static_cast< ::java::lang::Object* >(sourceForEnd))->toString());

                sourceForEnd = npc(sourceForEnd)->resetParents();
            } else {
                if(ConfigImpl::traceSubstitutionsEnabled())
                    ConfigImpl::trace(npc(newContext)->depth(), u"will resolve end against the original source with parent pushed"_j);

                sourceForEnd = npc(source)->pushParent(replaceable);
            }
            if(ConfigImpl::traceSubstitutionsEnabled()) {
                ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"sourceForEnd      ="_j)->append(static_cast< ::java::lang::Object* >(sourceForEnd))->toString());
            }
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"Resolving highest-priority item in delayed merge "_j)->append(static_cast< ::java::lang::Object* >(end))
                    ->append(u" against "_j)
                    ->append(static_cast< ::java::lang::Object* >(sourceForEnd))
                    ->append(u" endWasRemoved="_j)
                    ->append((source != sourceForEnd))->toString());

            auto result = npc(newContext)->resolve(end, sourceForEnd);
            auto resolvedEnd = java_cast< AbstractConfigValue* >(npc(result)->value);
            newContext = npc(result)->context;
            if(resolvedEnd != nullptr) {
                if(merged == nullptr) {
                    merged = resolvedEnd;
                } else {
                    if(ConfigImpl::traceSubstitutionsEnabled())
                        ConfigImpl::trace(npc(newContext)->depth() + int32_t(1), ::java::lang::StringBuilder().append(u"merging "_j)->append(static_cast< ::java::lang::Object* >(merged))
                            ->append(u" with fallback "_j)
                            ->append(static_cast< ::java::lang::Object* >(resolvedEnd))->toString());

                    merged = npc(merged)->withFallback(resolvedEnd);
                }
            }
            count += 1;
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(newContext)->depth(), ::java::lang::StringBuilder().append(u"stack merged, yielding: "_j)->append(static_cast< ::java::lang::Object* >(merged))->toString());

        }
    }
    return ResolveResult::make(newContext, merged);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::makeReplacement(ResolveContext* context, int32_t skipping)
{
    return ConfigDelayedMerge::makeReplacement(context, stack, skipping);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::makeReplacement(ResolveContext* context, ::java::util::List* stack, int32_t skipping)
{
    clinit();
    auto subStack = npc(stack)->subList(skipping, npc(stack)->size());
    if(npc(subStack)->isEmpty()) {
        if(ConfigImpl::traceSubstitutionsEnabled())
            ConfigImpl::trace(npc(context)->depth(), u"Nothing else in the merge stack, replacing with null"_j);

        return nullptr;
    } else {
        AbstractConfigValue* merged = nullptr;
        for (auto _i = npc(subStack)->iterator(); _i->hasNext(); ) {
            AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
            {
                if(merged == nullptr)
                    merged = v;
                else
                    merged = npc(merged)->withFallback(v);
            }
        }
        return merged;
    }
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ConfigDelayedMerge::resolveStatus()
{
    return ResolveStatus::UNRESOLVED;
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement)
{
    auto newStack = replaceChildInList(stack, child, replacement);
    if(newStack == nullptr)
        return nullptr;
    else
        return new ConfigDelayedMerge(origin(), newStack);
}

bool com::typesafe::config::impl::ConfigDelayedMerge::hasDescendant(AbstractConfigValue* descendant)
{
    return hasDescendantInList(stack, descendant);
}

com::typesafe::config::impl::ConfigDelayedMerge* com::typesafe::config::impl::ConfigDelayedMerge::relativized(Path* prefix)
{
    ::java::util::List* newStack = new ::java::util::ArrayList();
    for (auto _i = npc(stack)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* o = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(newStack)->add(npc(o)->relativized(prefix));
        }
    }
    return new ConfigDelayedMerge(origin(), newStack);
}

bool com::typesafe::config::impl::ConfigDelayedMerge::stackIgnoresFallbacks(::java::util::List* stack)
{
    clinit();
    auto last = java_cast< AbstractConfigValue* >(npc(stack)->get(npc(stack)->size() - int32_t(1)));
    return npc(last)->ignoresFallbacks();
}

bool com::typesafe::config::impl::ConfigDelayedMerge::ignoresFallbacks()
{
    return stackIgnoresFallbacks(stack);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::newCopy(::com::typesafe::config::ConfigOrigin* newOrigin)
{
    return new ConfigDelayedMerge(newOrigin, stack);
}

com::typesafe::config::impl::ConfigDelayedMerge* com::typesafe::config::impl::ConfigDelayedMerge::mergedWithTheUnmergeable(Unmergeable* fallback)
{
    return java_cast< ConfigDelayedMerge* >(mergedWithTheUnmergeable(stack, fallback));
}

com::typesafe::config::impl::ConfigDelayedMerge* com::typesafe::config::impl::ConfigDelayedMerge::mergedWithObject(AbstractConfigObject* fallback)
{
    return java_cast< ConfigDelayedMerge* >(mergedWithObject(stack, fallback));
}

com::typesafe::config::impl::ConfigDelayedMerge* com::typesafe::config::impl::ConfigDelayedMerge::mergedWithNonObject(AbstractConfigValue* fallback)
{
    return java_cast< ConfigDelayedMerge* >(mergedWithNonObject(stack, fallback));
}

java::util::Collection* com::typesafe::config::impl::ConfigDelayedMerge::unmergedValues()
{
    return stack;
}

bool com::typesafe::config::impl::ConfigDelayedMerge::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ConfigDelayedMerge* >(other) != nullptr;
}

bool com::typesafe::config::impl::ConfigDelayedMerge::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ConfigDelayedMerge* >(other) != nullptr) {
        return canEqual(other) && (java_cast< ::java::util::List* >(this->stack) == java_cast< ::java::util::List* >(npc((java_cast< ConfigDelayedMerge* >(other)))->stack) || npc(java_cast< ::java::util::List* >(this->stack))->equals(java_cast< ::java::util::List* >(npc((java_cast< ConfigDelayedMerge* >(other)))->stack)));
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::ConfigDelayedMerge::hashCode()
{
    return npc(stack)->hashCode();
}

void com::typesafe::config::impl::ConfigDelayedMerge::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    render(stack, sb, indent, atRoot, atKey, options);
}

void com::typesafe::config::impl::ConfigDelayedMerge::render(::java::util::List* stack, ::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    clinit();
    auto commentMerge = npc(options)->getComments();
    if(commentMerge) {
        npc(sb)->append(::java::lang::StringBuilder().append(u"# unresolved merge of "_j)->append(npc(stack)->size())
            ->append(u" values follows (\n"_j)->toString());
        if(atKey == nullptr) {
            AbstractConfigValue::indent(sb, indent, options);
            npc(sb)->append(u"# this unresolved merge will not be parseable because it's at the root of the object\n"_j);
            AbstractConfigValue::indent(sb, indent, options);
            npc(sb)->append(u"# the HOCON format has no way to list multiple root objects in a single file\n"_j);
        }
    }
    ::java::util::List* reversed = new ::java::util::ArrayList();
    npc(reversed)->addAll(stack);
    ::java::util::Collections::reverse(reversed);
    auto i = int32_t(0);
    for (auto _i = npc(reversed)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(commentMerge) {
                AbstractConfigValue::indent(sb, indent, options);
                if(atKey != nullptr) {
                    npc(sb)->append(::java::lang::StringBuilder().append(u"#     unmerged value "_j)->append(i)
                        ->append(u" for key "_j)
                        ->append(ConfigImplUtil::renderJsonString(atKey))
                        ->append(u" from "_j)->toString());
                } else {
                    npc(sb)->append(::java::lang::StringBuilder().append(u"#     unmerged value "_j)->append(i)
                        ->append(u" from "_j)->toString());
                }
                i += 1;
                npc(sb)->append(npc(npc(v)->origin())->description());
                npc(sb)->append(u"\n"_j);
                for (auto _i = npc(npc(npc(v)->origin())->comments())->iterator(); _i->hasNext(); ) {
                    ::java::lang::String* comment = java_cast< ::java::lang::String* >(_i->next());
                    {
                        AbstractConfigValue::indent(sb, indent, options);
                        npc(sb)->append(u"# "_j);
                        npc(sb)->append(comment);
                        npc(sb)->append(u"\n"_j);
                    }
                }
            }
            AbstractConfigValue::indent(sb, indent, options);
            if(atKey != nullptr) {
                npc(sb)->append(ConfigImplUtil::renderJsonString(atKey));
                if(npc(options)->getFormatted())
                    npc(sb)->append(u" : "_j);
                else
                    npc(sb)->append(u":"_j);
            }
            npc(v)->render(sb, indent, atRoot, options);
            npc(sb)->append(u","_j);
            if(npc(options)->getFormatted())
                npc(sb)->append(u'\u000a');

        }
    }
    npc(sb)->setLength(npc(sb)->length() - int32_t(1));
    if(npc(options)->getFormatted()) {
        npc(sb)->setLength(npc(sb)->length() - int32_t(1));
        npc(sb)->append(u"\n"_j);
    }
    if(commentMerge) {
        AbstractConfigValue::indent(sb, indent, options);
        npc(sb)->append(u"# ) end of unresolved merge\n"_j);
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigDelayedMerge::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigDelayedMerge", 43);
    return c;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMerge::atKey(::java::lang::String* key)
{
    return AbstractConfigValue::atKey(key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMerge::atPath(::java::lang::String* path)
{
    return AbstractConfigValue::atPath(path);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::ConfigDelayedMerge::origin()
{
    return AbstractConfigValue::origin();
}

java::lang::String* com::typesafe::config::impl::ConfigDelayedMerge::render()
{
    return AbstractConfigValue::render();
}

java::lang::String* com::typesafe::config::impl::ConfigDelayedMerge::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return AbstractConfigValue::render(options);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::withFallback(::com::typesafe::config::ConfigMergeable* other)
{
    return AbstractConfigValue::withFallback(other);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::withOrigin(::com::typesafe::config::ConfigOrigin* origin)
{
    return AbstractConfigValue::withOrigin(origin);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMerge::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    return super::atKey(origin, key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigDelayedMerge::atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path)
{
    return super::atPath(origin, path);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::mergedWithNonObject(::java::util::Collection* stack, AbstractConfigValue* fallback)
{
    return super::mergedWithNonObject(stack, fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::mergedWithObject(::java::util::Collection* stack, AbstractConfigObject* fallback)
{
    return super::mergedWithObject(stack, fallback);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigDelayedMerge::mergedWithTheUnmergeable(::java::util::Collection* stack, Unmergeable* fallback)
{
    return super::mergedWithTheUnmergeable(stack, fallback);
}

void com::typesafe::config::impl::ConfigDelayedMerge::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, options);
}

java::lang::Class* com::typesafe::config::impl::ConfigDelayedMerge::getClass0()
{
    return class_();
}

