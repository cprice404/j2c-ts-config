// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/annotation/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct java::lang::annotation::Annotation
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::Class* annotationType() = 0;
    /*virtual bool equals(::java::lang::Object* obj); (already declared) */
    /*virtual int32_t hashCode(); (already declared) */
    /*virtual ::java::lang::String* toString(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
