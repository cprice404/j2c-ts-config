// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/reflect/AccessibleObject.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace annotation {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
}  // namespace annotation

namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::lang::reflect::AccessibleObject::AccessibleObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::AccessibleObject::AccessibleObject()
    : AccessibleObject(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::security::Permission*& java::lang::reflect::AccessibleObject::ACCESS_PERMISSION()
{
    clinit();
    return ACCESS_PERMISSION_;
}
java::security::Permission* java::lang::reflect::AccessibleObject::ACCESS_PERMISSION_;
sun::reflect::ReflectionFactory*& java::lang::reflect::AccessibleObject::reflectionFactory()
{
    clinit();
    return reflectionFactory_;
}
sun::reflect::ReflectionFactory* java::lang::reflect::AccessibleObject::reflectionFactory_;

void ::java::lang::reflect::AccessibleObject::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::reflect::AccessibleObject::ctor()");
}

void java::lang::reflect::AccessibleObject::checkAccess(::java::lang::Class* caller, ::java::lang::Class* clazz, ::java::lang::Object* obj, int32_t modifiers)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::AccessibleObject::checkAccess(::java::lang::Class* caller, ::java::lang::Class* clazz, ::java::lang::Object* obj, int32_t modifiers)");
}

java::lang::annotation::Annotation* java::lang::reflect::AccessibleObject::getAnnotation(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::Annotation* java::lang::reflect::AccessibleObject::getAnnotation(::java::lang::Class* annotationClass)");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getAnnotations()
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getAnnotations()");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getAnnotationsByType(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getAnnotationsByType(::java::lang::Class* annotationClass)");
    return 0;
}

java::lang::annotation::Annotation* java::lang::reflect::AccessibleObject::getDeclaredAnnotation(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::Annotation* java::lang::reflect::AccessibleObject::getDeclaredAnnotation(::java::lang::Class* annotationClass)");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getDeclaredAnnotations()
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getDeclaredAnnotations()");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getDeclaredAnnotationsByType(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArray* java::lang::reflect::AccessibleObject::getDeclaredAnnotationsByType(::java::lang::Class* annotationClass)");
    return 0;
}

bool java::lang::reflect::AccessibleObject::isAccessible()
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::AccessibleObject::isAccessible()");
    return 0;
}

bool java::lang::reflect::AccessibleObject::isAnnotationPresent(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::AccessibleObject::isAnnotationPresent(::java::lang::Class* annotationClass)");
    return 0;
}

void java::lang::reflect::AccessibleObject::setAccessible(bool flag)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::AccessibleObject::setAccessible(bool flag)");
}

void java::lang::reflect::AccessibleObject::setAccessible(AccessibleObjectArray* array, bool flag)
{ /* stub */
    clinit();
    unimplemented_(u"void java::lang::reflect::AccessibleObject::setAccessible(AccessibleObjectArray* array, bool flag)");
}

/* private: void java::lang::reflect::AccessibleObject::setAccessible0(AccessibleObject* obj, bool flag) */
void java::lang::reflect::AccessibleObject::slowCheckMemberAccess(::java::lang::Class* caller, ::java::lang::Class* clazz, ::java::lang::Object* obj, int32_t modifiers, ::java::lang::Class* targetClass)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::AccessibleObject::slowCheckMemberAccess(::java::lang::Class* caller, ::java::lang::Class* clazz, ::java::lang::Object* obj, int32_t modifiers, ::java::lang::Class* targetClass)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::reflect::AccessibleObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.AccessibleObject", 34);
    return c;
}

java::lang::Class* java::lang::reflect::AccessibleObject::getClass0()
{
    return class_();
}

