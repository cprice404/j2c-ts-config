// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Collections_SynchronizedNavigableSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Spliterator.hpp>
#include <java/util/stream/Stream.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::Collections_SynchronizedNavigableSet::Collections_SynchronizedNavigableSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedNavigableSet::Collections_SynchronizedNavigableSet(NavigableSet* s)
    : Collections_SynchronizedNavigableSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::util::Collections_SynchronizedNavigableSet::Collections_SynchronizedNavigableSet(NavigableSet* s, ::java::lang::Object* mutex)
    : Collections_SynchronizedNavigableSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(s, mutex);
}

constexpr int64_t java::util::Collections_SynchronizedNavigableSet::serialVersionUID;

void ::java::util::Collections_SynchronizedNavigableSet::ctor(NavigableSet* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SynchronizedNavigableSet::ctor(NavigableSet* s)");
}

void ::java::util::Collections_SynchronizedNavigableSet::ctor(NavigableSet* s, ::java::lang::Object* mutex)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_SynchronizedNavigableSet::ctor(NavigableSet* s, ::java::lang::Object* mutex)");
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::ceiling(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableSet::ceiling(::java::lang::Object* e)");
    return 0;
}

java::util::Iterator* java::util::Collections_SynchronizedNavigableSet::descendingIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::Collections_SynchronizedNavigableSet::descendingIterator()");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::descendingSet()
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::descendingSet()");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::floor(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableSet::floor(::java::lang::Object* e)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::headSet(::java::lang::Object* toElement)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::headSet(::java::lang::Object* toElement)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::headSet(::java::lang::Object* toElement, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::headSet(::java::lang::Object* toElement, bool inclusive)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::higher(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableSet::higher(::java::lang::Object* e)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::lower(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableSet::lower(::java::lang::Object* e)");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::pollFirst()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableSet::pollFirst()");
    return 0;
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::pollLast()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_SynchronizedNavigableSet::pollLast()");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::subSet(::java::lang::Object* fromElement, bool fromInclusive, ::java::lang::Object* toElement, bool toInclusive)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::tailSet(::java::lang::Object* fromElement)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::tailSet(::java::lang::Object* fromElement)");
    return 0;
}

java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::tailSet(::java::lang::Object* fromElement, bool inclusive)
{ /* stub */
    unimplemented_(u"java::util::NavigableSet* java::util::Collections_SynchronizedNavigableSet::tailSet(::java::lang::Object* fromElement, bool inclusive)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Collections_SynchronizedNavigableSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedNavigableSet", 46);
    return c;
}

void java::util::Collections_SynchronizedNavigableSet::forEach(::java::util::function::Consumer* action)
{
    Collections_SynchronizedCollection::forEach(action);
}

java::util::stream::Stream* java::util::Collections_SynchronizedNavigableSet::parallelStream()
{
    return java_cast< ::java::util::stream::Stream* >(Collections_SynchronizedCollection::parallelStream());
}

bool java::util::Collections_SynchronizedNavigableSet::removeIf(::java::util::function::Predicate* filter)
{
    return Collections_SynchronizedCollection::removeIf(filter);
}

java::util::stream::Stream* java::util::Collections_SynchronizedNavigableSet::stream()
{
    return java_cast< ::java::util::stream::Stream* >(Collections_SynchronizedCollection::stream());
}

bool java::util::Collections_SynchronizedNavigableSet::add(::java::lang::Object* e)
{
    return Collections_SynchronizedCollection::add(e);
}

bool java::util::Collections_SynchronizedNavigableSet::addAll(Collection* c)
{
    return Collections_SynchronizedCollection::addAll(c);
}

void java::util::Collections_SynchronizedNavigableSet::clear()
{
    Collections_SynchronizedCollection::clear();
}

bool java::util::Collections_SynchronizedNavigableSet::contains(::java::lang::Object* o)
{
    return Collections_SynchronizedCollection::contains(o);
}

bool java::util::Collections_SynchronizedNavigableSet::containsAll(Collection* c)
{
    return Collections_SynchronizedCollection::containsAll(c);
}

bool java::util::Collections_SynchronizedNavigableSet::equals(::java::lang::Object* o)
{
    return Collections_SynchronizedSet::equals(o);
}

int32_t java::util::Collections_SynchronizedNavigableSet::hashCode()
{
    return Collections_SynchronizedSet::hashCode();
}

bool java::util::Collections_SynchronizedNavigableSet::isEmpty()
{
    return Collections_SynchronizedCollection::isEmpty();
}

java::util::Iterator* java::util::Collections_SynchronizedNavigableSet::iterator()
{
    return java_cast< Iterator* >(Collections_SynchronizedCollection::iterator());
}

bool java::util::Collections_SynchronizedNavigableSet::remove(::java::lang::Object* o)
{
    return Collections_SynchronizedCollection::remove(o);
}

bool java::util::Collections_SynchronizedNavigableSet::removeAll(Collection* c)
{
    return Collections_SynchronizedCollection::removeAll(c);
}

bool java::util::Collections_SynchronizedNavigableSet::retainAll(Collection* c)
{
    return Collections_SynchronizedCollection::retainAll(c);
}

int32_t java::util::Collections_SynchronizedNavigableSet::size()
{
    return Collections_SynchronizedCollection::size();
}

java::lang::ObjectArray* java::util::Collections_SynchronizedNavigableSet::toArray_()
{
    return Collections_SynchronizedCollection::toArray_();
}

java::lang::ObjectArray* java::util::Collections_SynchronizedNavigableSet::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections_SynchronizedCollection::toArray_(a));
}

java::util::Comparator* java::util::Collections_SynchronizedNavigableSet::comparator()
{
    return java_cast< Comparator* >(Collections_SynchronizedSortedSet::comparator());
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::first()
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedSortedSet::first());
}

java::lang::Object* java::util::Collections_SynchronizedNavigableSet::last()
{
    return java_cast< ::java::lang::Object* >(Collections_SynchronizedSortedSet::last());
}

java::util::Spliterator* java::util::Collections_SynchronizedNavigableSet::spliterator()
{
    return java_cast< Spliterator* >(Collections_SynchronizedCollection::spliterator());
}

java::lang::Class* java::util::Collections_SynchronizedNavigableSet::getClass0()
{
    return class_();
}

