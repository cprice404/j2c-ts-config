// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/beans/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ref/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/beans/FeatureDescriptor.hpp>

struct default_init_tag;

class java::beans::PropertyDescriptor
    : public FeatureDescriptor
{

public:
    typedef FeatureDescriptor super;

private:
    ::java::lang::String* baseName {  };
    bool bound {  };
    bool constrained {  };
    ::java::lang::ref::Reference* propertyEditorClassRef {  };
    ::java::lang::ref::Reference* propertyTypeRef {  };
    ::java::lang::String* readMethodName {  };
    MethodRef* readMethodRef {  };
    ::java::lang::String* writeMethodName {  };
    MethodRef* writeMethodRef {  };

protected:
    void ctor(PropertyDescriptor* old);
    void ctor(::java::lang::String* propertyName, ::java::lang::Class* beanClass);
    void ctor(PropertyDescriptor* x, PropertyDescriptor* y);
    void ctor(::java::lang::String* propertyName, ::java::lang::reflect::Method* readMethod, ::java::lang::reflect::Method* writeMethod);
    void ctor(::java::lang::String* propertyName, ::java::lang::Class* beanClass, ::java::lang::String* readMethodName, ::java::lang::String* writeMethodName);
    void ctor(::java::lang::Class* bean, ::java::lang::String* base, ::java::lang::reflect::Method* read, ::java::lang::reflect::Method* write);

public: /* package */
    void appendTo(::java::lang::StringBuilder* sb) override;
    virtual bool compareMethods(::java::lang::reflect::Method* a, ::java::lang::reflect::Method* b);

public:
    virtual PropertyEditor* createPropertyEditor(::java::lang::Object* bean);
    bool equals(::java::lang::Object* obj) override;
    /*::java::lang::Class* findPropertyType(::java::lang::reflect::Method* readMethod, ::java::lang::reflect::Method* writeMethod); (private) */

public: /* package */
    virtual ::java::lang::String* getBaseName();

public:
    virtual ::java::lang::Class* getPropertyEditorClass();
    virtual ::java::lang::Class* getPropertyType();
    /*::java::lang::Class* getPropertyType0(); (private) */
    virtual ::java::lang::reflect::Method* getReadMethod();
    virtual ::java::lang::reflect::Method* getWriteMethod();
    int32_t hashCode() override;
    /*bool isAssignable(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2); (private) */
    virtual bool isBound();
    virtual bool isConstrained();
    virtual void setBound(bool bound);

public: /* package */
    void setClass0(::java::lang::Class* clz) override;

public:
    virtual void setConstrained(bool constrained);
    virtual void setPropertyEditorClass(::java::lang::Class* propertyEditorClass);
    /*void setPropertyType(::java::lang::Class* type); (private) */
    virtual void setReadMethod(::java::lang::reflect::Method* readMethod);
    virtual void setWriteMethod(::java::lang::reflect::Method* writeMethod);

public: /* package */
    virtual void updateGenericsFor(::java::lang::Class* type);

    // Generated
    PropertyDescriptor(PropertyDescriptor* old);

public:
    PropertyDescriptor(::java::lang::String* propertyName, ::java::lang::Class* beanClass);

public: /* package */
    PropertyDescriptor(PropertyDescriptor* x, PropertyDescriptor* y);

public:
    PropertyDescriptor(::java::lang::String* propertyName, ::java::lang::reflect::Method* readMethod, ::java::lang::reflect::Method* writeMethod);
    PropertyDescriptor(::java::lang::String* propertyName, ::java::lang::Class* beanClass, ::java::lang::String* readMethodName, ::java::lang::String* writeMethodName);

public: /* package */
    PropertyDescriptor(::java::lang::Class* bean, ::java::lang::String* base, ::java::lang::reflect::Method* read, ::java::lang::reflect::Method* write);
protected:
    PropertyDescriptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static void appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::ref::Reference* reference);
    static void appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, ::java::lang::Object* value);
    static void appendTo(::java::lang::StringBuilder* sb, ::java::lang::String* name, bool value);

private:
    virtual ::java::lang::Class* getClass0();
};
