// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Throwable_PrintStreamOrWriter.hpp>

struct default_init_tag;

class java::lang::Throwable_WrappedPrintWriter
    : public Throwable_PrintStreamOrWriter
{

public:
    typedef Throwable_PrintStreamOrWriter super;

private:
    ::java::io::PrintWriter* printWriter {  };

protected:
    void ctor(::java::io::PrintWriter* printWriter);

public: /* package */
    Object* lock() override;
    void println(Object* o) override;

    // Generated
    Throwable_WrappedPrintWriter(::java::io::PrintWriter* printWriter);
protected:
    Throwable_WrappedPrintWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
