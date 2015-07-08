// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/LinkageError.hpp>

struct default_init_tag;

class java::lang::ExceptionInInitializerError
    : public LinkageError
{

public:
    typedef LinkageError super;

private:
    Throwable* exception {  };
    static constexpr int64_t serialVersionUID { int64_t(1521711792217232256LL) };

protected:
    void ctor();
    void ctor(Throwable* thrown);
    void ctor(String* s);

public:
    Throwable* getCause() override;
    virtual Throwable* getException();

    // Generated
    ExceptionInInitializerError();
    ExceptionInInitializerError(Throwable* thrown);
    ExceptionInInitializerError(String* s);
protected:
    ExceptionInInitializerError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
