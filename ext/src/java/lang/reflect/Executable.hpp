// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/annotation/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <sun/reflect/generics/repository/fwd-config.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/Member.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>

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
typedef ::SubArray< ::java::lang::reflect::TypeVariable, ::java::lang::ObjectArray, TypeArray, AnnotatedElementArray > TypeVariableArray;
}  // namespace reflect

namespace annotation {
typedef ::SubArray< ::java::lang::annotation::AnnotationArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > AnnotationArrayArray;
}  // namespace annotation
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::reflect::Executable
    : public AccessibleObject
    , public virtual Member
    , public virtual GenericDeclaration
{

public:
    typedef AccessibleObject super;

private:
    ::java::util::Map* declaredAnnotations_ {  };
    std::atomic< bool > hasRealParameterData_ {  };
    std::atomic< ParameterArray* > parameters {  };

protected:
    void ctor();
    /*::java::util::Map* declaredAnnotations(); (private) */

public: /* package */
    virtual bool equalParamTypes(::java::lang::ClassArray* params1, ::java::lang::ClassArray* params2);
    virtual TypeArray* getAllGenericParameterTypes();

public:
    virtual AnnotatedTypeArray* getAnnotatedExceptionTypes();
    virtual AnnotatedTypeArray* getAnnotatedParameterTypes();
    virtual AnnotatedType* getAnnotatedReceiverType();
    virtual AnnotatedType* getAnnotatedReturnType() = 0;

public: /* package */
    virtual AnnotatedType* getAnnotatedReturnType0(Type* returnType);

public:
    ::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* annotationClass) override;

public: /* package */
    virtual ::int8_tArray* getAnnotationBytes() = 0;

public:
    ::java::lang::annotation::AnnotationArray* getAnnotationsByType(::java::lang::Class* annotationClass) override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;
    /*::java::lang::Class* getDeclaringClass(); (already declared) */
    virtual ::java::lang::ClassArray* getExceptionTypes() = 0;
    virtual TypeArray* getGenericExceptionTypes();

public: /* package */
    virtual ::sun::reflect::generics::repository::ConstructorRepository* getGenericInfo() = 0;

public:
    virtual TypeArray* getGenericParameterTypes();
    /*int32_t getModifiers(); (already declared) */
    /*::java::lang::String* getName(); (already declared) */
    virtual ::java::lang::annotation::AnnotationArrayArray* getParameterAnnotations() = 0;
    virtual int32_t getParameterCount();
    virtual ::java::lang::ClassArray* getParameterTypes() = 0;
    virtual ParameterArray* getParameters();
    /*ParameterArray* getParameters0(); (private) */

public: /* package */
    virtual Executable* getRoot() = 0;
    virtual ::int8_tArray* getTypeAnnotationBytes();
    virtual ::int8_tArray* getTypeAnnotationBytes0();
    /*TypeVariableArray* getTypeParameters(); (already declared) */
    virtual void handleParameterNumberMismatch(int32_t resultLength, int32_t numParameters) = 0;
    virtual bool hasGenericInformation() = 0;
    virtual bool hasRealParameterData();

public:
    bool isSynthetic() override;
    virtual bool isVarArgs();

public: /* package */
    virtual ::java::lang::annotation::AnnotationArrayArray* parseParameterAnnotations(::int8_tArray* parameterAnnotations);
    virtual void printModifiersIfNonzero(::java::lang::StringBuilder* sb, int32_t mask, bool isDefault);
    /*ParameterArray* privateGetParameters(); (private) */
    virtual void separateWithCommas(::java::lang::ClassArray* types, ::java::lang::StringBuilder* sb);
    virtual ::java::lang::annotation::AnnotationArrayArray* sharedGetParameterAnnotations(::java::lang::ClassArray* parameterTypes, ::int8_tArray* parameterAnnotations);
    virtual ::java::lang::String* sharedToGenericString(int32_t modifierMask, bool isDefault);
    virtual ::java::lang::String* sharedToString(int32_t modifierMask, bool isDefault, ::java::lang::ClassArray* parameterTypes, ::java::lang::ClassArray* exceptionTypes);
    virtual void specificToGenericStringHeader(::java::lang::StringBuilder* sb) = 0;
    virtual void specificToStringHeader(::java::lang::StringBuilder* sb) = 0;
    /*ParameterArray* synthesizeAllParams(); (private) */

public:
    virtual ::java::lang::String* toGenericString() = 0;
    /*void verifyParameters(ParameterArray* parameters); (private) */

    // Generated

public: /* package */
    Executable();
protected:
    Executable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::annotation::AnnotationArray* getAnnotations();
    virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation(::java::lang::Class* annotationClass);
    virtual ::java::lang::annotation::AnnotationArray* getDeclaredAnnotationsByType(::java::lang::Class* annotationClass);
    virtual bool isAnnotationPresent(::java::lang::Class* annotationClass);

private:
    virtual ::java::lang::Class* getClass0();
};
