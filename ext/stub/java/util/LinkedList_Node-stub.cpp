// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/LinkedList_Node.hpp>

extern void unimplemented_(const char16_t* name);
java::util::LinkedList_Node::LinkedList_Node(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedList_Node::LinkedList_Node(LinkedList_Node* prev, ::java::lang::Object* element, LinkedList_Node* next)
    : LinkedList_Node(*static_cast< ::default_init_tag* >(0))
{
    ctor(prev, element, next);
}


void ::java::util::LinkedList_Node::ctor(LinkedList_Node* prev, ::java::lang::Object* element, LinkedList_Node* next)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::LinkedList_Node::ctor(LinkedList_Node* prev, ::java::lang::Object* element, LinkedList_Node* next)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::LinkedList_Node::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedList.Node", 25);
    return c;
}

java::lang::Class* java::util::LinkedList_Node::getClass0()
{
    return class_();
}

