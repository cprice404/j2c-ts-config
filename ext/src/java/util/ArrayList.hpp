// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/List.hpp>
#include <java/util/RandomAccess.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::ArrayList
    : public AbstractList
    , public virtual List
    , public virtual RandomAccess
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    static ::java::lang::ObjectArray* DEFAULTCAPACITY_EMPTY_ELEMENTDATA_;
    static constexpr int32_t DEFAULT_CAPACITY { int32_t(10) };
    static ::java::lang::ObjectArray* EMPTY_ELEMENTDATA_;
    static constexpr int32_t MAX_ARRAY_SIZE { int32_t(2147483639) };

public: /* package */
    ::java::lang::ObjectArray* elementData_ {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(8683452581122892189LL) };
    int32_t size_ {  };

protected:
    void ctor();
    void ctor(int32_t initialCapacity);
    void ctor(Collection* c);

public:
    bool add(::java::lang::Object* e) override;
    void add(int32_t index, ::java::lang::Object* element) override;
    bool addAll(Collection* c) override;
    bool addAll(int32_t index, Collection* c) override;
    /*bool batchRemove(Collection* c, bool complement); (private) */
    void clear() override;
    ::java::lang::Object* clone() override;
    bool contains(::java::lang::Object* o) override;

public: /* package */
    virtual ::java::lang::Object* elementData(int32_t index);

public:
    virtual void ensureCapacity(int32_t minCapacity);
    /*void ensureCapacityInternal(int32_t minCapacity); (private) */
    /*void ensureExplicitCapacity(int32_t minCapacity); (private) */
    /*void fastRemove(int32_t index); (private) */
    void forEach(::java::util::function::Consumer* action) override;
    ::java::lang::Object* get(int32_t index) override;
    /*void grow(int32_t minCapacity); (private) */
    /*static int32_t hugeCapacity(int32_t minCapacity); (private) */
    int32_t indexOf(::java::lang::Object* o) override;
    bool isEmpty() override;
    Iterator* iterator() override;
    int32_t lastIndexOf(::java::lang::Object* o) override;
    ListIterator* listIterator() override;
    ListIterator* listIterator(int32_t index) override;
    /*::java::lang::String* outOfBoundsMsg(int32_t index); (private) */
    /*void rangeCheck(int32_t index); (private) */
    /*void rangeCheckForAdd(int32_t index); (private) */
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    ::java::lang::Object* remove(int32_t index) override;
    bool remove(::java::lang::Object* o) override;
    bool removeAll(Collection* c) override;
    bool removeIf(::java::util::function::Predicate* filter) override;

public: /* protected */
    void removeRange(int32_t fromIndex, int32_t toIndex) override;

public:
    void replaceAll(::java::util::function::UnaryOperator* operator_) override;
    bool retainAll(Collection* c) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;
    int32_t size() override;
    void sort(Comparator* c) override;
    Spliterator* spliterator() override;
    List* subList(int32_t fromIndex, int32_t toIndex) override;

public: /* package */
    static void subListRangeCheck(int32_t fromIndex, int32_t toIndex, int32_t size);

public:
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;
    virtual void trimToSize();
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    ArrayList();
    ArrayList(int32_t initialCapacity);
    ArrayList(Collection* c);
protected:
    ArrayList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool containsAll(Collection* c);
    bool equals(::java::lang::Object* o);
    int32_t hashCode();

private:
    static ::java::lang::ObjectArray*& DEFAULTCAPACITY_EMPTY_ELEMENTDATA();
    static ::java::lang::ObjectArray*& EMPTY_ELEMENTDATA();
    virtual ::java::lang::Class* getClass0();
};
