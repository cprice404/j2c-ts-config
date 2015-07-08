// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/IdentityHashMap_EntryIterator.hpp>

#include <java/util/IdentityHashMap.hpp>

extern void unimplemented_(const char16_t* name);
java::util::IdentityHashMap_EntryIterator::IdentityHashMap_EntryIterator(IdentityHashMap *IdentityHashMap_this, const ::default_init_tag&)
    : super(IdentityHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::util::IdentityHashMap_EntryIterator::ctor() */
java::util::Map_Entry* java::util::IdentityHashMap_EntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* java::util::IdentityHashMap_EntryIterator::next()");
    return 0;
}

void java::util::IdentityHashMap_EntryIterator::remove()
{ /* stub */
    unimplemented_(u"void java::util::IdentityHashMap_EntryIterator::remove()");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::IdentityHashMap_EntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap.EntryIterator", 39);
    return c;
}

java::lang::Class* java::util::IdentityHashMap_EntryIterator::getClass0()
{
    return class_();
}

