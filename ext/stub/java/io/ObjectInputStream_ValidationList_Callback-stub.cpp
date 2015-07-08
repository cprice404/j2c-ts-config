// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/ObjectInputStream_ValidationList_Callback.hpp>

extern void unimplemented_(const char16_t* name);
java::io::ObjectInputStream_ValidationList_Callback::ObjectInputStream_ValidationList_Callback(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ObjectInputStream_ValidationList_Callback::ObjectInputStream_ValidationList_Callback(ObjectInputValidation* obj, int32_t priority, ObjectInputStream_ValidationList_Callback* next, ::java::security::AccessControlContext* acc)
    : ObjectInputStream_ValidationList_Callback(*static_cast< ::default_init_tag* >(0))
{
    ctor(obj, priority, next, acc);
}


void ::java::io::ObjectInputStream_ValidationList_Callback::ctor(ObjectInputValidation* obj, int32_t priority, ObjectInputStream_ValidationList_Callback* next, ::java::security::AccessControlContext* acc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ObjectInputStream_ValidationList_Callback::ctor(ObjectInputValidation* obj, int32_t priority, ObjectInputStream_ValidationList_Callback* next, ::java::security::AccessControlContext* acc)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::ObjectInputStream_ValidationList_Callback::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ObjectInputStream.ValidationList.Callback", 49);
    return c;
}

java::lang::Class* java::io::ObjectInputStream_ValidationList_Callback::getClass0()
{
    return class_();
}

