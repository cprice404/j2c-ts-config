// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <sun/reflect/generics/factory/fwd-config.hpp>
#include <sun/reflect/generics/repository/fwd-config.hpp>
#include <sun/reflect/generics/repository/AbstractRepository.hpp>

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

struct default_init_tag;

class sun::reflect::generics::repository::GenericDeclRepository
    : public AbstractRepository
{

public:
    typedef AbstractRepository super;

private:
    std::atomic< ::java::lang::reflect::TypeVariableArray* > typeParams {  };

protected:
    void ctor(::java::lang::String* arg0, ::sun::reflect::generics::factory::GenericsFactory* arg1);

public:
    virtual ::java::lang::reflect::TypeVariableArray* getTypeParameters();

    // Generated

public: /* protected */
    GenericDeclRepository(::java::lang::String* arg0, ::sun::reflect::generics::factory::GenericsFactory* arg1);
protected:
    GenericDeclRepository(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
