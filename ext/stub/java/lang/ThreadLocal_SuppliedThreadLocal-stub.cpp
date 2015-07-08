// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/ThreadLocal_SuppliedThreadLocal.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ThreadLocal_SuppliedThreadLocal::ThreadLocal_SuppliedThreadLocal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadLocal_SuppliedThreadLocal::ThreadLocal_SuppliedThreadLocal(::java::util::function::Supplier* supplier)
    : ThreadLocal_SuppliedThreadLocal(*static_cast< ::default_init_tag* >(0))
{
    ctor(supplier);
}


void ::java::lang::ThreadLocal_SuppliedThreadLocal::ctor(::java::util::function::Supplier* supplier)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ThreadLocal_SuppliedThreadLocal::ctor(::java::util::function::Supplier* supplier)");
}

java::lang::Object* java::lang::ThreadLocal_SuppliedThreadLocal::initialValue()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::lang::ThreadLocal_SuppliedThreadLocal::initialValue()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::ThreadLocal_SuppliedThreadLocal::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadLocal.SuppliedThreadLocal", 41);
    return c;
}

java::lang::Class* java::lang::ThreadLocal_SuppliedThreadLocal::getClass0()
{
    return class_();
}

