// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigBeanImpl.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigBeanImpl
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static /* <T> */::java::lang::Object* createInternal(::com::typesafe::config::Config* config, ::java::lang::Class* clazz);

private:
    static ::java::lang::Object* getValue(::java::lang::Class* beanClass, ::java::lang::reflect::Type* parameterType, ::java::lang::Class* parameterClass, ::com::typesafe::config::Config* config, ::java::lang::String* configPropName);
    static ::java::lang::Object* getListValue(::java::lang::Class* beanClass, ::java::lang::reflect::Type* parameterType, ::java::lang::Class* parameterClass, ::com::typesafe::config::Config* config, ::java::lang::String* configPropName);
    static ::com::typesafe::config::ConfigValueType* getValueTypeOrNull(::java::lang::Class* parameterClass);
    static bool hasAtLeastOneBeanProperty(::java::lang::Class* clazz);

    // Generated

public:
    ConfigBeanImpl();
protected:
    ConfigBeanImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
