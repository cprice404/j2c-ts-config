// Generated from /config/src/test/java/beanconfig/UnsupportedMapKeyConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::UnsupportedMapKeyConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* map {  };

public:
    virtual ::java::util::Map* getMap();
    virtual void setMap(::java::util::Map* map);

    // Generated
    UnsupportedMapKeyConfig();
protected:
    UnsupportedMapKeyConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
