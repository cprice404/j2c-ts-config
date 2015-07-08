// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Method, ExecutableArray > MethodArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::Class_MethodArray
    : public virtual Object
{

public:
    typedef Object super;

private:
    int32_t defaults {  };
    int32_t length_ {  };
    ::java::lang::reflect::MethodArray* methods {  };

protected:
    void ctor();
    void ctor(int32_t initialSize);

public: /* package */
    virtual void add(::java::lang::reflect::Method* m);
    virtual void addAll(::java::lang::reflect::MethodArray* ma);
    virtual void addAll(Class_MethodArray* ma);
    virtual void addAllIfNotPresent(Class_MethodArray* newMethods);
    virtual void addIfNotPresent(::java::lang::reflect::Method* newMethod);
    virtual void addInterfaceMethods(::java::lang::reflect::MethodArray* methods);
    virtual void compactAndTrim();
    virtual ::java::lang::reflect::Method* get(int32_t i);
    virtual ::java::lang::reflect::MethodArray* getArray_();
    virtual ::java::lang::reflect::Method* getFirst();
    virtual bool hasDefaults();
    static bool hasMoreSpecificClass(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2);
    virtual int32_t length();
    /*bool matchesNameAndDescriptor(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2); (private) */
    /*void remove(int32_t i); (private) */
    virtual void removeByNameAndDescriptor(::java::lang::reflect::Method* toRemove);
    virtual void removeLessSpecifics();

    // Generated
    Class_MethodArray();
    Class_MethodArray(int32_t initialSize);
protected:
    Class_MethodArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
