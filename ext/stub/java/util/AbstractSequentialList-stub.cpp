// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/AbstractSequentialList.hpp>

extern void unimplemented_(const char16_t* name);
java::util::AbstractSequentialList::AbstractSequentialList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractSequentialList::AbstractSequentialList()
    : AbstractSequentialList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::util::AbstractSequentialList::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::AbstractSequentialList::ctor()");
}

void java::util::AbstractSequentialList::add(int32_t index, ::java::lang::Object* element)
{ /* stub */
    unimplemented_(u"void java::util::AbstractSequentialList::add(int32_t index, ::java::lang::Object* element)");
}

bool java::util::AbstractSequentialList::addAll(int32_t index, Collection* c)
{ /* stub */
    unimplemented_(u"bool java::util::AbstractSequentialList::addAll(int32_t index, Collection* c)");
    return 0;
}

java::lang::Object* java::util::AbstractSequentialList::get(int32_t index)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::AbstractSequentialList::get(int32_t index)");
    return 0;
}

java::util::Iterator* java::util::AbstractSequentialList::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* java::util::AbstractSequentialList::iterator()");
    return 0;
}

java::lang::Object* java::util::AbstractSequentialList::remove(int32_t index)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::AbstractSequentialList::remove(int32_t index)");
    return 0;
}

java::lang::Object* java::util::AbstractSequentialList::set(int32_t index, ::java::lang::Object* element)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::AbstractSequentialList::set(int32_t index, ::java::lang::Object* element)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::AbstractSequentialList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractSequentialList", 32);
    return c;
}

bool java::util::AbstractSequentialList::add(::java::lang::Object* e)
{
    return super::add(e);
}

java::util::ListIterator* java::util::AbstractSequentialList::listIterator()
{
    return super::listIterator();
}

bool java::util::AbstractSequentialList::addAll(Collection* c)
{
    return super::addAll(c);
}

bool java::util::AbstractSequentialList::remove(::java::lang::Object* o)
{
    return super::remove(o);
}

java::lang::Class* java::util::AbstractSequentialList::getClass0()
{
    return class_();
}

