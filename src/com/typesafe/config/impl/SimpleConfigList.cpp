// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java
#include <com/typesafe/config/impl/SimpleConfigList.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigRenderOptions.hpp>
#include <com/typesafe/config/ConfigResolveOptions.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_Modifier.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NoExceptionsModifier.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NotPossibleToResolve.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ResolveContext.hpp>
#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource.hpp>
#include <com/typesafe/config/impl/ResolveStatus.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigList_relativized_1.hpp>
#include <com/typesafe/config/impl/SimpleConfigList_iterator_2.hpp>
#include <com/typesafe/config/impl/SimpleConfigList_wrapListIterator_3.hpp>
#include <com/typesafe/config/impl/SimpleConfigList_ResolveModifier.hpp>
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
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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
com::typesafe::config::impl::SimpleConfigList::SimpleConfigList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigList::SimpleConfigList(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value) 
    : SimpleConfigList(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value);
}

com::typesafe::config::impl::SimpleConfigList::SimpleConfigList(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value, ResolveStatus* status) 
    : SimpleConfigList(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value,status);
}

constexpr int64_t com::typesafe::config::impl::SimpleConfigList::serialVersionUID;

void com::typesafe::config::impl::SimpleConfigList::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value)
{
    ctor(origin, value, ResolveStatus::fromValues(value));
}

void com::typesafe::config::impl::SimpleConfigList::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value, ResolveStatus* status)
{
    super::ctor(origin);
    this->value = value;
    this->resolved = status == ResolveStatus::RESOLVED;
    if(status != ResolveStatus::fromValues(value))
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"SimpleConfigList created with wrong resolve status: "_j)->append(static_cast< ::java::lang::Object* >(this))->toString());

}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::SimpleConfigList::valueType()
{
    return ::com::typesafe::config::ConfigValueType::LIST;
}

java::util::List* com::typesafe::config::impl::SimpleConfigList::unwrapped()
{
    ::java::util::List* list = new ::java::util::ArrayList();
    for (auto _i = npc(value)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(list)->add(npc(v)->unwrapped());
        }
    }
    return list;
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::SimpleConfigList::resolveStatus()
{
    return ResolveStatus::fromBoolean(resolved);
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement)
{
    auto newList = replaceChildInList(value, child, replacement);
    if(newList == nullptr) {
        return nullptr;
    } else {
        return new SimpleConfigList(origin(), newList);
    }
}

bool com::typesafe::config::impl::SimpleConfigList::hasDescendant(AbstractConfigValue* descendant)
{
    return hasDescendantInList(value, descendant);
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::modify(AbstractConfigValue_NoExceptionsModifier* modifier, ResolveStatus* newResolveStatus)
{
    try {
        return modifyMayThrow(modifier, newResolveStatus);
    } catch (::java::lang::RuntimeException* e) {
        throw e;
    } catch (::java::lang::Exception* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"unexpected checked exception"_j, e);
    }
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::modifyMayThrow(AbstractConfigValue_Modifier* modifier, ResolveStatus* newResolveStatus) /* throws(Exception) */
{
    ::java::util::List* changed = nullptr;
    auto i = int32_t(0);
    for (auto _i = npc(value)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            auto modified = npc(modifier)->modifyChildMayThrow(nullptr, v);
            if(changed == nullptr && modified != v) {
                changed = new ::java::util::ArrayList();
                for (auto j = int32_t(0); j < i; ++j) {
                    npc(changed)->add(java_cast< AbstractConfigValue* >(npc(value)->get(j)));
                }
            }
            if(changed != nullptr && modified != nullptr) {
                npc(changed)->add(modified);
            }
            i += 1;
        }
    }
    if(changed != nullptr) {
        if(newResolveStatus != nullptr) {
            return new SimpleConfigList(origin(), changed, newResolveStatus);
        } else {
            return new SimpleConfigList(origin(), changed);
        }
    } else {
        return this;
    }
}

com::typesafe::config::impl::ResolveResult* com::typesafe::config::impl::SimpleConfigList::resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */
{
    if(resolved)
        return ResolveResult::make(context, this);

    if(npc(context)->isRestrictedToChild()) {
        return ResolveResult::make(context, this);
    } else {
        try {
            auto modifier = new SimpleConfigList_ResolveModifier(context, npc(source)->pushParent(this));
            auto value = modifyMayThrow(modifier, npc(npc(context)->options())->getAllowUnresolved() ? static_cast< ResolveStatus* >(nullptr) : ResolveStatus::RESOLVED);
            return ResolveResult::make(npc(modifier)->context, value);
        } catch (AbstractConfigValue_NotPossibleToResolve* e) {
            throw e;
        } catch (::java::lang::RuntimeException* e) {
            throw e;
        } catch (::java::lang::Exception* e) {
            throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"unexpected checked exception"_j, e);
        }
    }
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::relativized(Path* prefix)
{
    return modify(new SimpleConfigList_relativized_1(this, prefix), resolveStatus());
}

