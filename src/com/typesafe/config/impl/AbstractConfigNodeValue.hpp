// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigNodeValue.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>

struct default_init_tag;

class com::typesafe::config::impl::AbstractConfigNodeValue
    : public AbstractConfigNode
{

public:
    typedef AbstractConfigNode super;

    // Generated
    AbstractConfigNodeValue();
protected:
    AbstractConfigNodeValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
