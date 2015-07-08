// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_DebugTraceInfoStack
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* stack {  };

protected:
    void ctor();

public: /* package */
    virtual void clear();
    virtual void pop();
    virtual void push(::java::lang::String* entry);

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    ObjectOutputStream_DebugTraceInfoStack();
protected:
    ObjectOutputStream_DebugTraceInfoStack(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
