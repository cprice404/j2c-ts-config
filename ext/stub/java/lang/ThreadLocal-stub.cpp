// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/ThreadLocal.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ThreadLocal::ThreadLocal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadLocal::ThreadLocal()
    : ThreadLocal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::lang::ThreadLocal::HASH_INCREMENT;
java::util::concurrent::atomic::AtomicInteger*& java::lang::ThreadLocal::nextHashCode_()
{
    clinit();
    return nextHashCode__;
}
java::util::concurrent::atomic::AtomicInteger* java::lang::ThreadLocal::nextHashCode__;

void ::java::lang::ThreadLocal::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ThreadLocal::ctor()");
}

java::lang::Object* java::lang::ThreadLocal::childValue(Object* parentValue)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::lang::ThreadLocal::childValue(Object* parentValue)");
    return 0;
}

java::lang::ThreadLocal_ThreadLocalMap* java::lang::ThreadLocal::createInheritedMap(ThreadLocal_ThreadLocalMap* parentMap)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ThreadLocal_ThreadLocalMap* java::lang::ThreadLocal::createInheritedMap(ThreadLocal_ThreadLocalMap* parentMap)");
    return 0;
}

void java::lang::ThreadLocal::createMap(Thread* t, Object* firstValue)
{ /* stub */
    unimplemented_(u"void java::lang::ThreadLocal::createMap(Thread* t, Object* firstValue)");
}

java::lang::Object* java::lang::ThreadLocal::get()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::lang::ThreadLocal::get()");
    return 0;
}

java::lang::ThreadLocal_ThreadLocalMap* java::lang::ThreadLocal::getMap(Thread* t)
{ /* stub */
    unimplemented_(u"java::lang::ThreadLocal_ThreadLocalMap* java::lang::ThreadLocal::getMap(Thread* t)");
    return 0;
}

java::lang::Object* java::lang::ThreadLocal::initialValue()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::lang::ThreadLocal::initialValue()");
    return 0;
}

/* private: int32_t java::lang::ThreadLocal::nextHashCode() */
void java::lang::ThreadLocal::remove()
{ /* stub */
    unimplemented_(u"void java::lang::ThreadLocal::remove()");
}

void java::lang::ThreadLocal::set(Object* value)
{ /* stub */
    unimplemented_(u"void java::lang::ThreadLocal::set(Object* value)");
}

/* private: java::lang::Object* java::lang::ThreadLocal::setInitialValue() */
java::lang::ThreadLocal* java::lang::ThreadLocal::withInitial(::java::util::function::Supplier* supplier)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ThreadLocal* java::lang::ThreadLocal::withInitial(::java::util::function::Supplier* supplier)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::ThreadLocal::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadLocal", 21);
    return c;
}

java::lang::Class* java::lang::ThreadLocal::getClass0()
{
    return class_();
}

