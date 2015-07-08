// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Vector_VectorSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Vector_VectorSpliterator::Vector_VectorSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Vector_VectorSpliterator::Vector_VectorSpliterator(Vector* list, ::java::lang::ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount)
    : Vector_VectorSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(list, array, origin, fence, expectedModCount);
}


void ::java::util::Vector_VectorSpliterator::ctor(Vector* list, ::java::lang::ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Vector_VectorSpliterator::ctor(Vector* list, ::java::lang::ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount)");
}

int32_t java::util::Vector_VectorSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::Vector_VectorSpliterator::characteristics()");
    return 0;
}

int64_t java::util::Vector_VectorSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::Vector_VectorSpliterator::estimateSize()");
    return 0;
}

void java::util::Vector_VectorSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::Vector_VectorSpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

/* private: int32_t java::util::Vector_VectorSpliterator::getFence() */
bool java::util::Vector_VectorSpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::Vector_VectorSpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::Spliterator* java::util::Vector_VectorSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::Spliterator* java::util::Vector_VectorSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Vector_VectorSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Vector.VectorSpliterator", 34);
    return c;
}

java::lang::Class* java::util::Vector_VectorSpliterator::getClass0()
{
    return class_();
}

