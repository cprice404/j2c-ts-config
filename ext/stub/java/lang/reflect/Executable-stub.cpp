// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/reflect/Executable.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
}  // namespace reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;

namespace annotation {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
}  // namespace annotation

namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedType, ::java::lang::ObjectArray, AnnotatedElementArray > AnnotatedTypeArray;
typedef ::SubArray< ::java::lang::reflect::Parameter, ::java::lang::ObjectArray, AnnotatedElementArray > ParameterArray;
}  // namespace reflect

namespace annotation {
typedef ::SubArray< ::java::lang::annotation::AnnotationArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > AnnotationArrayArray;
}  // namespace annotation
}  // namespace lang
}  // namespace java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

extern void unimplemented_(const char16_t* name);
java::lang::reflect::Executable::Executable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Executable::Executable()
    : Executable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::lang::reflect::Executable::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::reflect::Executable::ctor()");
}

/* private: java::util::Map* java::lang::reflect::Executable::declaredAnnotations() */
bool java::lang::reflect::Executable::equalParamTypes(::java::lang::ClassArray* params1, ::java::lang::ClassArray* params2)
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Executable::equalParamTypes(::java::lang::ClassArray* params1, ::java::lang::ClassArray* params2)");
    return 0;
}

java::lang::reflect::TypeArray* java::lang::reflect::Executable::getAllGenericParameterTypes()
{ /* stub */
    unimplemented_(u"java::lang::reflect::TypeArray* java::lang::reflect::Executable::getAllGenericParameterTypes()");
    return 0;
}

java::lang::reflect::AnnotatedTypeArray* java::lang::reflect::Executable::getAnnotatedExceptionTypes()
{ /* stub */
    unimplemented_(u"java::lang::reflect::AnnotatedTypeArray* java::lang::reflect::Executable::getAnnotatedExceptionTypes()");
    return 0;
}

java::lang::reflect::AnnotatedTypeArray* java::lang::reflect::Executable::getAnnotatedParameterTypes()
{ /* stub */
    unimplemented_(u"java::lang::reflect::AnnotatedTypeArray* java::lang::reflect::Executable::getAnnotatedParameterTypes()");
    return 0;
}

java::lang::reflect::AnnotatedType* java::lang::reflect::Executable::getAnnotatedReceiverType()
{ /* stub */
    unimplemented_(u"java::lang::reflect::AnnotatedType* java::lang::reflect::Executable::getAnnotatedReceiverType()");
    return 0;
}

java::lang::reflect::AnnotatedType* java::lang::reflect::Executable::getAnnotatedReturnType0(Type* returnType)
{ /* stub */
    unimplemented_(u"java::lang::reflect::AnnotatedType* java::lang::reflect::Executable::getAnnotatedReturnType0(Type* returnType)");
    return 0;
}

java::lang::annotation::Annotation* java::lang::reflect::Executable::getAnnotation(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::Annotation* java::lang::reflect::Executable::getAnnotation(::java::lang::Class* annotationClass)");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Executable::getAnnotationsByType(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArray* java::lang::reflect::Executable::getAnnotationsByType(::java::lang::Class* annotationClass)");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Executable::getDeclaredAnnotations()
{ /* stub */
}

java::lang::reflect::TypeArray* java::lang::reflect::Executable::getGenericExceptionTypes()
{ /* stub */
    unimplemented_(u"java::lang::reflect::TypeArray* java::lang::reflect::Executable::getGenericExceptionTypes()");
    return 0;
}

java::lang::reflect::TypeArray* java::lang::reflect::Executable::getGenericParameterTypes()
{ /* stub */
    unimplemented_(u"java::lang::reflect::TypeArray* java::lang::reflect::Executable::getGenericParameterTypes()");
    return 0;
}

int32_t java::lang::reflect::Executable::getParameterCount()
{ /* stub */
    unimplemented_(u"int32_t java::lang::reflect::Executable::getParameterCount()");
    return 0;
}

