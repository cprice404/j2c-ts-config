// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/EnumMap_EntryIterator.hpp>

#include <java/util/EnumMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::EnumMap_EntryIterator::EnumMap_EntryIterator(EnumMap *EnumMap_this, const ::default_init_tag&)
    : super(EnumMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::util::EnumMap_EntryIterator::ctor() */
java::util::Map_Entry* java::util::EnumMap_EntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::EnumMap_EntryIterator::next()");
    return 0;
}

void java::util::EnumMap_EntryIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::EnumMap_EntryIterator::remove()");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::EnumMap_EntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumMap.EntryIterator", 31);
    return c;
}

java::lang::Class* java::util::EnumMap_EntryIterator::getClass0()
{
    return class_();
}

