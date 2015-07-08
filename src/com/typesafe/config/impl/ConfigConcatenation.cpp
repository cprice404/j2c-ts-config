// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigConcatenation.java
#include <com/typesafe/config/impl/ConfigConcatenation.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_NotResolved.hpp>
#include <com/typesafe/config/ConfigException_WrongType.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/ConfigString_Quoted.hpp>
#include <com/typesafe/config/impl/ConfigString.hpp>
#include <com/typesafe/config/impl/DefaultTransformer.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
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
com::typesafe::config::impl::ConfigConcatenation::ConfigConcatenation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigConcatenation::ConfigConcatenation(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* pieces) 
    : ConfigConcatenation(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,pieces);
}

void com::typesafe::config::impl::ConfigConcatenation::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* pieces)
{
    super::ctor(origin);
    this->pieces = pieces;
    if(npc(pieces)->size() < 2)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Created concatenation with less than 2 items: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());

    auto hadUnmergeable = false;
    for (auto _i = npc(pieces)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* p = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(dynamic_cast< ConfigConcatenation* >(p) != nullptr)
                throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"ConfigConcatenation should never be nested: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());

            if(dynamic_cast< Unmergeable* >(p) != nullptr)
                hadUnmergeable = true;

        }
    }
    if(!hadUnmergeable)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Created concatenation without an unmergeable in it: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());

}

