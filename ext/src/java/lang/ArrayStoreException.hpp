// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::ArrayStoreException
    : public RuntimeException
{

public:
    typedef RuntimeException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-4522193890499838241LL) };

protected:
    void ctor();
    void ctor(String* s);

    // Generated

public:
    ArrayStoreException();
    ArrayStoreException(String* s);
protected:
    ArrayStoreException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
