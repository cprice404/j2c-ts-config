// Generated from /config/src/test/java/beanconfig/UnsupportedListElementConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::UnsupportedListElementConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* uri {  };

public:
    virtual ::java::util::List* getUri();
    virtual void setUri(::java::util::List* uri);

    // Generated
    UnsupportedListElementConfig();
protected:
    UnsupportedListElementConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
