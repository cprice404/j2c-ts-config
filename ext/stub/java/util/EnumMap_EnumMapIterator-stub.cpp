// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/EnumMap_EnumMapIterator.hpp>

#include <java/util/EnumMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::EnumMap_EnumMapIterator::EnumMap_EnumMapIterator(EnumMap *EnumMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , EnumMap_this(EnumMap_this)
{
    clinit();
}


/* private: void ::java::util::EnumMap_EnumMapIterator::ctor() */
/* private: void java::util::EnumMap_EnumMapIterator::checkLastReturnedIndex() */
bool java::util::EnumMap_EnumMapIterator::hasNext()
{ /* stub */
    unimplemented_(u"bool java::util::EnumMap_EnumMapIterator::hasNext()");
    return 0;
}

void java::util::EnumMap_EnumMapIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::EnumMap_EnumMapIterator::remove()");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::EnumMap_EnumMapIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumMap.EnumMapIterator", 33);
    return c;
}

java::lang::Class* java::util::EnumMap_EnumMapIterator::getClass0()
{
    return class_();
}