bool com::typesafe::config::impl::SimpleConfigList::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< SimpleConfigList* >(other) != nullptr;
}

bool com::typesafe::config::impl::SimpleConfigList::equals(::java::lang::Object* other)
{
    if(dynamic_cast< SimpleConfigList* >(other) != nullptr) {
        return canEqual(other) && (value == java_cast< ::java::util::List* >(npc((java_cast< SimpleConfigList* >(other)))->value) || npc(value)->equals(java_cast< ::java::util::List* >(npc((java_cast< SimpleConfigList* >(other)))->value)));
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::SimpleConfigList::hashCode()
{
    return npc(value)->hashCode();
}

void com::typesafe::config::impl::SimpleConfigList::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    if(npc(value)->isEmpty()) {
        npc(sb)->append(u"[]"_j);
    } else {
        npc(sb)->append(u"["_j);
        if(npc(options)->getFormatted())
            npc(sb)->append(u'\u000a');

        for (auto _i = npc(value)->iterator(); _i->hasNext(); ) {
            AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
            {
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
                            AbstractConfigValue::indent(sb, indent + int32_t(1), options);
                            npc(sb)->append(u"# "_j);
                            npc(sb)->append(comment);
                            npc(sb)->append(u"\n"_j);
                        }
                    }
                }
                AbstractConfigValue::indent(sb, indent + int32_t(1), options);
                npc(v)->render(sb, indent + int32_t(1), atRoot, options);
                npc(sb)->append(u","_j);
                if(npc(options)->getFormatted())
                    npc(sb)->append(u'\u000a');

            }
        }
        npc(sb)->setLength(npc(sb)->length() - int32_t(1));
        if(npc(options)->getFormatted()) {
            npc(sb)->setLength(npc(sb)->length() - int32_t(1));
            npc(sb)->append(u'\u000a');
            AbstractConfigValue::indent(sb, indent, options);
        }
        npc(sb)->append(u"]"_j);
    }
}

bool com::typesafe::config::impl::SimpleConfigList::contains(::java::lang::Object* o)
{
    return npc(value)->contains(o);
}

bool com::typesafe::config::impl::SimpleConfigList::containsAll(::java::util::Collection* c)
{
    return npc(value)->containsAll(c);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigList::get(int32_t index)
{
    return java_cast< AbstractConfigValue* >(npc(value)->get(index));
}

int32_t com::typesafe::config::impl::SimpleConfigList::indexOf(::java::lang::Object* o)
{
    return npc(value)->indexOf(o);
}

bool com::typesafe::config::impl::SimpleConfigList::isEmpty()
{
    return npc(value)->isEmpty();
}

java::util::Iterator* com::typesafe::config::impl::SimpleConfigList::iterator()
{
    auto const i = npc(value)->iterator();
    return new SimpleConfigList_iterator_2(this, i);
}

int32_t com::typesafe::config::impl::SimpleConfigList::lastIndexOf(::java::lang::Object* o)
{
    return npc(value)->lastIndexOf(o);
}

java::util::ListIterator* com::typesafe::config::impl::SimpleConfigList::wrapListIterator(::java::util::ListIterator* i)
{
    clinit();
    return new SimpleConfigList_wrapListIterator_3(i);
}

java::util::ListIterator* com::typesafe::config::impl::SimpleConfigList::listIterator()
{
    return wrapListIterator(npc(value)->listIterator());
}

java::util::ListIterator* com::typesafe::config::impl::SimpleConfigList::listIterator(int32_t index)
{
    return wrapListIterator(npc(value)->listIterator(index));
}

int32_t com::typesafe::config::impl::SimpleConfigList::size()
{
    return npc(value)->size();
}

java::util::List* com::typesafe::config::impl::SimpleConfigList::subList(int32_t fromIndex, int32_t toIndex)
{
    ::java::util::List* list = new ::java::util::ArrayList();
    for (auto _i = npc(npc(value)->subList(fromIndex, toIndex))->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            npc(list)->add(v);
        }
    }
    return list;
}

java::lang::ObjectArray* com::typesafe::config::impl::SimpleConfigList::toArray_()
{
    return npc(value)->toArray_();
}