com::typesafe::config::ConfigException_NotResolved* com::typesafe::config::impl::ConfigConcatenation::notResolved()
{
    return new ::com::typesafe::config::ConfigException_NotResolved(::java::lang::StringBuilder().append(u"need to Config#resolve(), see the API docs for Config#resolve(); substitution not resolved: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigConcatenation::valueType()
{
    throw notResolved();
}

java::lang::Object* com::typesafe::config::impl::ConfigConcatenation::unwrapped()
{
    throw notResolved();
}

com::typesafe::config::impl::ConfigConcatenation* com::typesafe::config::impl::ConfigConcatenation::newCopy(::com::typesafe::config::ConfigOrigin* newOrigin)
{
    return new ConfigConcatenation(newOrigin, pieces);
}

bool com::typesafe::config::impl::ConfigConcatenation::ignoresFallbacks()
{
    return false;
}

java::util::Collection* com::typesafe::config::impl::ConfigConcatenation::unmergedValues()
{
    return ::java::util::Collections::singleton(this);
}

bool com::typesafe::config::impl::ConfigConcatenation::isIgnoredWhitespace(AbstractConfigValue* value)
{
    clinit();
    return (dynamic_cast< ConfigString* >(value) != nullptr) && !npc((java_cast< ConfigString* >(value)))->wasQuoted();
}

void com::typesafe::config::impl::ConfigConcatenation::join(::java::util::ArrayList* builder, AbstractConfigValue* origRight)
{
    clinit();
    auto left = java_cast< AbstractConfigValue* >(npc(builder)->get(npc(builder)->size() - int32_t(1)));
    auto right = origRight;
    if(dynamic_cast< ::com::typesafe::config::ConfigObject* >(left) != nullptr && dynamic_cast< SimpleConfigList* >(right) != nullptr) {
        left = DefaultTransformer::transform(left, ::com::typesafe::config::ConfigValueType::LIST);
    } else if(dynamic_cast< SimpleConfigList* >(left) != nullptr && dynamic_cast< ::com::typesafe::config::ConfigObject* >(right) != nullptr) {
        right = DefaultTransformer::transform(right, ::com::typesafe::config::ConfigValueType::LIST);
    }
    AbstractConfigValue* joined = nullptr;
    if(dynamic_cast< ::com::typesafe::config::ConfigObject* >(left) != nullptr && dynamic_cast< ::com::typesafe::config::ConfigObject* >(right) != nullptr) {
        joined = npc(right)->withFallback(left);
    } else if(dynamic_cast< SimpleConfigList* >(left) != nullptr && dynamic_cast< SimpleConfigList* >(right) != nullptr) {
        joined = npc((java_cast< SimpleConfigList* >(left)))->concatenate(java_cast< SimpleConfigList* >(right));
    } else if((dynamic_cast< SimpleConfigList* >(left) != nullptr || dynamic_cast< ::com::typesafe::config::ConfigObject* >(left) != nullptr) && isIgnoredWhitespace(right)) {
        joined = left;
    } else if(dynamic_cast< ConfigConcatenation* >(left) != nullptr || dynamic_cast< ConfigConcatenation* >(right) != nullptr) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"unflattened ConfigConcatenation"_j);
    } else if(dynamic_cast< Unmergeable* >(left) != nullptr || dynamic_cast< Unmergeable* >(right) != nullptr) {
    } else {
        auto s1 = npc(left)->transformToString();
        auto s2 = npc(right)->transformToString();
        if(s1 == nullptr || s2 == nullptr) {
            throw new ::com::typesafe::config::ConfigException_WrongType(npc(left)->origin(), ::java::lang::StringBuilder().append(u"Cannot concatenate object or list with a non-object-or-list, "_j)->append(static_cast< ::java::lang::Object* >(left))
                ->append(u" and "_j)
                ->append(static_cast< ::java::lang::Object* >(right))
                ->append(u" are not compatible"_j)->toString());
        } else {
            auto joinedOrigin = SimpleConfigOrigin::mergeOrigins(npc(left)->origin(), npc(right)->origin());
            joined = new ConfigString_Quoted(joinedOrigin, ::java::lang::StringBuilder().append(s1)->append(s2)->toString());
        }
    }
    if(joined == nullptr) {
        npc(builder)->add(right);
    } else {
        npc(builder)->remove(npc(builder)->size() - int32_t(1));
        npc(builder)->add(joined);
    }
}

java::util::List* com::typesafe::config::impl::ConfigConcatenation::consolidate(::java::util::List* pieces)
{
    clinit();
    if(npc(pieces)->size() < 2) {
        return pieces;
    } else {
        ::java::util::List* flattened = new ::java::util::ArrayList(npc(pieces)->size());
        for (auto _i = npc(pieces)->iterator(); _i->hasNext(); ) {
            AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
            {
                if(dynamic_cast< ConfigConcatenation* >(v) != nullptr) {
                    npc(flattened)->addAll(java_cast< ::java::util::List* >(npc((java_cast< ConfigConcatenation* >(v)))->pieces));
                } else {
                    npc(flattened)->add(v);
                }
            }
        }
        auto consolidated = new ::java::util::ArrayList(npc(flattened)->size());
        for (auto _i = npc(flattened)->iterator(); _i->hasNext(); ) {
            AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
            {
                if(npc(consolidated)->isEmpty())
                    npc(consolidated)->add(v);
                else
                    join(consolidated, v);
            }
        }
        return consolidated;
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigConcatenation::concatenate(::java::util::List* pieces)
{
    clinit();
    auto consolidated = consolidate(pieces);
    if(npc(consolidated)->isEmpty()) {
        return nullptr;
    } else if(npc(consolidated)->size() == 1) {
        return java_cast< AbstractConfigValue* >(npc(consolidated)->get(0));
    } else {
        auto mergedOrigin = SimpleConfigOrigin::mergeOrigins(static_cast< ::java::util::List* >(consolidated));
        return new ConfigConcatenation(mergedOrigin, consolidated);
    }
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::ConfigConcatenation::resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    if(ConfigImpl::traceSubstitutionsEnabled()) {
        auto indent = npc(context)->depth() + int32_t(2);
        ConfigImpl::trace(indent - int32_t(1), ::java::lang::StringBuilder().append(u"concatenation has "_j)->append(npc(pieces)->size())
            ->append(u" pieces:"_j)->toString());
        auto count = int32_t(0);
        for (auto _i = npc(pieces)->iterator(); _i->hasNext(); ) {
            AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
            {
                ConfigImpl::trace(indent, ::java::lang::StringBuilder().append(count)->append(u": "_j)
                    ->append(static_cast< ::java::lang::Object* >(v))->toString());
                count += 1;
            }
        }
    }
    auto sourceWithParent = source;
    auto newContext = context;
    ::java::util::List* resolved = new ::java::util::ArrayList(npc(pieces)->size());
    for (auto _i = npc(pieces)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* p = java_cast< AbstractConfigValue* >(_i->next());
        {
            auto restriction = npc(newContext)->restrictToChild();
            auto result = npc(npc(newContext)->unrestricted())->resolve(p, sourceWithParent);
            auto r = java_cast< AbstractConfigValue* >(npc(result)->value);
            newContext = npc(npc(result)->context)->restrict(restriction);
            if(ConfigImpl::traceSubstitutionsEnabled())
                ConfigImpl::trace(npc(context)->depth(), ::java::lang::StringBuilder().append(u"resolved concat piece to "_j)->append(static_cast< ::java::lang::Object* >(r))->toString());

            if(r == nullptr) {
            } else {
                npc(resolved)->add(r);
            }
        }
    }
    auto joined = consolidate(resolved);
    if(npc(joined)->size() > 1 && npc(npc(context)->options())->getAllowUnresolved())
        return ResolveResult::make(newContext, new ConfigConcatenation(this->origin(), joined));
    else if(npc(joined)->isEmpty())
        return ResolveResult::make(newContext, nullptr);
    else if(npc(joined)->size() == 1)
        return ResolveResult::make(newContext, java_cast< AbstractConfigValue* >(npc(joined)->get(0)));
    else
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Bug in the library; resolved list was joined to too many values: "_j)->append(static_cast< ::java::lang::Object* >(joined))->toString());
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ConfigConcatenation::resolveStatus()
{
    return ResolveStatus::UNRESOLVED;
}

com::typesafe::config::impl::ConfigConcatenation* com::typesafe::config::impl::ConfigConcatenation::replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement)
{
    auto newPieces = replaceChildInList(pieces, child, replacement);
    if(newPieces == nullptr)
        return nullptr;
    else
        return new ConfigConcatenation(origin(), newPieces);
}

bool com::typesafe::config::impl::ConfigConcatenation::hasDescendant(AbstractConfigValue* descendant)
{
    return hasDescendantInList(pieces, descendant);
}

com::typesafe::config::impl::ConfigConcatenation* com::typesafe::config::impl::ConfigConcatenation::relativized(Path* prefix)
{
    ::java::util::List* newPieces = new ::java::util::ArrayList();
    for (auto _i = npc(pieces)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* p = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(newPieces)->add(npc(p)->relativized(prefix));
        }
    }
    return new ConfigConcatenation(origin(), newPieces);
}

bool com::typesafe::config::impl::ConfigConcatenation::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ConfigConcatenation* >(other) != nullptr;
}

bool com::typesafe::config::impl::ConfigConcatenation::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ConfigConcatenation* >(other) != nullptr) {
        return canEqual(other) && npc(java_cast< ::java::util::List* >(this->pieces))->equals(java_cast< ::java::util::List* >(npc((java_cast< ConfigConcatenation* >(other)))->pieces));
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::ConfigConcatenation::hashCode()
{
    return npc(pieces)->hashCode();
}

void com::typesafe::config::impl::ConfigConcatenation::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    for (auto _i = npc(pieces)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* p = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(p)->render(sb, indent, atRoot, options);
        }
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigConcatenation::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigConcatenation", 44);
    return c;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigConcatenation::atKey(::java::lang::String* key)
{
    return AbstractConfigValue::atKey(key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigConcatenation::atPath(::java::lang::String* path)
{
    return AbstractConfigValue::atPath(path);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::ConfigConcatenation::origin()
{
    return AbstractConfigValue::origin();
}

java::lang::String* com::typesafe::config::impl::ConfigConcatenation::render()
{
    return AbstractConfigValue::render();
}

java::lang::String* com::typesafe::config::impl::ConfigConcatenation::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return AbstractConfigValue::render(options);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigConcatenation::withFallback(::com::typesafe::config::ConfigMergeable* other)
{
    return AbstractConfigValue::withFallback(other);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ConfigConcatenation::withOrigin(::com::typesafe::config::ConfigOrigin* origin)
{
    return AbstractConfigValue::withOrigin(origin);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigConcatenation::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    return super::atKey(origin, key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::ConfigConcatenation::atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path)
{
    return super::atPath(origin, path);
}

void com::typesafe::config::impl::ConfigConcatenation::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

java::lang::Class* com::typesafe::config::impl::ConfigConcatenation::getClass0()
{
    return class_();
}

