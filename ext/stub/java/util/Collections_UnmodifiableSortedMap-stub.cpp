// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Collections_UnmodifiableSortedMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Set.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::Collections_UnmodifiableSortedMap::Collections_UnmodifiableSortedMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_UnmodifiableSortedMap::Collections_UnmodifiableSortedMap(SortedMap* m)
    : Collections_UnmodifiableSortedMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

constexpr int64_t java::util::Collections_UnmodifiableSortedMap::serialVersionUID;

void ::java::util::Collections_UnmodifiableSortedMap::ctor(SortedMap* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_UnmodifiableSortedMap::ctor(SortedMap* m)");
}

java::util::Comparator* java::util::Collections_UnmodifiableSortedMap::comparator()
{ /* stub */
    unimplemented_(u"java::util::Comparator* java::util::Collections_UnmodifiableSortedMap::comparator()");
    return 0;
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::firstKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_UnmodifiableSortedMap::firstKey()");
    return 0;
}

java::util::SortedMap* java::util::Collections_UnmodifiableSortedMap::headMap(::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::Collections_UnmodifiableSortedMap::headMap(::java::lang::Object* toKey)");
    return 0;
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::lastKey()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_UnmodifiableSortedMap::lastKey()");
    return 0;
}

java::util::SortedMap* java::util::Collections_UnmodifiableSortedMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::Collections_UnmodifiableSortedMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)");
    return 0;
}

java::util::SortedMap* java::util::Collections_UnmodifiableSortedMap::tailMap(::java::lang::Object* fromKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::Collections_UnmodifiableSortedMap::tailMap(::java::lang::Object* fromKey)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Collections_UnmodifiableSortedMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.UnmodifiableSortedMap", 43);
    return c;
}

void java::util::Collections_UnmodifiableSortedMap::clear()
{
    Collections_UnmodifiableMap::clear();
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::compute(key, remappingFunction));
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::computeIfAbsent(key, mappingFunction));
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::computeIfPresent(key, remappingFunction));
}

bool java::util::Collections_UnmodifiableSortedMap::containsKey(::java::lang::Object* key)
{
    return Collections_UnmodifiableMap::containsKey(key);
}

bool java::util::Collections_UnmodifiableSortedMap::containsValue(::java::lang::Object* value)
{
    return Collections_UnmodifiableMap::containsValue(value);
}

bool java::util::Collections_UnmodifiableSortedMap::equals(::java::lang::Object* o)
{
    return Collections_UnmodifiableMap::equals(o);
}

void java::util::Collections_UnmodifiableSortedMap::forEach(::java::util::function::BiConsumer* action)
{
    Collections_UnmodifiableMap::forEach(action);
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::get(key));
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::getOrDefault(key, defaultValue));
}

int32_t java::util::Collections_UnmodifiableSortedMap::hashCode()
{
    return Collections_UnmodifiableMap::hashCode();
}

bool java::util::Collections_UnmodifiableSortedMap::isEmpty()
{
    return Collections_UnmodifiableMap::isEmpty();
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::merge(key, value, remappingFunction));
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::put(key, value));
}

void java::util::Collections_UnmodifiableSortedMap::putAll(Map* m)
{
    Collections_UnmodifiableMap::putAll(m);
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::putIfAbsent(key, value));
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::remove(key));
}

bool java::util::Collections_UnmodifiableSortedMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return Collections_UnmodifiableMap::remove(key, value);
}

java::lang::Object* java::util::Collections_UnmodifiableSortedMap::replace(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::replace(key, value));
}

bool java::util::Collections_UnmodifiableSortedMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{
    return Collections_UnmodifiableMap::replace(key, oldValue, newValue);
}

void java::util::Collections_UnmodifiableSortedMap::replaceAll(::java::util::function::BiFunction* function)
{
    Collections_UnmodifiableMap::replaceAll(function);
}

int32_t java::util::Collections_UnmodifiableSortedMap::size()
{
    return Collections_UnmodifiableMap::size();
}

java::util::Set* java::util::Collections_UnmodifiableSortedMap::entrySet()
{
    return java_cast< Set* >(Collections_UnmodifiableMap::entrySet());
}

java::util::Set* java::util::Collections_UnmodifiableSortedMap::keySet()
{
    return java_cast< Set* >(Collections_UnmodifiableMap::keySet());
}

java::util::Collection* java::util::Collections_UnmodifiableSortedMap::values()
{
    return java_cast< Collection* >(Collections_UnmodifiableMap::values());
}

java::lang::Class* java::util::Collections_UnmodifiableSortedMap::getClass0()
{
    return class_();
}