/* <T> */java::lang::ObjectArray* com::typesafe::config::impl::SimpleConfigList::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(npc(value)->toArray_(a));
}

java::lang::UnsupportedOperationException* com::typesafe::config::impl::SimpleConfigList::weAreImmutable(::java::lang::String* method)
{
    clinit();
    return new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"ConfigList is immutable, you can't call List.'"_j)->append(method)
        ->append(u"'"_j)->toString());
}

bool com::typesafe::config::impl::SimpleConfigList::add(::com::typesafe::config::ConfigValue* e)
{
    throw weAreImmutable(u"add"_j);
}

bool com::typesafe::config::impl::SimpleConfigList::add(::java::lang::Object* e)
{ 
    return add(dynamic_cast< ::com::typesafe::config::ConfigValue* >(e));
}

void com::typesafe::config::impl::SimpleConfigList::add(int32_t index, ::com::typesafe::config::ConfigValue* element)
{
    throw weAreImmutable(u"add"_j);
}

void com::typesafe::config::impl::SimpleConfigList::add(int32_t index, ::java::lang::Object* element)
{ 
    add(index, dynamic_cast< ::com::typesafe::config::ConfigValue* >(element));
}

bool com::typesafe::config::impl::SimpleConfigList::addAll(::java::util::Collection* c)
{
    throw weAreImmutable(u"addAll"_j);
}

bool com::typesafe::config::impl::SimpleConfigList::addAll(int32_t index, ::java::util::Collection* c)
{
    throw weAreImmutable(u"addAll"_j);
}

void com::typesafe::config::impl::SimpleConfigList::clear()
{
    throw weAreImmutable(u"clear"_j);
}

bool com::typesafe::config::impl::SimpleConfigList::remove(::java::lang::Object* o)
{
    throw weAreImmutable(u"remove"_j);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfigList::remove(int32_t index)
{
    throw weAreImmutable(u"remove"_j);
}

bool com::typesafe::config::impl::SimpleConfigList::removeAll(::java::util::Collection* c)
{
    throw weAreImmutable(u"removeAll"_j);
}

bool com::typesafe::config::impl::SimpleConfigList::retainAll(::java::util::Collection* c)
{
    throw weAreImmutable(u"retainAll"_j);
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfigList::set(int32_t index, ::com::typesafe::config::ConfigValue* element)
{
    throw weAreImmutable(u"set"_j);
}

java::lang::Object* com::typesafe::config::impl::SimpleConfigList::set(int32_t index, ::java::lang::Object* element)
{ 
    return set(index, dynamic_cast< ::com::typesafe::config::ConfigValue* >(element));
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::newCopy(::com::typesafe::config::ConfigOrigin* newOrigin)
{
    return new SimpleConfigList(newOrigin, value);
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::concatenate(SimpleConfigList* other)
{
    auto combinedOrigin = SimpleConfigOrigin::mergeOrigins(origin(), npc(other)->origin());
    ::java::util::List* combined = new ::java::util::ArrayList(npc(value)->size() + npc(npc(other)->value)->size());
    npc(combined)->addAll(value);
    npc(combined)->addAll(npc(other)->value);
    return new SimpleConfigList(combinedOrigin, combined);
}

java::lang::Object* com::typesafe::config::impl::SimpleConfigList::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

com::typesafe::config::impl::SimpleConfigList* com::typesafe::config::impl::SimpleConfigList::withOrigin(::com::typesafe::config::ConfigOrigin* origin)
{
    return java_cast< SimpleConfigList* >(super::withOrigin(origin));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigList::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigList", 41);
    return c;
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfigList::atKey(::java::lang::String* key)
{
    return AbstractConfigValue::atKey(key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfigList::atPath(::java::lang::String* path)
{
    return AbstractConfigValue::atPath(path);
}

com::typesafe::config::impl::SimpleConfigOrigin* com::typesafe::config::impl::SimpleConfigList::origin()
{
    return AbstractConfigValue::origin();
}

java::lang::String* com::typesafe::config::impl::SimpleConfigList::render()
{
    return AbstractConfigValue::render();
}

java::lang::String* com::typesafe::config::impl::SimpleConfigList::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return AbstractConfigValue::render(options);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigList::withFallback(::com::typesafe::config::ConfigMergeable* other)
{
    return AbstractConfigValue::withFallback(other);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfigList::atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key)
{
    return super::atKey(origin, key);
}

com::typesafe::config::impl::SimpleConfig* com::typesafe::config::impl::SimpleConfigList::atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path)
{
    return super::atPath(origin, path);
}

void com::typesafe::config::impl::SimpleConfigList::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigList::getClass0()
{
    return class_();
}

