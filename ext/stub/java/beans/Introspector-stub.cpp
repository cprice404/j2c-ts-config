// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/beans/Introspector.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace beans {
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

extern void unimplemented_(const char16_t* name);
java::beans::Introspector::Introspector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::String*& java::beans::Introspector::ADD_PREFIX()
{
    clinit();
    return ADD_PREFIX_;
}
java::lang::String* java::beans::Introspector::ADD_PREFIX_;
java::beans::EventSetDescriptorArray*& java::beans::Introspector::EMPTY_EVENTSETDESCRIPTORS()
{
    clinit();
    return EMPTY_EVENTSETDESCRIPTORS_;
}
java::beans::EventSetDescriptorArray* java::beans::Introspector::EMPTY_EVENTSETDESCRIPTORS_;
java::lang::String*& java::beans::Introspector::GET_PREFIX()
{
    clinit();
    return GET_PREFIX_;
}
java::lang::String* java::beans::Introspector::GET_PREFIX_;
constexpr int32_t java::beans::Introspector::IGNORE_ALL_BEANINFO;
constexpr int32_t java::beans::Introspector::IGNORE_IMMEDIATE_BEANINFO;
java::lang::String*& java::beans::Introspector::IS_PREFIX()
{
    clinit();
    return IS_PREFIX_;
}
java::lang::String* java::beans::Introspector::IS_PREFIX_;
java::lang::String*& java::beans::Introspector::REMOVE_PREFIX()
{
    clinit();
    return REMOVE_PREFIX_;
}
java::lang::String* java::beans::Introspector::REMOVE_PREFIX_;
java::lang::String*& java::beans::Introspector::SET_PREFIX()
{
    clinit();
    return SET_PREFIX_;
}
java::lang::String* java::beans::Introspector::SET_PREFIX_;
constexpr int32_t java::beans::Introspector::USE_ALL_BEANINFO;
com::sun::beans::WeakCache*& java::beans::Introspector::declaredMethodCache()
{
    clinit();
    return declaredMethodCache_;
}
com::sun::beans::WeakCache* java::beans::Introspector::declaredMethodCache_;
java::lang::Class*& java::beans::Introspector::eventListenerType()
{
    clinit();
    return eventListenerType_;
}
java::lang::Class* java::beans::Introspector::eventListenerType_;

/* private: void ::java::beans::Introspector::ctor(::java::lang::Class* beanClass, ::java::lang::Class* stopClass, int32_t flags) */
/* private: void java::beans::Introspector::addEvent(EventSetDescriptor* esd) */
/* private: void java::beans::Introspector::addMethod(MethodDescriptor* md) */
/* private: void java::beans::Introspector::addPropertyDescriptor(PropertyDescriptor* pd) */
/* private: void java::beans::Introspector::addPropertyDescriptors(PropertyDescriptorArray* descriptors) */
java::lang::String* java::beans::Introspector::decapitalize(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::beans::Introspector::decapitalize(::java::lang::String* name)");
    return 0;
}

/* private: java::lang::Class* java::beans::Introspector::findCustomizerClass(::java::lang::Class* type) */
/* private: java::beans::BeanInfo* java::beans::Introspector::findExplicitBeanInfo(::java::lang::Class* beanClass) */
java::lang::reflect::Method* java::beans::Introspector::findMethod(::java::lang::Class* cls, ::java::lang::String* methodName, int32_t argCount)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::reflect::Method* java::beans::Introspector::findMethod(::java::lang::Class* cls, ::java::lang::String* methodName, int32_t argCount)");
    return 0;
}

java::lang::reflect::Method* java::beans::Introspector::findMethod(::java::lang::Class* cls, ::java::lang::String* methodName, int32_t argCount, ::java::lang::ClassArray* args)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::reflect::Method* java::beans::Introspector::findMethod(::java::lang::Class* cls, ::java::lang::String* methodName, int32_t argCount, ::java::lang::ClassArray* args)");
    return 0;
}

void java::beans::Introspector::flushCaches()
{ /* stub */
    clinit();
    unimplemented_(u"void java::beans::Introspector::flushCaches()");
}

void java::beans::Introspector::flushFromCaches(::java::lang::Class* clz)
{ /* stub */
    clinit();
    unimplemented_(u"void java::beans::Introspector::flushFromCaches(::java::lang::Class* clz)");
}

