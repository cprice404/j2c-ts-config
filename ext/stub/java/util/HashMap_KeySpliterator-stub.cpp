// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/HashMap_KeySpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::HashMap_KeySpliterator::HashMap_KeySpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_KeySpliterator::HashMap_KeySpliterator(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : HashMap_KeySpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::HashMap_KeySpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::HashMap_KeySpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::HashMap_KeySpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::HashMap_KeySpliterator::characteristics()");
    return 0;
}

void java::util::HashMap_KeySpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_KeySpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::HashMap_KeySpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::HashMap_KeySpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::HashMap_KeySpliterator* java::util::HashMap_KeySpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::HashMap_KeySpliterator* java::util::HashMap_KeySpliterator::trySplit()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::HashMap_KeySpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.KeySpliterator", 32);
    return c;
}

int64_t java::util::HashMap_KeySpliterator::estimateSize()
{
    return HashMap_HashMapSpliterator::estimateSize();
}

java::lang::Class* java::util::HashMap_KeySpliterator::getClass0()
{
    return class_();
}

