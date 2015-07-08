// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/beans/FeatureDescriptor.hpp>

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
}  // namespace lang
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::beans::FeatureDescriptor::FeatureDescriptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::beans::FeatureDescriptor::FeatureDescriptor()
    : FeatureDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::beans::FeatureDescriptor::FeatureDescriptor(FeatureDescriptor* old)
    : FeatureDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor(old);
}

java::beans::FeatureDescriptor::FeatureDescriptor(FeatureDescriptor* x, FeatureDescriptor* y)
    : FeatureDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y);
}

java::lang::String*& java::beans::FeatureDescriptor::TRANSIENT()
{
    clinit();
    return TRANSIENT_;
}
java::lang::String* java::beans::FeatureDescriptor::TRANSIENT_;

void ::java::beans::FeatureDescriptor::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::beans::FeatureDescriptor::ctor()");
}

void ::java::beans::FeatureDescriptor::ctor(FeatureDescriptor* old)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::beans::FeatureDescriptor::ctor(FeatureDescriptor* old)");
}

void ::java::beans::FeatureDescriptor::ctor(FeatureDescriptor* x, FeatureDescriptor* y)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::beans::FeatureDescriptor::ctor(FeatureDescriptor* x, FeatureDescriptor* y)");
}

/* private: void java::beans::FeatureDescriptor::addTable(::java::util::Hashtable* table) */
void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb)
{ /* stub */
    unimplemented_(u"void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb)");
}

void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::ref::Reference* reference)
{ /* stub */
    clinit();
    unimplemented_(u"void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::ref::Reference* reference)");
}

void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::Object* value)
{ /* stub */
    clinit();
    unimplemented_(u"void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::Object* value)");
}

void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, bool value)
{ /* stub */
    clinit();
    unimplemented_(u"void java::beans::FeatureDescriptor::appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, bool value)");
}

java::util::Enumeration* java::beans::FeatureDescriptor::attributeNames()
{ /* stub */
    unimplemented_(u"java::util::Enumeration* java::beans::FeatureDescriptor::attributeNames()");
    return 0;
}

java::lang::Class* java::beans::FeatureDescriptor::getClass0_()
{ /* stub */
    unimplemented_(u"java::lang::Class* java::beans::FeatureDescriptor::getClass0_()");
    return 0;
}

java::lang::String* java::beans::FeatureDescriptor::getDisplayName()
{ /* stub */
return displayName ; /* getter */
}

java::lang::String* java::beans::FeatureDescriptor::getName()
{ /* stub */
return name ; /* getter */
}

java::lang::ClassArray* java::beans::FeatureDescriptor::getParameterTypes(::java::lang::Class* base, ::java::lang::reflect::Method* method)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ClassArray* java::beans::FeatureDescriptor::getParameterTypes(::java::lang::Class* base, ::java::lang::reflect::Method* method)");
    return 0;
}

java::lang::Class* java::beans::FeatureDescriptor::getReturnType(::java::lang::Class* base, ::java::lang::reflect::Method* method)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Class* java::beans::FeatureDescriptor::getReturnType(::java::lang::Class* base, ::java::lang::reflect::Method* method)");
    return 0;
}

java::lang::String* java::beans::FeatureDescriptor::getShortDescription()
{ /* stub */
return shortDescription ; /* getter */
}

java::lang::ref::Reference* java::beans::FeatureDescriptor::getSoftReference(::java::lang::Object* object)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ref::Reference* java::beans::FeatureDescriptor::getSoftReference(::java::lang::Object* object)");
    return 0;
}

/* private: java::util::Hashtable* java::beans::FeatureDescriptor::getTable() */
java::lang::Object* java::beans::FeatureDescriptor::getValue(::java::lang::String* attributeName)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::beans::FeatureDescriptor::getValue(::java::lang::String* attributeName)");
    return 0;
}

java::lang::ref::Reference* java::beans::FeatureDescriptor::getWeakReference(::java::lang::Object* object)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::ref::Reference* java::beans::FeatureDescriptor::getWeakReference(::java::lang::Object* object)");
    return 0;
}

bool java::beans::FeatureDescriptor::isExpert()
{ /* stub */
    unimplemented_(u"bool java::beans::FeatureDescriptor::isExpert()");
    return 0;
}

bool java::beans::FeatureDescriptor::isHidden()
{ /* stub */
    unimplemented_(u"bool java::beans::FeatureDescriptor::isHidden()");
    return 0;
}

bool java::beans::FeatureDescriptor::isPreferred()
{ /* stub */
    unimplemented_(u"bool java::beans::FeatureDescriptor::isPreferred()");
    return 0;
}

bool java::beans::FeatureDescriptor::isTransient()
{ /* stub */
    unimplemented_(u"bool java::beans::FeatureDescriptor::isTransient()");
    return 0;
}

void java::beans::FeatureDescriptor::setClass0(::java::lang::Class* cls)
{ /* stub */
    unimplemented_(u"void java::beans::FeatureDescriptor::setClass0(::java::lang::Class* cls)");
}

void java::beans::FeatureDescriptor::setDisplayName(::java::lang::String* displayName)
{ /* stub */
    this->displayName = displayName; /* setter */
}

void java::beans::FeatureDescriptor::setExpert(bool expert)
{ /* stub */
    this->expert = expert; /* setter */
}

void java::beans::FeatureDescriptor::setHidden(bool hidden)
{ /* stub */
    this->hidden = hidden; /* setter */
}

void java::beans::FeatureDescriptor::setName(::java::lang::String* name)
{ /* stub */
    this->name = name; /* setter */
}

void java::beans::FeatureDescriptor::setPreferred(bool preferred)
{ /* stub */
    this->preferred = preferred; /* setter */
}

void java::beans::FeatureDescriptor::setShortDescription(::java::lang::String* text)
{ /* stub */
    this->shortDescription = text; /* setter */
}

void java::beans::FeatureDescriptor::setTransient(Transient* annotation)
{ /* stub */
    unimplemented_(u"void java::beans::FeatureDescriptor::setTransient(Transient* annotation)");
}

void java::beans::FeatureDescriptor::setValue(::java::lang::String* attributeName, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"void java::beans::FeatureDescriptor::setValue(::java::lang::String* attributeName, ::java::lang::Object* value)");
}

java::lang::String* java::beans::FeatureDescriptor::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::beans::FeatureDescriptor::toString()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::beans::FeatureDescriptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.beans.FeatureDescriptor", 28);
    return c;
}

java::lang::Class* java::beans::FeatureDescriptor::getClass0()
{
    return class_();
}

