// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::UnsupportedOperationException
    : public RuntimeException
{

public:
    typedef RuntimeException super;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-1242599979055084673LL) };

protected:
    void ctor();
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor(String* message, Throwable* cause);

    // Generated

public:
    UnsupportedOperationException();
    UnsupportedOperationException(String* message);
    UnsupportedOperationException(Throwable* cause);
    UnsupportedOperationException(String* message, Throwable* cause);
protected:
    UnsupportedOperationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