/* private: java::beans::BeanInfo* java::beans::Introspector::getBeanInfo() */
java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass)
{ /* stub */
    clinit();
    unimplemented_(u"java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass)");
    return 0;
}

java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass, int32_t flags)
{ /* stub */
    clinit();
    unimplemented_(u"java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass, int32_t flags)");
    return 0;
}

java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass, ::java::lang::Class* stopClass)
{ /* stub */
    clinit();
    unimplemented_(u"java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass, ::java::lang::Class* stopClass)");
    return 0;
}

java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass, ::java::lang::Class* stopClass, int32_t flags)
{ /* stub */
    clinit();
    unimplemented_(u"java::beans::BeanInfo* java::beans::Introspector::getBeanInfo(::java::lang::Class* beanClass, ::java::lang::Class* stopClass, int32_t flags)");
    return 0;
}

java::lang::StringArray* java::beans::Introspector::getBeanInfoSearchPath()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* java::beans::Introspector::getBeanInfoSearchPath()");
    return 0;
}

/* private: java::beans::PropertyDescriptorArray* java::beans::Introspector::getPropertyDescriptors(BeanInfo* info) */
/* private: java::lang::reflect::MethodArray* java::beans::Introspector::getPublicDeclaredMethods(::java::lang::Class* clz) */
/* private: java::beans::BeanDescriptor* java::beans::Introspector::getTargetBeanDescriptor() */
/* private: int32_t java::beans::Introspector::getTargetDefaultEventIndex() */
/* private: int32_t java::beans::Introspector::getTargetDefaultPropertyIndex() */
/* private: java::beans::EventSetDescriptorArray* java::beans::Introspector::getTargetEventInfo() */
/* private: java::beans::MethodDescriptorArray* java::beans::Introspector::getTargetMethodInfo() */
/* private: java::beans::PropertyDescriptorArray* java::beans::Introspector::getTargetPropertyInfo() */
java::lang::Object* java::beans::Introspector::instantiate(::java::lang::Class* sibling, ::java::lang::String* className)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::beans::Introspector::instantiate(::java::lang::Class* sibling, ::java::lang::String* className)");
    return 0;
}

/* private: java::lang::reflect::Method* java::beans::Introspector::internalFindMethod(::java::lang::Class* start, ::java::lang::String* methodName, int32_t argCount, ::java::lang::ClassArray* args) */
/* private: bool java::beans::Introspector::isAssignable(::java::lang::Class* current, ::java::lang::Class* candidate) */
/* private: bool java::beans::Introspector::isEventHandler(::java::lang::reflect::Method* m) */
bool java::beans::Introspector::isSubclass(::java::lang::Class* a, ::java::lang::Class* b)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::beans::Introspector::isSubclass(::java::lang::Class* a, ::java::lang::Class* b)");
    return 0;
}

/* private: java::lang::String* java::beans::Introspector::makeQualifiedMethodName(::java::lang::String* name, ::java::lang::StringArray* params) */
/* private: java::beans::PropertyDescriptor* java::beans::Introspector::mergePropertyDescriptor(IndexedPropertyDescriptor* ipd, PropertyDescriptor* pd) */
/* private: java::beans::PropertyDescriptor* java::beans::Introspector::mergePropertyDescriptor(PropertyDescriptor* pd1, PropertyDescriptor* pd2) */
/* private: java::beans::IndexedPropertyDescriptor* java::beans::Introspector::mergePropertyDescriptor(IndexedPropertyDescriptor* ipd1, IndexedPropertyDescriptor* ipd2) */
/* private: java::beans::PropertyDescriptor* java::beans::Introspector::mergePropertyWithIndexedProperty(PropertyDescriptor* pd, IndexedPropertyDescriptor* ipd) */
/* private: void java::beans::Introspector::processPropertyDescriptors() */
void java::beans::Introspector::setBeanInfoSearchPath(::java::lang::StringArray* path)
{ /* stub */
    clinit();
    unimplemented_(u"void java::beans::Introspector::setBeanInfoSearchPath(::java::lang::StringArray* path)");
}

/* private: bool java::beans::Introspector::throwsException(::java::lang::reflect::Method* method, ::java::lang::Class* exception) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::beans::Introspector::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.beans.Introspector", 23);
    return c;
}

java::lang::Class* java::beans::Introspector::getClass0()
{
    return class_();
}

