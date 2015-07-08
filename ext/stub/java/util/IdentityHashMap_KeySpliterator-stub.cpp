// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/IdentityHashMap_KeySpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::IdentityHashMap_KeySpliterator::IdentityHashMap_KeySpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::IdentityHashMap_KeySpliterator::IdentityHashMap_KeySpliterator(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : IdentityHashMap_KeySpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(map, origin, fence, est, expectedModCount);
}


void ::java::util::IdentityHashMap_KeySpliterator::ctor(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::IdentityHashMap_KeySpliterator::ctor(IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::IdentityHashMap_KeySpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::IdentityHashMap_KeySpliterator::characteristics()");
    return 0;
}

void java::util::IdentityHashMap_KeySpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::IdentityHashMap_KeySpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::IdentityHashMap_KeySpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::IdentityHashMap_KeySpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::IdentityHashMap_KeySpliterator* java::util::IdentityHashMap_KeySpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::IdentityHashMap_KeySpliterator* java::util::IdentityHashMap_KeySpliterator::trySplit()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::IdentityHashMap_KeySpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap.KeySpliterator", 40);
    return c;
}

int64_t java::util::IdentityHashMap_KeySpliterator::estimateSize()
{
    return IdentityHashMap_IdentityHashMapSpliterator::estimateSize();
}

java::lang::Class* java::util::IdentityHashMap_KeySpliterator::getClass0()
{
    return class_();
}

