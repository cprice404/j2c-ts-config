// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::io::ObjectStreamException
    : public IOException
{

public:
    typedef IOException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(7260898174833392607LL) };

protected:
    void ctor();
    void ctor(::java::lang::String* classname);

    // Generated

public: /* protected */
    ObjectStreamException();
    ObjectStreamException(::java::lang::String* classname);
protected:
    ObjectStreamException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
