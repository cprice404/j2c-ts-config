// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/annotation/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace annotation {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
}  // namespace annotation
}  // namespace lang
}  // namespace java

struct java::lang::reflect::AnnotatedElement
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* annotationClass) = 0;
    virtual ::java::lang::annotation::AnnotationArray* getAnnotations() = 0;
    virtual ::java::lang::annotation::AnnotationArray* getAnnotationsByType(::java::lang::Class* annotationClass);
    virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation(::java::lang::Class* annotationClass);
    virtual ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() = 0;
    virtual ::java::lang::annotation::AnnotationArray* getDeclaredAnnotationsByType(::java::lang::Class* annotationClass);
    virtual bool isAnnotationPresent(::java::lang::Class* annotationClass);

    // Generated
    static ::java::lang::Class *class_();
};
