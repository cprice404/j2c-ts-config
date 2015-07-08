// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/ObjectStreamException.hpp>

struct default_init_tag;

class java::io::NotSerializableException
    : public ObjectStreamException
{

public:
    typedef ObjectStreamException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2906642554793891381LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* classname);

    // Generated

public:
    NotSerializableException();
    NotSerializableException(::java::lang::String* classname);
protected:
    NotSerializableException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
