// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/ArrayList_ArrayListSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::ArrayList_ArrayListSpliterator::ArrayList_ArrayListSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::ArrayList_ArrayListSpliterator::ArrayList_ArrayListSpliterator(ArrayList* list, int32_t origin, int32_t fence, int32_t expectedModCount)
    : ArrayList_ArrayListSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(list, origin, fence, expectedModCount);
}


void ::java::util::ArrayList_ArrayListSpliterator::ctor(ArrayList* list, int32_t origin, int32_t fence, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::ArrayList_ArrayListSpliterator::ctor(ArrayList* list, int32_t origin, int32_t fence, int32_t expectedModCount)");
}

int32_t java::util::ArrayList_ArrayListSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::ArrayList_ArrayListSpliterator::characteristics()");
    return 0;
}

int64_t java::util::ArrayList_ArrayListSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::ArrayList_ArrayListSpliterator::estimateSize()");
    return 0;
}

void java::util::ArrayList_ArrayListSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::ArrayList_ArrayListSpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

/* private: int32_t java::util::ArrayList_ArrayListSpliterator::getFence() */
bool java::util::ArrayList_ArrayListSpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::ArrayList_ArrayListSpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::ArrayList_ArrayListSpliterator* java::util::ArrayList_ArrayListSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::ArrayList_ArrayListSpliterator* java::util::ArrayList_ArrayListSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::ArrayList_ArrayListSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.ArrayList.ArrayListSpliterator", 40);
    return c;
}

java::lang::Class* java::util::ArrayList_ArrayListSpliterator::getClass0()
{
    return class_();
}

