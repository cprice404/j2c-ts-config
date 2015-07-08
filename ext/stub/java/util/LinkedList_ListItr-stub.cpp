// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/LinkedList_ListItr.hpp>

#include <java/util/LinkedList.hpp>

extern void unimplemented_(const char16_t* name);
java::util::LinkedList_ListItr::LinkedList_ListItr(LinkedList *LinkedList_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , LinkedList_this(LinkedList_this)
{
    clinit();
}

java::util::LinkedList_ListItr::LinkedList_ListItr(LinkedList *LinkedList_this, int32_t index)
    : LinkedList_ListItr(LinkedList_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(index);
}


void ::java::util::LinkedList_ListItr::ctor(int32_t index)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedList_ListItr::ctor(int32_t index)");
}

void java::util::LinkedList_ListItr::add(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList_ListItr::add(::java::lang::Object* e)");
}

void java::util::LinkedList_ListItr::checkForComodification()
{ /* stub */
    unimplemented_(u"void java::util::LinkedList_ListItr::checkForComodification()");
}

void java::util::LinkedList_ListItr::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList_ListItr::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::LinkedList_ListItr::hasNext()
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList_ListItr::hasNext()");
    return 0;
}

bool java::util::LinkedList_ListItr::hasPrevious()
{ /* stub */
    unimplemented_(u"bool java::util::LinkedList_ListItr::hasPrevious()");
    return 0;
}

java::lang::Object* java::util::LinkedList_ListItr::next()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList_ListItr::next()");
    return 0;
}

int32_t java::util::LinkedList_ListItr::nextIndex()
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedList_ListItr::nextIndex()");
    return 0;
}

java::lang::Object* java::util::LinkedList_ListItr::previous()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::LinkedList_ListItr::previous()");
    return 0;
}

int32_t java::util::LinkedList_ListItr::previousIndex()
{ /* stub */
    unimplemented_(u"int32_t java::util::LinkedList_ListItr::previousIndex()");
    return 0;
}

void java::util::LinkedList_ListItr::remove()
{ /* stub */
    unimplemented_(u"void java::util::LinkedList_ListItr::remove()");
}

void java::util::LinkedList_ListItr::set(::java::lang::Object* e)
{ /* stub */
    unimplemented_(u"void java::util::LinkedList_ListItr::set(::java::lang::Object* e)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::LinkedList_ListItr::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedList.ListItr", 28);
    return c;
}

java::lang::Class* java::util::LinkedList_ListItr::getClass0()
{
    return class_();
}

