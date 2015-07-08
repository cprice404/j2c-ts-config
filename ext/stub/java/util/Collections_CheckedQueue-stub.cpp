// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Collections_CheckedQueue.hpp>

#include <java/lang/ClassCastException.hpp>
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
java::util::Collections_CheckedQueue::Collections_CheckedQueue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_CheckedQueue::Collections_CheckedQueue(Queue* queue, ::java::lang::Class* elementType)
    : Collections_CheckedQueue(*static_cast< ::default_init_tag* >(0))
{
    ctor(queue, elementType);
}

constexpr int64_t java::util::Collections_CheckedQueue::serialVersionUID;

void ::java::util::Collections_CheckedQueue::ctor(Queue* queue, ::java::lang::Class* elementType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Collections_CheckedQueue::ctor(Queue* queue, ::java::lang::Class* elementType)");
}

java::lang::Object* java::util::Collections_CheckedQueue::element()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_CheckedQueue::element()");
    return 0;
}

bool java::util::Collections_CheckedQueue::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_CheckedQueue::equals(::java::lang::Object* o)");
    return 0;
}

int32_t java::util::Collections_CheckedQueue::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::Collections_CheckedQueue::hashCode()");
    return 0;
}

bool java::util::Collections_CheckedQueue::offer(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"bool java::util::Collections_CheckedQueue::offer(::java::lang::Object* e)");
    return 0;
}

java::lang::Object* java::util::Collections_CheckedQueue::peek()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_CheckedQueue::peek()");
    return 0;
}

java::lang::Object* java::util::Collections_CheckedQueue::poll()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_CheckedQueue::poll()");
    return 0;
}

java::lang::Object* java::util::Collections_CheckedQueue::remove()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Collections_CheckedQueue::remove()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Collections_CheckedQueue::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.CheckedQueue", 34);
    return c;
}

void java::util::Collections_CheckedQueue::forEach(::java::util::function::Consumer* action)
{
    Collections_CheckedCollection::forEach(action);
}

bool java::util::Collections_CheckedQueue::addAll(Collection* c)
{
    return Collections_CheckedCollection::addAll(c);
}

void java::util::Collections_CheckedQueue::clear()
{
    Collections_CheckedCollection::clear();
}

bool java::util::Collections_CheckedQueue::contains(::java::lang::Object* o)
{
    return Collections_CheckedCollection::contains(o);
}

bool java::util::Collections_CheckedQueue::containsAll(Collection* c)
{
    return Collections_CheckedCollection::containsAll(c);
}

bool java::util::Collections_CheckedQueue::isEmpty()
{
    return Collections_CheckedCollection::isEmpty();
}

java::util::Iterator* java::util::Collections_CheckedQueue::iterator()
{
    return java_cast< Iterator* >(Collections_CheckedCollection::iterator());
}

java::util::stream::Stream* java::util::Collections_CheckedQueue::parallelStream()
{
    return java_cast< ::java::util::stream::Stream* >(Collections_CheckedCollection::parallelStream());
}

bool java::util::Collections_CheckedQueue::remove(::java::lang::Object* o)
{
    return Collections_CheckedCollection::remove(o);
}

bool java::util::Collections_CheckedQueue::removeAll(Collection* c)
{
    return Collections_CheckedCollection::removeAll(c);
}

bool java::util::Collections_CheckedQueue::removeIf(::java::util::function::Predicate* filter)
{
    return Collections_CheckedCollection::removeIf(filter);
}

bool java::util::Collections_CheckedQueue::retainAll(Collection* c)
{
    return Collections_CheckedCollection::retainAll(c);
}

int32_t java::util::Collections_CheckedQueue::size()
{
    return Collections_CheckedCollection::size();
}

java::util::Spliterator* java::util::Collections_CheckedQueue::spliterator()
{
    return java_cast< Spliterator* >(Collections_CheckedCollection::spliterator());
}

java::util::stream::Stream* java::util::Collections_CheckedQueue::stream()
{
    return java_cast< ::java::util::stream::Stream* >(Collections_CheckedCollection::stream());
}

java::lang::ObjectArray* java::util::Collections_CheckedQueue::toArray_()
{
    return Collections_CheckedCollection::toArray_();
}

java::lang::ObjectArray* java::util::Collections_CheckedQueue::toArray_(::java::lang::ObjectArray* a)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections_CheckedCollection::toArray_(a));
}

bool java::util::Collections_CheckedQueue::add(::java::lang::Object* e)
{
    return Collections_CheckedCollection::add(e);
}

java::lang::Class* java::util::Collections_CheckedQueue::getClass0()
{
    return class_();
}

