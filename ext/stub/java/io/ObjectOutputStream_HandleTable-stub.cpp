// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/ObjectOutputStream_HandleTable.hpp>

extern void unimplemented_(const char16_t* name);
java::io::ObjectOutputStream_HandleTable::ObjectOutputStream_HandleTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ObjectOutputStream_HandleTable::ObjectOutputStream_HandleTable(int32_t initialCapacity, float loadFactor)
    : ObjectOutputStream_HandleTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity, loadFactor);
}


void ::java::io::ObjectOutputStream_HandleTable::ctor(int32_t initialCapacity, float loadFactor)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ObjectOutputStream_HandleTable::ctor(int32_t initialCapacity, float loadFactor)");
}

int32_t java::io::ObjectOutputStream_HandleTable::assign(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectOutputStream_HandleTable::assign(::java::lang::Object* obj)");
    return 0;
}

void java::io::ObjectOutputStream_HandleTable::clear()
{ /* stub */
    unimplemented_(u"void java::io::ObjectOutputStream_HandleTable::clear()");
}

/* private: void java::io::ObjectOutputStream_HandleTable::growEntries() */
/* private: void java::io::ObjectOutputStream_HandleTable::growSpine() */
/* private: int32_t java::io::ObjectOutputStream_HandleTable::hash(::java::lang::Object* obj) */
/* private: void java::io::ObjectOutputStream_HandleTable::insert(::java::lang::Object* obj, int32_t handle) */
int32_t java::io::ObjectOutputStream_HandleTable::lookup(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectOutputStream_HandleTable::lookup(::java::lang::Object* obj)");
    return 0;
}

int32_t java::io::ObjectOutputStream_HandleTable::size()
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectOutputStream_HandleTable::size()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::ObjectOutputStream_HandleTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ObjectOutputStream.HandleTable", 38);
    return c;
}

java::lang::Class* java::io::ObjectOutputStream_HandleTable::getClass0()
{
    return class_();
}

