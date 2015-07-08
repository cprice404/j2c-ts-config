// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/annotation/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/security/fwd-config.hpp>
#include <sun/reflect/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>

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

struct default_init_tag;

class java::lang::reflect::AccessibleObject
    : public virtual ::java::lang::Object
    , public virtual AnnotatedElement
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::security::Permission* ACCESS_PERMISSION_;

public: /* package */
    bool override {  };

private:
    static ::sun::reflect::ReflectionFactory* reflectionFactory_;

public: /* package */
    std::atomic< ::java::lang::Object* > securityCheckCache {  };

protected:
    void ctor();

public: /* package */
    virtual void checkAccess(::java::lang::Class* caller, ::java::lang::Class* clazz, ::java::lang::Object* obj, int32_t modifiers);

public:
    ::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* annotationClass) override;
    ::java::lang::annotation::AnnotationArray* getAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getAnnotationsByType(::java::lang::Class* annotationClass) override;
    ::java::lang::annotation::Annotation* getDeclaredAnnotation(::java::lang::Class* annotationClass) override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotationsByType(::java::lang::Class* annotationClass) override;
    virtual bool isAccessible();
    bool isAnnotationPresent(::java::lang::Class* annotationClass) override;
    virtual void setAccessible(bool flag);
    static void setAccessible(AccessibleObjectArray* array, bool flag);
    /*static void setAccessible0(AccessibleObject* obj, bool flag); (private) */

public: /* package */
    virtual void slowCheckMemberAccess(::java::lang::Class* caller, ::java::lang::Class* clazz, ::java::lang::Object* obj, int32_t modifiers, ::java::lang::Class* targetClass);

    // Generated

public: /* protected */
    AccessibleObject();
protected:
    AccessibleObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::security::Permission*& ACCESS_PERMISSION();

public: /* package */
    static ::sun::reflect::ReflectionFactory*& reflectionFactory();

private:
    virtual ::java::lang::Class* getClass0();
};
