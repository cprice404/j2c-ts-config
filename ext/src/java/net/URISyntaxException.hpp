// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::net::URISyntaxException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    int32_t index {  };
    ::java::lang::String* input {  };
    static constexpr int64_t serialVersionUID { int64_t(2137979680897488891LL) };

protected:
    void ctor(::java::lang::String* input, ::java::lang::String* reason);
    void ctor(::java::lang::String* input, ::java::lang::String* reason, int32_t index);

public:
    virtual int32_t getIndex();
    virtual ::java::lang::String* getInput();
    ::java::lang::String* getMessage() override;
    virtual ::java::lang::String* getReason();

    // Generated
    URISyntaxException(::java::lang::String* input, ::java::lang::String* reason);
    URISyntaxException(::java::lang::String* input, ::java::lang::String* reason, int32_t index);
protected:
    URISyntaxException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
