// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/FileNotFoundException.hpp>

extern void unimplemented_(const char16_t* name);
java::io::FileNotFoundException::FileNotFoundException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileNotFoundException::FileNotFoundException()
    : FileNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::FileNotFoundException::FileNotFoundException(::java::lang::String* s)
    : FileNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::io::FileNotFoundException::serialVersionUID;

void ::java::io::FileNotFoundException::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::FileNotFoundException::ctor()");
}

void ::java::io::FileNotFoundException::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::FileNotFoundException::ctor(::java::lang::String* s)");
}

/* private: void ::java::io::FileNotFoundException::ctor(::java::lang::String* path, ::java::lang::String* reason) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::FileNotFoundException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileNotFoundException", 29);
    return c;
}

java::lang::Class* java::io::FileNotFoundException::getClass0()
{
    return class_();
}

