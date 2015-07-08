// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/ClassLoader_NativeLibrary.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::ClassLoader_NativeLibrary::ClassLoader_NativeLibrary(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ClassLoader_NativeLibrary::ClassLoader_NativeLibrary(Class* fromClass, String* name, bool isBuiltin)
    : ClassLoader_NativeLibrary(*static_cast< ::default_init_tag* >(0))
{
    ctor(fromClass, name, isBuiltin);
}


void ::java::lang::ClassLoader_NativeLibrary::ctor(Class* fromClass, String* name, bool isBuiltin)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::ClassLoader_NativeLibrary::ctor(Class* fromClass, String* name, bool isBuiltin)");
}

void java::lang::ClassLoader_NativeLibrary::finalize()
{ /* stub */
    unimplemented_(u"void java::lang::ClassLoader_NativeLibrary::finalize()");
}

java::lang::Class* java::lang::ClassLoader_NativeLibrary::getFromClass()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Class* java::lang::ClassLoader_NativeLibrary::getFromClass()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::ClassLoader_NativeLibrary::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ClassLoader.NativeLibrary", 35);
    return c;
}

java::lang::Class* java::lang::ClassLoader_NativeLibrary::getClass0()
{
    return class_();
}

