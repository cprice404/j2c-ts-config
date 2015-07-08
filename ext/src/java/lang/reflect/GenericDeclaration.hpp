// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
typedef ::SubArray< ::java::lang::reflect::TypeVariable, ::java::lang::ObjectArray, TypeArray, AnnotatedElementArray > TypeVariableArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

struct java::lang::reflect::GenericDeclaration
    : public virtual AnnotatedElement
{

    virtual TypeVariableArray* getTypeParameters() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
