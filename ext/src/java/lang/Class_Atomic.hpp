// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <sun/misc/fwd-config.hpp>
#include <sun/reflect/annotation/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Field, AccessibleObjectArray, MemberArray > FieldArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::Class_Atomic
    : public virtual Object
{

public:
    typedef Object super;

private:
    static int64_t annotationDataOffset_;
    static int64_t annotationTypeOffset_;
    static int64_t reflectionDataOffset_;
    static ::sun::misc::Unsafe* unsafe_;

    /*void ctor(); (private) */

public: /* package */
    static bool casAnnotationData(Class* clazz, Class_AnnotationData* oldData, Class_AnnotationData* newData);
    static bool casAnnotationType(Class* clazz, ::sun::reflect::annotation::AnnotationType* oldType, ::sun::reflect::annotation::AnnotationType* newType);
    static bool casReflectionData(Class* clazz, ::java::lang::ref::SoftReference* oldData, ::java::lang::ref::SoftReference* newData);
    /*static int64_t objectFieldOffset(::java::lang::reflect::FieldArray* fields, String* fieldName); (private) */

    // Generated

public:
    Class_Atomic();
protected:
    Class_Atomic(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static int64_t& annotationDataOffset();
    static int64_t& annotationTypeOffset();
    static int64_t& reflectionDataOffset();
    static ::sun::misc::Unsafe*& unsafe();
    virtual ::java::lang::Class* getClass0();
};
