// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/LinkedList.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::util::LinkedList::LinkedList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedList::LinkedList()
    : LinkedList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::LinkedList::LinkedList(Collection* c)
    : LinkedList(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

constexpr int64_t java::util::LinkedList::serialVersionUID;

void ::java::util::LinkedList::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedList::ctor()");
}

void ::java::util::LinkedList::ctor(Collection* c)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedList::ctor(Collection* c)");
}

bool java::util::LinkedList::add(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::add(::java::lang::Object* e)");
    return 0;
}

void java::util::LinkedList::add(int32_t index, ::java::lang::Object* element)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::add(int32_t index, ::java::lang::Object* element)");
}

bool java::util::LinkedList::addAll(Collection* c)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::addAll(Collection* c)");
    return 0;
}

bool java::util::LinkedList::addAll(int32_t index, Collection* c)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::addAll(int32_t index, Collection* c)");
    return 0;
}

void java::util::LinkedList::addFirst(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::addFirst(::java::lang::Object* e)");
}

void java::util::LinkedList::addLast(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::addLast(::java::lang::Object* e)");
}

/* private: void java::util::LinkedList::checkElementIndex(int32_t index) */
/* private: void java::util::LinkedList::checkPositionIndex(int32_t index) */
void java::util::LinkedList::clear()
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::clear()");
}

java::lang::Object* java::util::LinkedList::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::clone()");
    return 0;
}

bool java::util::LinkedList::contains(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::contains(::java::lang::Object* o)");
    return 0;
}

java::util::Iterator* java::util::LinkedList::descendingIterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::LinkedList::descendingIterator()");
    return 0;
}

java::lang::Object* java::util::LinkedList::element()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::element()");
    return 0;
}

java::lang::Object* java::util::LinkedList::get(int32_t index)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::get(int32_t index)");
    return 0;
}

java::lang::Object* java::util::LinkedList::getFirst()
{ /* stub */
}

java::lang::Object* java::util::LinkedList::getLast()
{ /* stub */
}

int32_t java::util::LinkedList::indexOf(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedList::indexOf(::java::lang::Object* o)");
    return 0;
}

/* private: bool java::util::LinkedList::isElementIndex(int32_t index) */
/* private: bool java::util::LinkedList::isPositionIndex(int32_t index) */
int32_t java::util::LinkedList::lastIndexOf(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedList::lastIndexOf(::java::lang::Object* o)");
    return 0;
}

void java::util::LinkedList::linkBefore(::java::lang::Object* e, LinkedList_Node* succ)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::linkBefore(::java::lang::Object* e, LinkedList_Node* succ)");
}

/* private: void java::util::LinkedList::linkFirst(::java::lang::Object* e) */
void java::util::LinkedList::linkLast(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::linkLast(::java::lang::Object* e)");
}

java::util::ListIterator* java::util::LinkedList::listIterator(int32_t index)
{ /* stub */
    unimplemented_(u"java::util::ListIterator* java::util::LinkedList::listIterator(int32_t index)");
    return 0;
}

java::util::LinkedList_Node* java::util::LinkedList::node(int32_t index)
{ /* stub */
    unimplemented_(u"java::util::LinkedList_Node* java::util::LinkedList::node(int32_t index)");
    return 0;
}

bool java::util::LinkedList::offer(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::offer(::java::lang::Object* e)");
    return 0;
}

bool java::util::LinkedList::offerFirst(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::offerFirst(::java::lang::Object* e)");
    return 0;
}

bool java::util::LinkedList::offerLast(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::offerLast(::java::lang::Object* e)");
    return 0;
}

/* private: java::lang::String* java::util::LinkedList::outOfBoundsMsg(int32_t index) */
java::lang::Object* java::util::LinkedList::peek()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::peek()");
    return 0;
}

java::lang::Object* java::util::LinkedList::peekFirst()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::peekFirst()");
    return 0;
}