java::lang::reflect::ParameterArray* java::lang::reflect::Executable::getParameters()
{ /* stub */
return parameters ; /* getter */
}

int8_tArray* java::lang::reflect::Executable::getTypeAnnotationBytes()
{ /* stub */
    unimplemented_(u"int8_tArray* java::lang::reflect::Executable::getTypeAnnotationBytes()");
    return 0;
}

bool java::lang::reflect::Executable::hasRealParameterData()
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Executable::hasRealParameterData()");
    return 0;
}

bool java::lang::reflect::Executable::isSynthetic()
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Executable::isSynthetic()");
    return 0;
}

bool java::lang::reflect::Executable::isVarArgs()
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Executable::isVarArgs()");
    return 0;
}

java::lang::annotation::AnnotationArrayArray* java::lang::reflect::Executable::parseParameterAnnotations(::int8_tArray* parameterAnnotations)
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArrayArray* java::lang::reflect::Executable::parseParameterAnnotations(::int8_tArray* parameterAnnotations)");
    return 0;
}

void java::lang::reflect::Executable::printModifiersIfNonzero(::java::lang::StringBuilder* sb, int32_t mask, bool isDefault)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Executable::printModifiersIfNonzero(::java::lang::StringBuilder* sb, int32_t mask, bool isDefault)");
}

/* private: java::lang::reflect::ParameterArray* java::lang::reflect::Executable::privateGetParameters() */
void java::lang::reflect::Executable::separateWithCommas(::java::lang::ClassArray* types, ::java::lang::StringBuilder* sb)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Executable::separateWithCommas(::java::lang::ClassArray* types, ::java::lang::StringBuilder* sb)");
}

java::lang::annotation::AnnotationArrayArray* java::lang::reflect::Executable::sharedGetParameterAnnotations(::java::lang::ClassArray* parameterTypes, ::int8_tArray* parameterAnnotations)
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArrayArray* java::lang::reflect::Executable::sharedGetParameterAnnotations(::java::lang::ClassArray* parameterTypes, ::int8_tArray* parameterAnnotations)");
    return 0;
}

java::lang::String* java::lang::reflect::Executable::sharedToGenericString(int32_t modifierMask, bool isDefault)
{ /* stub */
    unimplemented_(u"java::lang::String* java::lang::reflect::Executable::sharedToGenericString(int32_t modifierMask, bool isDefault)");
    return 0;
}

java::lang::String* java::lang::reflect::Executable::sharedToString(int32_t modifierMask, bool isDefault, ::java::lang::ClassArray* parameterTypes, ::java::lang::ClassArray* exceptionTypes)
{ /* stub */
    unimplemented_(u"java::lang::String* java::lang::reflect::Executable::sharedToString(int32_t modifierMask, bool isDefault, ::java::lang::ClassArray* parameterTypes, ::java::lang::ClassArray* exceptionTypes)");
    return 0;
}

/* private: java::lang::reflect::ParameterArray* java::lang::reflect::Executable::synthesizeAllParams() */
/* private: void java::lang::reflect::Executable::verifyParameters(ParameterArray* parameters) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::reflect::Executable::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Executable", 28);
    return c;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Executable::getAnnotations()
{
    return AccessibleObject::getAnnotations();
}

java::lang::annotation::Annotation* java::lang::reflect::Executable::getDeclaredAnnotation(::java::lang::Class* annotationClass)
{
    return java_cast< ::java::lang::annotation::Annotation* >(AccessibleObject::getDeclaredAnnotation(annotationClass));
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Executable::getDeclaredAnnotationsByType(::java::lang::Class* annotationClass)
{
    return java_cast< ::java::lang::annotation::AnnotationArray* >(AccessibleObject::getDeclaredAnnotationsByType(annotationClass));
}

bool java::lang::reflect::Executable::isAnnotationPresent(::java::lang::Class* annotationClass)
{
    return AccessibleObject::isAnnotationPresent(annotationClass);
}

java::lang::Class* java::lang::reflect::Executable::getClass0()
{
    return class_();
}

