// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/awt/fwd-config.hpp>
#include <java/beans/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
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
}  // namespace java

struct java::beans::BeanInfo
    : public virtual ::java::lang::Object
{
    static constexpr int32_t ICON_COLOR_16x16 { int32_t(1) };
    static constexpr int32_t ICON_COLOR_32x32 { int32_t(2) };
    static constexpr int32_t ICON_MONO_16x16 { int32_t(3) };
    static constexpr int32_t ICON_MONO_32x32 { int32_t(4) };

    virtual BeanInfoArray* getAdditionalBeanInfo() = 0;
    virtual BeanDescriptor* getBeanDescriptor() = 0;
    virtual int32_t getDefaultEventIndex() = 0;
    virtual int32_t getDefaultPropertyIndex() = 0;
    virtual EventSetDescriptorArray* getEventSetDescriptors() = 0;
    virtual ::java::awt::Image* getIcon(int32_t iconKind) = 0;
    virtual MethodDescriptorArray* getMethodDescriptors() = 0;
    virtual PropertyDescriptorArray* getPropertyDescriptors() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
