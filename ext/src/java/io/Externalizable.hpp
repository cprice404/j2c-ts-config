// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-config.hpp>
#include <java/io/Serializable.hpp>

struct java::io::Externalizable
    : public virtual Serializable
{

    virtual void readExternal(ObjectInput* in) = 0;
    virtual void writeExternal(ObjectOutput* out) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
