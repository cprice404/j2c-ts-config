// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/AbstractSequentialList.hpp>
#include <java/util/List.hpp>
#include <java/util/Deque.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::LinkedList
    : public AbstractSequentialList
    , public virtual List
    , public virtual Deque
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractSequentialList super;

public: /* package */
    LinkedList_Node* first {  };
    LinkedList_Node* last {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(876323262645176354LL) };

public: /* package */
    int32_t size_ {  };

protected:
    void ctor();
    void ctor(Collection* c);

public:
    bool add(::java::lang::Object* e) override;
    void add(int32_t index, ::java::lang::Object* element) override;
    bool addAll(Collection* c) override;
    bool addAll(int32_t index, Collection* c) override;
    void addFirst(::java::lang::Object* e) override;
    void addLast(::java::lang::Object* e) override;
    /*void checkElementIndex(int32_t index); (private) */
    /*void checkPositionIndex(int32_t index); (private) */
    void clear() override;
    ::java::lang::Object* clone() override;
    bool contains(::java::lang::Object* o) override;
    Iterator* descendingIterator() override;
    ::java::lang::Object* element() override;
    ::java::lang::Object* get(int32_t index) override;
    ::java::lang::Object* getFirst() override;
    ::java::lang::Object* getLast() override;
    int32_t indexOf(::java::lang::Object* o) override;
    /*bool isElementIndex(int32_t index); (private) */
    /*bool isPositionIndex(int32_t index); (private) */
    int32_t lastIndexOf(::java::lang::Object* o) override;

public: /* package */
    virtual void linkBefore(::java::lang::Object* e, LinkedList_Node* succ);
    /*void linkFirst(::java::lang::Object* e); (private) */
    virtual void linkLast(::java::lang::Object* e);

public:
    ListIterator* listIterator(int32_t index) override;

public: /* package */
    virtual LinkedList_Node* node(int32_t index);

public:
    bool offer(::java::lang::Object* e) override;
    bool offerFirst(::java::lang::Object* e) override;
    bool offerLast(::java::lang::Object* e) override;
    /*::java::lang::String* outOfBoundsMsg(int32_t index); (private) */
    ::java::lang::Object* peek() override;
    ::java::lang::Object* peekFirst() override;
    ::java::lang::Object* peekLast() override;
    ::java::lang::Object* poll() override;
    ::java::lang::Object* pollFirst() override;
    ::java::lang::Object* pollLast() override;
    ::java::lang::Object* pop() override;
    void push(::java::lang::Object* e) override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    ::java::lang::Object* remove() override;
    bool remove(::java::lang::Object* o) override;
    ::java::lang::Object* remove(int32_t index) override;
    ::java::lang::Object* removeFirst() override;
    bool removeFirstOccurrence(::java::lang::Object* o) override;
    ::java::lang::Object* removeLast() override;
    bool removeLastOccurrence(::java::lang::Object* o) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;
    int32_t size() override;
    Spliterator* spliterator() override;
    /*LinkedList* superClone(); (private) */
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

public: /* package */
    virtual ::java::lang::Object* unlink(LinkedList_Node* x);
    /*::java::lang::Object* unlinkFirst(LinkedList_Node* f); (private) */
    /*::java::lang::Object* unlinkLast(LinkedList_Node* l); (private) */
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated

public:
    LinkedList();
    LinkedList(Collection* c);
protected:
    LinkedList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool containsAll(Collection* c);
    bool equals(::java::lang::Object* o);
    int32_t hashCode();
    bool isEmpty();
    Iterator* iterator();
    virtual ListIterator* listIterator();
    bool removeAll(Collection* c);
    bool retainAll(Collection* c);
    virtual List* subList(int32_t fromIndex, int32_t toIndex);

private:
    virtual ::java::lang::Class* getClass0();
};
