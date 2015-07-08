// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/ReflectiveOperationException.hpp>

struct default_init_tag;

class java::lang::InstantiationException
    : public ReflectiveOperationException
{

public:
    typedef ReflectiveOperationException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-8441929162975509110LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    InstantiationException();
    InstantiationException(String* s);
protected:
    InstantiationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
