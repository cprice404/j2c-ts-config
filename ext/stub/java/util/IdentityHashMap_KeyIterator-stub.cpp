// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/IdentityHashMap_KeyIterator.hpp>

#include <java/util/IdentityHashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::IdentityHashMap_KeyIterator::IdentityHashMap_KeyIterator(IdentityHashMap *IdentityHashMap_this, const ::default_init_tag&)
    : super(IdentityHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::util::IdentityHashMap_KeyIterator::ctor() */
java::lang::Object* java::util::IdentityHashMap_KeyIterator::next()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::IdentityHashMap_KeyIterator::next()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::IdentityHashMap_KeyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap.KeyIterator", 37);
    return c;
}

java::lang::Class* java::util::IdentityHashMap_KeyIterator::getClass0()
{
    return class_();
}

