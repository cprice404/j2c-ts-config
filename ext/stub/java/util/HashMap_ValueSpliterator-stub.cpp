// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/HashMap_ValueSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::HashMap_ValueSpliterator::HashMap_ValueSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_ValueSpliterator::HashMap_ValueSpliterator(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : HashMap_ValueSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::HashMap_ValueSpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::HashMap_ValueSpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::HashMap_ValueSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::HashMap_ValueSpliterator::characteristics()");
    return 0;
}

void java::util::HashMap_ValueSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_ValueSpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::HashMap_ValueSpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::HashMap_ValueSpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::HashMap_ValueSpliterator* java::util::HashMap_ValueSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::HashMap_ValueSpliterator* java::util::HashMap_ValueSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::HashMap_ValueSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.ValueSpliterator", 34);
    return c;
}

int64_t java::util::HashMap_ValueSpliterator::estimateSize()
{
    return HashMap_HashMapSpliterator::estimateSize();
}

java::lang::Class* java::util::HashMap_ValueSpliterator::getClass0()
{
    return class_();
}