java::lang::Object* java::util::LinkedList::peekLast()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::peekLast()");
    return 0;
}

java::lang::Object* java::util::LinkedList::poll()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::poll()");
    return 0;
}

java::lang::Object* java::util::LinkedList::pollFirst()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::pollFirst()");
    return 0;
}

java::lang::Object* java::util::LinkedList::pollLast()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::pollLast()");
    return 0;
}

java::lang::Object* java::util::LinkedList::pop()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::pop()");
    return 0;
}

void java::util::LinkedList::push(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList::push(::java::lang::Object* e)");
}

/* private: void java::util::LinkedList::readObject(::java::io::ObjectInputStream* s) */
java::lang::Object* java::util::LinkedList::remove()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::remove()");
    return 0;
}

bool java::util::LinkedList::remove(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::remove(::java::lang::Object* o)");
    return 0;
}

java::lang::Object* java::util::LinkedList::remove(int32_t index)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::remove(int32_t index)");
    return 0;
}

java::lang::Object* java::util::LinkedList::removeFirst()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::removeFirst()");
    return 0;
}

bool java::util::LinkedList::removeFirstOccurrence(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::removeFirstOccurrence(::java::lang::Object* o)");
    return 0;
}

java::lang::Object* java::util::LinkedList::removeLast()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::removeLast()");
    return 0;
}

bool java::util::LinkedList::removeLastOccurrence(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList::removeLastOccurrence(::java::lang::Object* o)");
    return 0;
}

java::lang::Object* java::util::LinkedList::set(int32_t index, ::java::lang::Object* element)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::set(int32_t index, ::java::lang::Object* element)");
    return 0;
}

int32_t java::util::LinkedList::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedList::size()");
    return 0;
}

java::util::Spliterator* java::util::LinkedList::spliterator()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::LinkedList::spliterator()");
    return 0;
}

/* private: java::util::LinkedList* java::util::LinkedList::superClone() */
java::lang::ObjectArray* java::util::LinkedList::toArray_()
{ /* stub */
    unimplemented_(u"java::lang::ObjectArray* java::util::LinkedList::toArray_()");
    return 0;
}

java::lang::ObjectArray* java::util::LinkedList::toArray_(::java::lang::ObjectArray* a)
{ /* stub */
    unimplemented_(u"java::lang::ObjectArray* java::util::LinkedList::toArray_(::java::lang::ObjectArray* a)");
    return 0;
}

java::lang::Object* java::util::LinkedList::unlink(LinkedList_Node* x)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList::unlink(LinkedList_Node* x)");
    return 0;
}

/* private: java::lang::Object* java::util::LinkedList::unlinkFirst(LinkedList_Node* f) */
/* private: java::lang::Object* java::util::LinkedList::unlinkLast(LinkedList_Node* l) */
/* private: void java::util::LinkedList::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::LinkedList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedList", 20);
    return c;
}

bool java::util::LinkedList::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::LinkedList::equals(::java::lang::Object* o)
{
    return AbstractList::equals(o);
}

int32_t java::util::LinkedList::hashCode()
{
    return AbstractList::hashCode();
}

bool java::util::LinkedList::isEmpty()
{
    return AbstractCollection::isEmpty();
}

java::util::Iterator* java::util::LinkedList::iterator()
{
    return java_cast< Iterator* >(AbstractSequentialList::iterator());
}

java::util::ListIterator* java::util::LinkedList::listIterator()
{
    return java_cast< ListIterator* >(AbstractList::listIterator());
}

bool java::util::LinkedList::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

bool java::util::LinkedList::retainAll(Collection* c)
{
    return AbstractCollection::retainAll(c);
}

java::util::List* java::util::LinkedList::subList(int32_t fromIndex, int32_t toIndex)
{
    return java_cast< List* >(AbstractList::subList(fromIndex, toIndex));
}

java::lang::Class* java::util::LinkedList::getClass0()
{
    return class_();
}

