// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/HashMap_HashMapSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::HashMap_HashMapSpliterator::HashMap_HashMapSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_HashMapSpliterator::HashMap_HashMapSpliterator(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : HashMap_HashMapSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::HashMap_HashMapSpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::HashMap_HashMapSpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int64_t java::util::HashMap_HashMapSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::HashMap_HashMapSpliterator::estimateSize()");
    return 0;
}

int32_t java::util::HashMap_HashMapSpliterator::getFence()
{ /* stub */
return fence ; /* getter */
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::HashMap_HashMapSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.HashMapSpliterator", 36);
    return c;
}

java::lang::Class* java::util::HashMap_HashMapSpliterator::getClass0()
{
    return class_();
}

