// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/ThreadLocal_ThreadLocalMap.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ThreadLocal_ThreadLocalMap::ThreadLocal_ThreadLocalMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadLocal_ThreadLocalMap::ThreadLocal_ThreadLocalMap(ThreadLocal* firstKey, Object* firstValue)
    : ThreadLocal_ThreadLocalMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstKey, firstValue);
}

constexpr int32_t java::lang::ThreadLocal_ThreadLocalMap::INITIAL_CAPACITY;

/* private: void ::java::lang::ThreadLocal_ThreadLocalMap::ctor(ThreadLocal_ThreadLocalMap* parentMap) */
void ::java::lang::ThreadLocal_ThreadLocalMap::ctor(ThreadLocal* firstKey, Object* firstValue)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ThreadLocal_ThreadLocalMap::ctor(ThreadLocal* firstKey, Object* firstValue)");
}

/* private: bool java::lang::ThreadLocal_ThreadLocalMap::cleanSomeSlots(int32_t i, int32_t n) */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::expungeStaleEntries() */
/* private: int32_t java::lang::ThreadLocal_ThreadLocalMap::expungeStaleEntry(int32_t staleSlot) */
/* private: java::lang::ThreadLocal_ThreadLocalMap_Entry* java::lang::ThreadLocal_ThreadLocalMap::getEntry(ThreadLocal* key) */
/* private: java::lang::ThreadLocal_ThreadLocalMap_Entry* java::lang::ThreadLocal_ThreadLocalMap::getEntryAfterMiss(ThreadLocal* key, int32_t i, ThreadLocal_ThreadLocalMap_Entry* e) */
/* private: int32_t java::lang::ThreadLocal_ThreadLocalMap::nextIndex(int32_t i, int32_t len) */
/* private: int32_t java::lang::ThreadLocal_ThreadLocalMap::prevIndex(int32_t i, int32_t len) */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::rehash() */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::remove(ThreadLocal* key) */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::replaceStaleEntry(ThreadLocal* key, Object* value, int32_t staleSlot) */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::resize() */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::set(ThreadLocal* key, Object* value) */
/* private: void java::lang::ThreadLocal_ThreadLocalMap::setThreshold(int32_t len) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::ThreadLocal_ThreadLocalMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadLocal.ThreadLocalMap", 36);
    return c;
}

java::lang::Class* java::lang::ThreadLocal_ThreadLocalMap::getClass0()
{
    return class_();
}

