// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <com/sun/beans/fwd-config.hpp>
#include <java/beans/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace beans {
typedef ::SubArray< ::java::beans::BeanInfo, ::java::lang::ObjectArray > BeanInfoArray;
typedef ::SubArray< ::java::beans::FeatureDescriptor, ::java::lang::ObjectArray > FeatureDescriptorArray;
typedef ::SubArray< ::java::beans::EventSetDescriptor, FeatureDescriptorArray > EventSetDescriptorArray;
typedef ::SubArray< ::java::beans::MethodDescriptor, FeatureDescriptorArray > MethodDescriptorArray;
typedef ::SubArray< ::java::beans::PropertyDescriptor, FeatureDescriptorArray > PropertyDescriptorArray;
}  // namespace beans

namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;

namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
}  // namespace reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;

namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Method, ExecutableArray > MethodArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::beans::Introspector
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* ADD_PREFIX_;
    static EventSetDescriptorArray* EMPTY_EVENTSETDESCRIPTORS_;
    static ::java::lang::String* GET_PREFIX_;

public:
    static constexpr int32_t IGNORE_ALL_BEANINFO { int32_t(3) };
    static constexpr int32_t IGNORE_IMMEDIATE_BEANINFO { int32_t(2) };

private:
    static ::java::lang::String* IS_PREFIX_;
    static ::java::lang::String* REMOVE_PREFIX_;
    static ::java::lang::String* SET_PREFIX_;

public:
    static constexpr int32_t USE_ALL_BEANINFO { int32_t(1) };

private:
    BeanInfoArray* additionalBeanInfo {  };
    ::java::lang::Class* beanClass {  };
    static ::com::sun::beans::WeakCache* declaredMethodCache_;
    int32_t defaultEventIndex {  };
    ::java::lang::String* defaultEventName {  };
    int32_t defaultPropertyIndex {  };
    ::java::lang::String* defaultPropertyName {  };
    static ::java::lang::Class* eventListenerType_;
    ::java::util::Map* events {  };
    BeanInfo* explicitBeanInfo {  };
    ::java::util::Map* methods {  };
    ::java::util::HashMap* pdStore {  };
    ::java::util::Map* properties {  };
    bool propertyChangeSource {  };
    BeanInfo* superBeanInfo {  };

    /*void ctor(::java::lang::Class* beanClass, ::java::lang::Class* stopClass, int32_t flags); (private) */
    /*void addEvent(EventSetDescriptor* esd); (private) */
    /*void addMethod(MethodDescriptor* md); (private) */
    /*void addPropertyDescriptor(PropertyDescriptor* pd); (private) */
    /*void addPropertyDescriptors(PropertyDescriptorArray* descriptors); (private) */

public:
    static ::java::lang::String* decapitalize(::java::lang::String* name);
    /*static ::java::lang::Class* findCustomizerClass(::java::lang::Class* type); (private) */
    /*static BeanInfo* findExplicitBeanInfo(::java::lang::Class* beanClass); (private) */

public: /* package */
    static ::java::lang::reflect::Method* findMethod(::java::lang::Class* cls, ::java::lang::String* methodName, int32_t argCount);
    static ::java::lang::reflect::Method* findMethod(::java::lang::Class* cls, ::java::lang::String* methodName, int32_t argCount, ::java::lang::ClassArray* args);

public:
    static void flushCaches();
    static void flushFromCaches(::java::lang::Class* clz);
    /*BeanInfo* getBeanInfo(); (private) */
    static BeanInfo* getBeanInfo(::java::lang::Class* beanClass);
    static BeanInfo* getBeanInfo(::java::lang::Class* beanClass, int32_t flags);
    static BeanInfo* getBeanInfo(::java::lang::Class* beanClass, ::java::lang::Class* stopClass);
    static BeanInfo* getBeanInfo(::java::lang::Class* beanClass, ::java::lang::Class* stopClass, int32_t flags);
    static ::java::lang::StringArray* getBeanInfoSearchPath();
    /*PropertyDescriptorArray* getPropertyDescriptors(BeanInfo* info); (private) */
    /*static ::java::lang::reflect::MethodArray* getPublicDeclaredMethods(::java::lang::Class* clz); (private) */
    /*BeanDescriptor* getTargetBeanDescriptor(); (private) */
    /*int32_t getTargetDefaultEventIndex(); (private) */
    /*int32_t getTargetDefaultPropertyIndex(); (private) */
    /*EventSetDescriptorArray* getTargetEventInfo(); (private) */
    /*MethodDescriptorArray* getTargetMethodInfo(); (private) */
    /*PropertyDescriptorArray* getTargetPropertyInfo(); (private) */

public: /* package */
    static ::java::lang::Object* instantiate(::java::lang::Class* sibling, ::java::lang::String* className);
    /*static ::java::lang::reflect::Method* internalFindMethod(::java::lang::Class* start, ::java::lang::String* methodName, int32_t argCount, ::java::lang::ClassArray* args); (private) */
    /*static bool isAssignable(::java::lang::Class* current, ::java::lang::Class* candidate); (private) */
    /*bool isEventHandler(::java::lang::reflect::Method* m); (private) */
    static bool isSubclass(::java::lang::Class* a, ::java::lang::Class* b);
    /*static ::java::lang::String* makeQualifiedMethodName(::java::lang::String* name, ::java::lang::StringArray* params); (private) */
    /*PropertyDescriptor* mergePropertyDescriptor(IndexedPropertyDescriptor* ipd, PropertyDescriptor* pd); (private) */
    /*PropertyDescriptor* mergePropertyDescriptor(PropertyDescriptor* pd1, PropertyDescriptor* pd2); (private) */
    /*IndexedPropertyDescriptor* mergePropertyDescriptor(IndexedPropertyDescriptor* ipd1, IndexedPropertyDescriptor* ipd2); (private) */
    /*PropertyDescriptor* mergePropertyWithIndexedProperty(PropertyDescriptor* pd, IndexedPropertyDescriptor* ipd); (private) */
    /*void processPropertyDescriptors(); (private) */

public:
    static void setBeanInfoSearchPath(::java::lang::StringArray* path);
    /*bool throwsException(::java::lang::reflect::Method* method, ::java::lang::Class* exception); (private) */

    // Generated
    Introspector();
protected:
    Introspector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::lang::String*& ADD_PREFIX();

private:
    static EventSetDescriptorArray*& EMPTY_EVENTSETDESCRIPTORS();

public: /* package */
    static ::java::lang::String*& GET_PREFIX();
    static ::java::lang::String*& IS_PREFIX();
    static ::java::lang::String*& REMOVE_PREFIX();
    static ::java::lang::String*& SET_PREFIX();

private:
    static ::com::sun::beans::WeakCache*& declaredMethodCache();
    static ::java::lang::Class*& eventListenerType();
    virtual ::java::lang::Class* getClass0();
};
