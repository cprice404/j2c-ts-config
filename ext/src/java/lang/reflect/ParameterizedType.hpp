// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/reflect/Type.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
}  // namespace reflect
}  // namespace lang
}  // namespace java

struct java::lang::reflect::ParameterizedType
    : public virtual Type
{

    virtual TypeArray* getActualTypeArguments() = 0;
    virtual Type* getOwnerType() = 0;
    virtual Type* getRawType() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
