// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::net::MalformedURLException
    : public ::java::io::IOException
{

public:
    typedef ::java::io::IOException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-182787522200415866LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* msg);

    // Generated

public:
    MalformedURLException();
    MalformedURLException(::java::lang::String* msg);
protected:
    MalformedURLException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
