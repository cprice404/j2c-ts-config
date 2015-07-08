// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/annotation/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <sun/reflect/fwd-config.hpp>
#include <sun/reflect/generics/factory/fwd-config.hpp>
#include <sun/reflect/generics/repository/fwd-config.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/Member.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace annotation {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
}  // namespace annotation
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::reflect::Field final
    : public AccessibleObject
    , public Member
{

public:
    typedef AccessibleObject super;

private:
    ::int8_tArray* annotations {  };
    ::java::lang::Class* clazz {  };
    ::java::util::Map* declaredAnnotations_ {  };
    ::sun::reflect::FieldAccessor* fieldAccessor {  };
    ::sun::reflect::generics::repository::FieldRepository* genericInfo {  };
    int32_t modifiers {  };
    ::java::lang::String* name {  };
    ::sun::reflect::FieldAccessor* overrideFieldAccessor {  };
    Field* root {  };
    ::java::lang::String* signature {  };
    int32_t slot {  };
    ::java::lang::Class* type {  };

protected:
    void ctor(::java::lang::Class* declaringClass, ::java::lang::String* name, ::java::lang::Class* type, int32_t modifiers, int32_t slot, ::java::lang::String* signature, ::int8_tArray* annotations);
    /*::sun::reflect::FieldAccessor* acquireFieldAccessor(bool overrideFinalCheck); (private) */

public: /* package */
    Field* copy();
    /*::java::util::Map* declaredAnnotations(); (private) */

public:
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::Object* get(::java::lang::Object* obj);
    AnnotatedType* getAnnotatedType();
    ::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* annotationClass) override;
    ::java::lang::annotation::AnnotationArray* getAnnotationsByType(::java::lang::Class* annotationClass) override;
    bool getBoolean(::java::lang::Object* obj);
    int8_t getByte(::java::lang::Object* obj);
    char16_t getChar(::java::lang::Object* obj);
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;
    ::java::lang::Class* getDeclaringClass() override;
    double getDouble(::java::lang::Object* obj);
    /*::sun::reflect::generics::factory::GenericsFactory* getFactory(); (private) */
    /*::sun::reflect::FieldAccessor* getFieldAccessor(::java::lang::Object* obj); (private) */
    /*::sun::reflect::FieldAccessor* getFieldAccessor(bool overrideFinalCheck); (private) */
    float getFloat(::java::lang::Object* obj);
    /*::sun::reflect::generics::repository::FieldRepository* getGenericInfo(); (private) */
    /*::java::lang::String* getGenericSignature(); (private) */
    Type* getGenericType();
    int32_t getInt(::java::lang::Object* obj);
    int64_t getLong(::java::lang::Object* obj);
    int32_t getModifiers() override;
    ::java::lang::String* getName() override;
    int16_t getShort(::java::lang::Object* obj);
    ::java::lang::Class* getType();
    /*::int8_tArray* getTypeAnnotationBytes0(); (private) */
    int32_t hashCode() override;
    bool isEnumConstant();
    bool isSynthetic() override;
    void set(::java::lang::Object* obj, ::java::lang::Object* value);
    void setBoolean(::java::lang::Object* obj, bool z);
    void setByte(::java::lang::Object* obj, int8_t b);
    void setChar(::java::lang::Object* obj, char16_t c);
    void setDouble(::java::lang::Object* obj, double d);
    /*void setFieldAccessor(::sun::reflect::FieldAccessor* accessor, bool overrideFinalCheck); (private) */
    void setFloat(::java::lang::Object* obj, float f);
    void setInt(::java::lang::Object* obj, int32_t i);
    void setLong(::java::lang::Object* obj, int64_t l);
    void setShort(::java::lang::Object* obj, int16_t s);
    ::java::lang::String* toGenericString();
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    Field(::java::lang::Class* declaringClass, ::java::lang::String* name, ::java::lang::Class* type, int32_t modifiers, int32_t slot, ::java::lang::String* signature, ::int8_tArray* annotations);
protected:
    Field(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
