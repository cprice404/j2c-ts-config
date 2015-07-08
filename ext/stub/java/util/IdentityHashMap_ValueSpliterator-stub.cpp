// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/IdentityHashMap_ValueSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::IdentityHashMap_ValueSpliterator::IdentityHashMap_ValueSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::IdentityHashMap_ValueSpliterator::IdentityHashMap_ValueSpliterator(IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : IdentityHashMap_ValueSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::IdentityHashMap_ValueSpliterator::ctor(IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::IdentityHashMap_ValueSpliterator::ctor(IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::IdentityHashMap_ValueSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::IdentityHashMap_ValueSpliterator::characteristics()");
    return 0;
}

void java::util::IdentityHashMap_ValueSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::IdentityHashMap_ValueSpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::IdentityHashMap_ValueSpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::IdentityHashMap_ValueSpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::IdentityHashMap_ValueSpliterator* java::util::IdentityHashMap_ValueSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::IdentityHashMap_ValueSpliterator* java::util::IdentityHashMap_ValueSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::IdentityHashMap_ValueSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap.ValueSpliterator", 42);
    return c;
}

int64_t java::util::IdentityHashMap_ValueSpliterator::estimateSize()
{
    return IdentityHashMap_IdentityHashMapSpliterator::estimateSize();
}

java::lang::Class* java::util::IdentityHashMap_ValueSpliterator::getClass0()
{
    return class_();
}

