// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/Object.hpp>

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

namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Constructor, ExecutableArray > ConstructorArray;
typedef ::SubArray< ::java::lang::reflect::Field, AccessibleObjectArray, MemberArray > FieldArray;
typedef ::SubArray< ::java::lang::reflect::Method, ExecutableArray > MethodArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::Class_ReflectionData
    : public virtual Object
{

public:
    typedef Object super;

public: /* package */
    std::atomic< ::java::lang::reflect::ConstructorArray* > declaredConstructors {  };
    std::atomic< ::java::lang::reflect::FieldArray* > declaredFields {  };
    std::atomic< ::java::lang::reflect::MethodArray* > declaredMethods {  };
    std::atomic< ::java::lang::reflect::FieldArray* > declaredPublicFields {  };
    std::atomic< ::java::lang::reflect::MethodArray* > declaredPublicMethods {  };
    std::atomic< ClassArray* > interfaces {  };
    std::atomic< ::java::lang::reflect::ConstructorArray* > publicConstructors {  };
    std::atomic< ::java::lang::reflect::FieldArray* > publicFields {  };
    std::atomic< ::java::lang::reflect::MethodArray* > publicMethods {  };
    int32_t redefinedCount {  };

protected:
    void ctor(int32_t redefinedCount);

    // Generated

public: /* package */
    Class_ReflectionData(int32_t redefinedCount);
protected:
    Class_ReflectionData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
