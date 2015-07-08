// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/beans/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
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
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::beans::FeatureDescriptor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* TRANSIENT_;
    ::java::lang::ref::Reference* classRef {  };
    ::java::lang::String* displayName {  };
    bool expert {  };
    bool hidden {  };
    ::java::lang::String* name {  };
    bool preferred {  };
    ::java::lang::String* shortDescription {  };
    ::java::util::Hashtable* table {  };

protected:
    void ctor();
    void ctor(FeatureDescriptor* old);
    void ctor(FeatureDescriptor* x, FeatureDescriptor* y);
    /*void addTable(::java::util::Hashtable* table); (private) */

public: /* package */
    virtual void appendTo(::java::lang::StringBuilder* sb);
    static void appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::ref::Reference* reference);
    static void appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::Object* value);
    static void appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, bool value);

public:
    virtual ::java::util::Enumeration* attributeNames();

public: /* package */
    virtual ::java::lang::Class* getClass0_();

public:
    virtual ::java::lang::String* getDisplayName();
    virtual ::java::lang::String* getName();

public: /* package */
    static ::java::lang::ClassArray* getParameterTypes(::java::lang::Class* base, ::java::lang::reflect::Method* method);
    static ::java::lang::Class* getReturnType(::java::lang::Class* base, ::java::lang::reflect::Method* method);

public:
    virtual ::java::lang::String* getShortDescription();

public: /* package */
    static ::java::lang::ref::Reference* getSoftReference(::java::lang::Object* object);
    /*::java::util::Hashtable* getTable(); (private) */

public:
    virtual ::java::lang::Object* getValue(::java::lang::String* attributeName);

public: /* package */
    static ::java::lang::ref::Reference* getWeakReference(::java::lang::Object* object);

public:
    virtual bool isExpert();
    virtual bool isHidden();
    virtual bool isPreferred();

public: /* package */
    virtual bool isTransient();
    virtual void setClass0(::java::lang::Class* cls);

public:
    virtual void setDisplayName(::java::lang::String* displayName);
    virtual void setExpert(bool expert);
    virtual void setHidden(bool hidden);
    virtual void setName(::java::lang::String* name);
    virtual void setPreferred(bool preferred);
    virtual void setShortDescription(::java::lang::String* text);

public: /* package */
    virtual void setTransient(Transient* annotation);

public:
    virtual void setValue(::java::lang::String* attributeName, ::java::lang::Object* value);
    ::java::lang::String* toString() override;

    // Generated
    FeatureDescriptor();

public: /* package */
    FeatureDescriptor(FeatureDescriptor* old);
    FeatureDescriptor(FeatureDescriptor* x, FeatureDescriptor* y);
protected:
    FeatureDescriptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::lang::String*& TRANSIENT();
    virtual ::java::lang::Class* getClass0();
};
