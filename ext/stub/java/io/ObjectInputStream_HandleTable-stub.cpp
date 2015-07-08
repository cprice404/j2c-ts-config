// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/ObjectInputStream_HandleTable.hpp>

extern void unimplemented_(const char16_t* name);
java::io::ObjectInputStream_HandleTable::ObjectInputStream_HandleTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ObjectInputStream_HandleTable::ObjectInputStream_HandleTable(int32_t initialCapacity)
    : ObjectInputStream_HandleTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity);
}

constexpr int8_t java::io::ObjectInputStream_HandleTable::STATUS_EXCEPTION;
constexpr int8_t java::io::ObjectInputStream_HandleTable::STATUS_OK;
constexpr int8_t java::io::ObjectInputStream_HandleTable::STATUS_UNKNOWN;

void ::java::io::ObjectInputStream_HandleTable::ctor(int32_t initialCapacity)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ObjectInputStream_HandleTable::ctor(int32_t initialCapacity)");
}

int32_t java::io::ObjectInputStream_HandleTable::assign(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectInputStream_HandleTable::assign(::java::lang::Object* obj)");
    return 0;
}

void java::io::ObjectInputStream_HandleTable::clear()
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_HandleTable::clear()");
}

void java::io::ObjectInputStream_HandleTable::finish(int32_t handle)
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_HandleTable::finish(int32_t handle)");
}

/* private: void java::io::ObjectInputStream_HandleTable::grow() */
java::lang::ClassNotFoundException* java::io::ObjectInputStream_HandleTable::lookupException(int32_t handle)
{ /* stub */
    unimplemented_(u"java::lang::ClassNotFoundException* java::io::ObjectInputStream_HandleTable::lookupException(int32_t handle)");
    return 0;
}

java::lang::Object* java::io::ObjectInputStream_HandleTable::lookupObject(int32_t handle)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::io::ObjectInputStream_HandleTable::lookupObject(int32_t handle)");
    return 0;
}

void java::io::ObjectInputStream_HandleTable::markDependency(int32_t dependent, int32_t target)
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_HandleTable::markDependency(int32_t dependent, int32_t target)");
}

void java::io::ObjectInputStream_HandleTable::markException(int32_t handle, ::java::lang::ClassNotFoundException* ex)
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_HandleTable::markException(int32_t handle, ::java::lang::ClassNotFoundException* ex)");
}

void java::io::ObjectInputStream_HandleTable::setObject(int32_t handle, ::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"void java::io::ObjectInputStream_HandleTable::setObject(int32_t handle, ::java::lang::Object* obj)");
}

int32_t java::io::ObjectInputStream_HandleTable::size()
{ /* stub */
    unimplemented_(u"int32_t java::io::ObjectInputStream_HandleTable::size()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::ObjectInputStream_HandleTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ObjectInputStream.HandleTable", 37);
    return c;
}

java::lang::Class* java::io::ObjectInputStream_HandleTable::getClass0()
{
    return class_();
}

