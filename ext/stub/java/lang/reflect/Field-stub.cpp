// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/lang/reflect/Field.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace annotation {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
}  // namespace annotation
}  // namespace lang
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::lang::reflect::Field::Field(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Field::Field(::java::lang::Class* declaringClass, ::java::lang::String* name, ::java::lang::Class* type, int32_t modifiers, int32_t slot, ::java::lang::String* signature, ::int8_tArray* annotations)
    : Field(*static_cast< ::default_init_tag* >(0))
{
    ctor(declaringClass, name, type, modifiers, slot, signature, annotations);
}


void ::java::lang::reflect::Field::ctor(::java::lang::Class* declaringClass, ::java::lang::String* name, ::java::lang::Class* type, int32_t modifiers, int32_t slot, ::java::lang::String* signature, ::int8_tArray* annotations)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::reflect::Field::ctor(::java::lang::Class* declaringClass, ::java::lang::String* name, ::java::lang::Class* type, int32_t modifiers, int32_t slot, ::java::lang::String* signature, ::int8_tArray* annotations)");
}

/* private: sun::reflect::FieldAccessor* java::lang::reflect::Field::acquireFieldAccessor(bool overrideFinalCheck) */
java::lang::reflect::Field* java::lang::reflect::Field::copy()
{ /* stub */
    unimplemented_(u"java::lang::reflect::Field* java::lang::reflect::Field::copy()");
    return 0;
}

/* private: java::util::Map* java::lang::reflect::Field::declaredAnnotations() */
bool java::lang::reflect::Field::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Field::equals(::java::lang::Object* obj)");
    return 0;
}

java::lang::Object* java::lang::reflect::Field::get(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::lang::reflect::Field::get(::java::lang::Object* obj)");
    return 0;
}

java::lang::reflect::AnnotatedType* java::lang::reflect::Field::getAnnotatedType()
{ /* stub */
    unimplemented_(u"java::lang::reflect::AnnotatedType* java::lang::reflect::Field::getAnnotatedType()");
    return 0;
}

java::lang::annotation::Annotation* java::lang::reflect::Field::getAnnotation(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::Annotation* java::lang::reflect::Field::getAnnotation(::java::lang::Class* annotationClass)");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Field::getAnnotationsByType(::java::lang::Class* annotationClass)
{ /* stub */
    unimplemented_(u"java::lang::annotation::AnnotationArray* java::lang::reflect::Field::getAnnotationsByType(::java::lang::Class* annotationClass)");
    return 0;
}

bool java::lang::reflect::Field::getBoolean(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Field::getBoolean(::java::lang::Object* obj)");
    return 0;
}

int8_t java::lang::reflect::Field::getByte(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int8_t java::lang::reflect::Field::getByte(::java::lang::Object* obj)");
    return 0;
}

char16_t java::lang::reflect::Field::getChar(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"char16_t java::lang::reflect::Field::getChar(::java::lang::Object* obj)");
    return 0;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Field::getDeclaredAnnotations()
{ /* stub */
}

java::lang::Class* java::lang::reflect::Field::getDeclaringClass()
{ /* stub */
    unimplemented_(u"java::lang::Class* java::lang::reflect::Field::getDeclaringClass()");
    return 0;
}

double java::lang::reflect::Field::getDouble(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"double java::lang::reflect::Field::getDouble(::java::lang::Object* obj)");
    return 0;
}

/* private: sun::reflect::generics::factory::GenericsFactory* java::lang::reflect::Field::getFactory() */
/* private: sun::reflect::FieldAccessor* java::lang::reflect::Field::getFieldAccessor(::java::lang::Object* obj) */
/* private: sun::reflect::FieldAccessor* java::lang::reflect::Field::getFieldAccessor(bool overrideFinalCheck) */
float java::lang::reflect::Field::getFloat(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"float java::lang::reflect::Field::getFloat(::java::lang::Object* obj)");
    return 0;
}

/* private: sun::reflect::generics::repository::FieldRepository* java::lang::reflect::Field::getGenericInfo() */
/* private: java::lang::String* java::lang::reflect::Field::getGenericSignature() */
java::lang::reflect::Type* java::lang::reflect::Field::getGenericType()
{ /* stub */
    unimplemented_(u"java::lang::reflect::Type* java::lang::reflect::Field::getGenericType()");
    return 0;
}

int32_t java::lang::reflect::Field::getInt(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int32_t java::lang::reflect::Field::getInt(::java::lang::Object* obj)");
    return 0;
}

int64_t java::lang::reflect::Field::getLong(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int64_t java::lang::reflect::Field::getLong(::java::lang::Object* obj)");
    return 0;
}

int32_t java::lang::reflect::Field::getModifiers()
{ /* stub */
return modifiers ; /* getter */
}

java::lang::String* java::lang::reflect::Field::getName()
{ /* stub */
return name ; /* getter */
}

int16_t java::lang::reflect::Field::getShort(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"int16_t java::lang::reflect::Field::getShort(::java::lang::Object* obj)");
    return 0;
}

java::lang::Class* java::lang::reflect::Field::getType()
{ /* stub */
return type ; /* getter */
}

int32_t java::lang::reflect::Field::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::lang::reflect::Field::hashCode()");
    return 0;
}

bool java::lang::reflect::Field::isEnumConstant()
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Field::isEnumConstant()");
    return 0;
}

bool java::lang::reflect::Field::isSynthetic()
{ /* stub */
    unimplemented_(u"bool java::lang::reflect::Field::isSynthetic()");
    return 0;
}

void java::lang::reflect::Field::set(::java::lang::Object* obj, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::set(::java::lang::Object* obj, ::java::lang::Object* value)");
}

void java::lang::reflect::Field::setBoolean(::java::lang::Object* obj, bool z)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setBoolean(::java::lang::Object* obj, bool z)");
}

void java::lang::reflect::Field::setByte(::java::lang::Object* obj, int8_t b)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setByte(::java::lang::Object* obj, int8_t b)");
}

void java::lang::reflect::Field::setChar(::java::lang::Object* obj, char16_t c)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setChar(::java::lang::Object* obj, char16_t c)");
}

void java::lang::reflect::Field::setDouble(::java::lang::Object* obj, double d)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setDouble(::java::lang::Object* obj, double d)");
}

/* private: void java::lang::reflect::Field::setFieldAccessor(::sun::reflect::FieldAccessor* accessor, bool overrideFinalCheck) */
void java::lang::reflect::Field::setFloat(::java::lang::Object* obj, float f)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setFloat(::java::lang::Object* obj, float f)");
}

void java::lang::reflect::Field::setInt(::java::lang::Object* obj, int32_t i)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setInt(::java::lang::Object* obj, int32_t i)");
}

void java::lang::reflect::Field::setLong(::java::lang::Object* obj, int64_t l)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setLong(::java::lang::Object* obj, int64_t l)");
}

void java::lang::reflect::Field::setShort(::java::lang::Object* obj, int16_t s)
{ /* stub */
    unimplemented_(u"void java::lang::reflect::Field::setShort(::java::lang::Object* obj, int16_t s)");
}

java::lang::String* java::lang::reflect::Field::toGenericString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::lang::reflect::Field::toGenericString()");
    return 0;
}

java::lang::String* java::lang::reflect::Field::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::lang::reflect::Field::toString()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::lang::reflect::Field::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Field", 23);
    return c;
}

java::lang::Class* java::lang::reflect::Field::getClass0()
{
    return class_();
}

