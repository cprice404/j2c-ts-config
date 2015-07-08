// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/IdentityHashMap_IdentityHashMapSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::IdentityHashMap_IdentityHashMapSpliterator::IdentityHashMap_IdentityHashMapSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::IdentityHashMap_IdentityHashMapSpliterator::IdentityHashMap_IdentityHashMapSpliterator(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : IdentityHashMap_IdentityHashMapSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(map, origin, fence, est, expectedModCount);
}


void ::java::util::IdentityHashMap_IdentityHashMapSpliterator::ctor(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::IdentityHashMap_IdentityHashMapSpliterator::ctor(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int64_t java::util::IdentityHashMap_IdentityHashMapSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::IdentityHashMap_IdentityHashMapSpliterator::estimateSize()");
    return 0;
}

int32_t java::util::IdentityHashMap_IdentityHashMapSpliterator::getFence()
{ /* stub */
return fence ; /* getter */
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::IdentityHashMap_IdentityHashMapSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap.IdentityHashMapSpliterator", 52);
    return c;
}

java::lang::Class* java::util::IdentityHashMap_IdentityHashMapSpliterator::getClass0()
{
    return class_();
}

