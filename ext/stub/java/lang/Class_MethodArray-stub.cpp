// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/Class_MethodArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Method, ExecutableArray > MethodArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::lang::Class_MethodArray::Class_MethodArray(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Class_MethodArray::Class_MethodArray()
    : Class_MethodArray(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Class_MethodArray::Class_MethodArray(int32_t initialSize)
    : Class_MethodArray(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialSize);
}


void ::java::lang::Class_MethodArray::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::Class_MethodArray::ctor()");
}

void ::java::lang::Class_MethodArray::ctor(int32_t initialSize)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::Class_MethodArray::ctor(int32_t initialSize)");
}

void java::lang::Class_MethodArray::add(::java::lang::reflect::Method* m)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::add(::java::lang::reflect::Method* m)");
}

void java::lang::Class_MethodArray::addAll(::java::lang::reflect::MethodArray* ma)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::addAll(::java::lang::reflect::MethodArray* ma)");
}

void java::lang::Class_MethodArray::addAll(Class_MethodArray* ma)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::addAll(Class_MethodArray* ma)");
}

void java::lang::Class_MethodArray::addAllIfNotPresent(Class_MethodArray* newMethods)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::addAllIfNotPresent(Class_MethodArray* newMethods)");
}

void java::lang::Class_MethodArray::addIfNotPresent(::java::lang::reflect::Method* newMethod)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::addIfNotPresent(::java::lang::reflect::Method* newMethod)");
}

void java::lang::Class_MethodArray::addInterfaceMethods(::java::lang::reflect::MethodArray* methods)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::addInterfaceMethods(::java::lang::reflect::MethodArray* methods)");
}

void java::lang::Class_MethodArray::compactAndTrim()
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::compactAndTrim()");
}

java::lang::reflect::Method* java::lang::Class_MethodArray::get(int32_t i)
{ /* stub */
    unimplemented_(u"java::lang::reflect::Method* java::lang::Class_MethodArray::get(int32_t i)");
    return 0;
}

java::lang::reflect::MethodArray* java::lang::Class_MethodArray::getArray_()
{ /* stub */
    unimplemented_(u"java::lang::reflect::MethodArray* java::lang::Class_MethodArray::getArray_()");
    return 0;
}

java::lang::reflect::Method* java::lang::Class_MethodArray::getFirst()
{ /* stub */
    unimplemented_(u"java::lang::reflect::Method* java::lang::Class_MethodArray::getFirst()");
    return 0;
}

bool java::lang::Class_MethodArray::hasDefaults()
{ /* stub */
    unimplemented_(u"bool java::lang::Class_MethodArray::hasDefaults()");
    return 0;
}

bool java::lang::Class_MethodArray::hasMoreSpecificClass(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::lang::Class_MethodArray::hasMoreSpecificClass(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2)");
    return 0;
}

int32_t java::lang::Class_MethodArray::length()
{ /* stub */
    unimplemented_(u"int32_t java::lang::Class_MethodArray::length()");
    return 0;
}

/* private: bool java::lang::Class_MethodArray::matchesNameAndDescriptor(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2) */
/* private: void java::lang::Class_MethodArray::remove(int32_t i) */
void java::lang::Class_MethodArray::removeByNameAndDescriptor(::java::lang::reflect::Method* toRemove)
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::removeByNameAndDescriptor(::java::lang::reflect::Method* toRemove)");
}

void java::lang::Class_MethodArray::removeLessSpecifics()
{ /* stub */
    unimplemented_(u"void java::lang::Class_MethodArray::removeLessSpecifics()");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::Class_MethodArray::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Class.MethodArray", 27);
    return c;
}

java::lang::Class* java::lang::Class_MethodArray::getClass0()
{
    return class_();
}

