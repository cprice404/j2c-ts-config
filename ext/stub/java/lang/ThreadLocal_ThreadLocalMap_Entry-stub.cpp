// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/ThreadLocal_ThreadLocalMap_Entry.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ThreadLocal_ThreadLocalMap_Entry::ThreadLocal_ThreadLocalMap_Entry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadLocal_ThreadLocalMap_Entry::ThreadLocal_ThreadLocalMap_Entry(ThreadLocal* k, Object* v)
    : ThreadLocal_ThreadLocalMap_Entry(*static_cast< ::default_init_tag* >(0))
{
    ctor(k, v);
}


void ::java::lang::ThreadLocal_ThreadLocalMap_Entry::ctor(ThreadLocal* k, Object* v)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ThreadLocal_ThreadLocalMap_Entry::ctor(ThreadLocal* k, Object* v)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::ThreadLocal_ThreadLocalMap_Entry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadLocal.ThreadLocalMap.Entry", 42);
    return c;
}

java::lang::Class* java::lang::ThreadLocal_ThreadLocalMap_Entry::getClass0()
{
    return class_();
}

