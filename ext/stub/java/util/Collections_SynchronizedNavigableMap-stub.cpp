// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Collections_SynchronizedNavigableMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Comparator.hpp>
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
java::util::Collections_SynchronizedNavigableMap::Collections_SynchronizedNavigableMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedNavigableMap::Collections_SynchronizedNavigableMap(NavigableMap* m)
    : Collections_SynchronizedNavigableMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::util::Collections_SynchronizedNavigableMap::Collections_SynchronizedNavigableMap(NavigableMap* m, ::java::lang::Object* mutex)
    : Collections_SynchronizedNavigableMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, mutex);
}

constexpr int64_t java::util::Collections_SynchronizedNavigableMap::serialVersionUID;

void ::java::util::Collections_SynchronizedNavigableMap::ctor(NavigableMap* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SynchronizedNavigableMap::ctor(NavigableMap* m)");
}

void ::java::util::Collections_SynchronizedNavigableMap::ctor(NavigableMap* m, ::java::lang::Object* mutex)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SynchronizedNavigableMap::ctor(NavigableMap* m, ::java::lang::Object* mutex)");
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::ceilingEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::ceilingEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::ceilingKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableMap::ceilingKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableMap::descendingKeySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableMap::descendingKeySet()");
    return 0;
}

java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::descendingMap()
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::descendingMap()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::firstEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::firstEntry()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::floorEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::floorEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::floorKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableMap::floorKey(::java::lang::Object* key)");
    return 0;
}

java::util::SortedMap* java::util::Collections_SynchronizedNavigableMap::headMap(::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::Collections_SynchronizedNavigableMap::headMap(::java::lang::Object* toKey)");
    return 0;
}

java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::headMap(::java::lang::Object* toKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::headMap(::java::lang::Object* toKey, bool inclusive)");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::higherEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::higherEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::higherKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableMap::higherKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableMap::keySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableMap::keySet()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::lastEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::lastEntry()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::lowerEntry(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::lowerEntry(::java::lang::Object* key)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::lowerKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableMap::lowerKey(::java::lang::Object* key)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableMap::navigableKeySet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableMap::navigableKeySet()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::pollFirstEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::pollFirstEntry()");
    return 0;
}

java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::pollLastEntry()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::Collections_SynchronizedNavigableMap::pollLastEntry()");
    return 0;
}

java::util::SortedMap* java::util::Collections_SynchronizedNavigableMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::Collections_SynchronizedNavigableMap::subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey)");
    return 0;
}

java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive)");
    return 0;
}

java::util::SortedMap* java::util::Collections_SynchronizedNavigableMap::tailMap(::java::lang::Object* fromKey)
{ /* stub */
    unimplemented_(u"java::util::SortedMap* java::util::Collections_SynchronizedNavigableMap::tailMap(::java::lang::Object* fromKey)");
    return 0;
}

java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::tailMap(::java::lang::Object* fromKey, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableMap* java::util::Collections_SynchronizedNavigableMap::tailMap(::java::lang::Object* fromKey, bool inclusive)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Collections_SynchronizedNavigableMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedNavigableMap", 46);
    return c;
}

void java::util::Collections_SynchronizedNavigableMap::clear()
{
    Collections_SynchronizedMap::clear();
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::compute(key, remappingFunction));
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::computeIfAbsent(key, mappingFunction));
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::computeIfPresent(key, remappingFunction));
}

bool java::util::Collections_SynchronizedNavigableMap::containsKey(::java::lang::Object* key)
{
    return Collections_SynchronizedMap::containsKey(key);
}

bool java::util::Collections_SynchronizedNavigableMap::containsValue(::java::lang::Object* value)
{
    return Collections_SynchronizedMap::containsValue(value);
}

bool java::util::Collections_SynchronizedNavigableMap::equals(::java::lang::Object* o)
{
    return Collections_SynchronizedMap::equals(o);
}

void java::util::Collections_SynchronizedNavigableMap::forEach(::java::util::function::BiConsumer* action)
{
    Collections_SynchronizedMap::forEach(action);
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::get(key));
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::getOrDefault(key, defaultValue));
}

int32_t java::util::Collections_SynchronizedNavigableMap::hashCode()
{
    return Collections_SynchronizedMap::hashCode();
}

bool java::util::Collections_SynchronizedNavigableMap::isEmpty()
{
    return Collections_SynchronizedMap::isEmpty();
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::merge(key, value, remappingFunction));
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::put(key, value));
}

void java::util::Collections_SynchronizedNavigableMap::putAll(Map* m)
{
    Collections_SynchronizedMap::putAll(m);
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::putIfAbsent(key, value));
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::remove(key));
}

bool java::util::Collections_SynchronizedNavigableMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return Collections_SynchronizedMap::remove(key, value);
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::replace(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedMap::replace(key, value));
}

bool java::util::Collections_SynchronizedNavigableMap::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{
    return Collections_SynchronizedMap::replace(key, oldValue, newValue);
}

void java::util::Collections_SynchronizedNavigableMap::replaceAll(::java::util::function::BiFunction* function)
{
    Collections_SynchronizedMap::replaceAll(function);
}

int32_t java::util::Collections_SynchronizedNavigableMap::size()
{
    return Collections_SynchronizedMap::size();
}

java::util::Comparator* java::util::Collections_SynchronizedNavigableMap::comparator()
{
    return java_cast< Comparator* >(Collections_SynchronizedSortedMap::comparator());
}

java::util::Set* java::util::Collections_SynchronizedNavigableMap::entrySet()
{
    return java_cast< Set* >(Collections_SynchronizedMap::entrySet());
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::firstKey()
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedSortedMap::firstKey());
}

java::lang::Object* java::util::Collections_SynchronizedNavigableMap::lastKey()
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedSortedMap::lastKey());
}

java::util::Collection* java::util::Collections_SynchronizedNavigableMap::values()
{
    return java_cast< Collection* >(Collections_SynchronizedMap::values());
}

java::lang::Class* java::util::Collections_SynchronizedNavigableMap::getClass0()
{
    return class_();
}

