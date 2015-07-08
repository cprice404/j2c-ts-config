// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray, ::java::io::SerializableArray > StackTraceElementArray;
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::Throwable_SentinelHolder
    : public virtual Object
{

public:
    typedef Object super;

private:
    static StackTraceElement* STACK_TRACE_ELEMENT_SENTINEL_;
    static StackTraceElementArray* STACK_TRACE_SENTINEL_;

    /*void ctor(); (private) */

    // Generated

public:
    Throwable_SentinelHolder();
protected:
    Throwable_SentinelHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static StackTraceElement*& STACK_TRACE_ELEMENT_SENTINEL();
    static StackTraceElementArray*& STACK_TRACE_SENTINEL();

private:
    virtual ::java::lang::Class* getClass0();
};
