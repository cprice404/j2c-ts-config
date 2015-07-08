// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Collections_UnmodifiableNavigableMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::Collections_UnmodifiableNavigableMap::Collections_UnmodifiableNavigableMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_UnmodifiableNavigableMap::Collections_UnmodifiableNavigableMap(NavigableMap* m)
    : Collections_UnmodifiableNavigableMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::util::Collections_UnmodifiableNavigableMap_EmptyNavigableMap*& java::util::Collections_UnmodifiableNavigableMap::EMPTY_NAVIGABLE_MAP()
{
    clinit();
    return EMPTY_NAVIGABLE_MAP_;
}
java::util::Collections_UnmodifiableNavigableMap_EmptyNavigableMap* java::util::Collections_UnmodifiableNavigableMap::EMPTY_NAVIGABLE_MAP_;
constexpr int64_t java::util::Collections_UnmodifiableNavigableMap::serialVersionUID;

void ::java::util::Collections_UnmodifiableNavigableMap::ctor(NavigableMap* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_UnmodifiableNavigableMap::ctor(NavigableMap* m)");
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::ceilingEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::ceilingEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::ceilingKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::ceilingKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_UnmodifiableNavigableMap::descendingKeySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_UnmodifiableNavigableMap::descendingKeySet()");
    return 0;
}

java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::descendingMap()
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::descendingMap()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::firstEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::firstEntry()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::floorEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::floorEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::floorKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::floorKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::headMap(::java::lang::Object* toKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::headMap(::java::lang::Object* toKey, bool inclusive)");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::higherEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::higherEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::higherKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::higherKey(::java::lang::Object* key)");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::lastEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::lastEntry()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::lowerEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::lowerEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::lowerKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::lowerKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_UnmodifiableNavigableMap::navigableKeySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_UnmodifiableNavigableMap::navigableKeySet()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::pollFirstEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::pollFirstEntry()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::pollLastEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_UnmodifiableNavigableMap::pollLastEntry()");
    return 0;
}

java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)");
    return 0;
}

java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::tailMap(::java::lang::Object* fromKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_UnmodifiableNavigableMap::tailMap(::java::lang::Object* fromKey, bool inclusive)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Collections_UnmodifiableNavigableMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.UnmodifiableNavigableMap", 46);
    return c;
}

void java::util::Collections_UnmodifiableNavigableMap::clear()
{
    Collections_UnmodifiableMap::clear();
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::compute(key, remappingFunction));
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::computeIfAbsent(key, mappingFunction));
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::computeIfPresent(key, remappingFunction));
}

bool java::util::Collections_UnmodifiableNavigableMap::containsKey(::java::lang::Object* key)
{
    return Collections_UnmodifiableMap::containsKey(key);
}

bool java::util::Collections_UnmodifiableNavigableMap::containsValue(::java::lang::Object* value)
{
    return Collections_UnmodifiableMap::containsValue(value);
}

bool java::util::Collections_UnmodifiableNavigableMap::equals(::java::lang::Object* o)
{
    return Collections_UnmodifiableMap::equals(o);
}

void java::util::Collections_UnmodifiableNavigableMap::forEach(::java::util::function::BiConsumer* action)
{
    Collections_UnmodifiableMap::forEach(action);
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::get(key));
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::getOrDefault(key, defaultValue));
}

int32_t java::util::Collections_UnmodifiableNavigableMap::hashCode()
{
    return Collections_UnmodifiableMap::hashCode();
}

bool java::util::Collections_UnmodifiableNavigableMap::isEmpty()
{
    return Collections_UnmodifiableMap::isEmpty();
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::merge(key, value, remappingFunction));
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::put(key, value));
}

void java::util::Collections_UnmodifiableNavigableMap::putAll(Map* m)
{
    Collections_UnmodifiableMap::putAll(m);
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::putIfAbsent(key, value));
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::remove(key));
}

bool java::util::Collections_UnmodifiableNavigableMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return Collections_UnmodifiableMap::remove(key, value);
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::replace(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableMap::replace(key, value));
}

bool java::util::Collections_UnmodifiableNavigableMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{
    return Collections_UnmodifiableMap::replace(key, oldValue, newValue);
}

void java::util::Collections_UnmodifiableNavigableMap::replaceAll(::java::util::function::BiFunction* function)
{
    Collections_UnmodifiableMap::replaceAll(function);
}

int32_t java::util::Collections_UnmodifiableNavigableMap::size()
{
    return Collections_UnmodifiableMap::size();
}

java::util::Comparator* java::util::Collections_UnmodifiableNavigableMap::comparator()
{
    return java_cast< Comparator* >(Collections_UnmodifiableSortedMap::comparator());
}

java::util::Set* java::util::Collections_UnmodifiableNavigableMap::entrySet()
{
    return java_cast< Set* >(Collections_UnmodifiableMap::entrySet());
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::firstKey()
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableSortedMap::firstKey());
}

java::util::SortedMap* java::util::Collections_UnmodifiableNavigableMap::headMap(::java::lang::Object* toKey)
{
    return java_cast< SortedMap* >(Collections_UnmodifiableSortedMap::headMap(toKey));
}

java::util::Set* java::util::Collections_UnmodifiableNavigableMap::keySet()
{
    return java_cast< Set* >(Collections_UnmodifiableMap::keySet());
}

java::lang::Object* java::util::Collections_UnmodifiableNavigableMap::lastKey()
{
    return java_cast< ::java::lang::Object* >(Collections_UnmodifiableSortedMap::lastKey());
}

java::util::SortedMap* java::util::Collections_UnmodifiableNavigableMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{
    return java_cast< SortedMap* >(Collections_UnmodifiableSortedMap::subMap(fromKey, toKey));
}

java::util::SortedMap* java::util::Collections_UnmodifiableNavigableMap::tailMap(::java::lang::Object* fromKey)
{
    return java_cast< SortedMap* >(Collections_UnmodifiableSortedMap::tailMap(fromKey));
}

java::util::Collection* java::util::Collections_UnmodifiableNavigableMap::values()
{
    return java_cast< Collection* >(Collections_UnmodifiableMap::values());
}

java::lang::Class* java::util::Collections_UnmodifiableNavigableMap::getClass0()
{
    return class_();
}

