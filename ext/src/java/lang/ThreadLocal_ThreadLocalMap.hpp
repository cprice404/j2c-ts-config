// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace ref {
typedef ::SubArray< ::java::lang::ref::Reference, ::java::lang::ObjectArray > ReferenceArray;
typedef ::SubArray< ::java::lang::ref::WeakReference, ReferenceArray > WeakReferenceArray;
}  // namespace ref
typedef ::SubArray< ::java::lang::ThreadLocal_ThreadLocalMap_Entry, ::java::lang::ref::WeakReferenceArray > ThreadLocal_ThreadLocalMap_EntryArray;
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::ThreadLocal_ThreadLocalMap
    : public virtual Object
{

public:
    typedef Object super;

private:
    static constexpr int32_t INITIAL_CAPACITY { int32_t(16) };
    int32_t size {  };
    ThreadLocal_ThreadLocalMap_EntryArray* table {  };
    int32_t threshold {  };

    /*void ctor(ThreadLocal_ThreadLocalMap* parentMap); (private) */
protected:
    void ctor(ThreadLocal* firstKey, Object* firstValue);
    /*bool cleanSomeSlots(int32_t i, int32_t n); (private) */
    /*void expungeStaleEntries(); (private) */
    /*int32_t expungeStaleEntry(int32_t staleSlot); (private) */
    /*ThreadLocal_ThreadLocalMap_Entry* getEntry(ThreadLocal* key); (private) */
    /*ThreadLocal_ThreadLocalMap_Entry* getEntryAfterMiss(ThreadLocal* key, int32_t i, ThreadLocal_ThreadLocalMap_Entry* e); (private) */
    /*static int32_t nextIndex(int32_t i, int32_t len); (private) */
    /*static int32_t prevIndex(int32_t i, int32_t len); (private) */
    /*void rehash(); (private) */
    /*void remove(ThreadLocal* key); (private) */
    /*void replaceStaleEntry(ThreadLocal* key, Object* value, int32_t staleSlot); (private) */
    /*void resize(); (private) */
    /*void set(ThreadLocal* key, Object* value); (private) */
    /*void setThreshold(int32_t len); (private) */

    // Generated

public: /* package */
    ThreadLocal_ThreadLocalMap(ThreadLocal* firstKey, Object* firstValue);
protected:
    ThreadLocal_ThreadLocalMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
