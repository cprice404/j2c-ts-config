// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::lang::reflect::Member
    : public virtual ::java::lang::Object
{
    static constexpr int32_t DECLARED { int32_t(1) };
    static constexpr int32_t PUBLIC { int32_t(0) };

    virtual ::java::lang::Class* getDeclaringClass() = 0;
    virtual int32_t getModifiers() = 0;
    virtual ::java::lang::String* getName() = 0;
    virtual bool isSynthetic() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
