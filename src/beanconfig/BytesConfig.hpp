// Generated from /config/src/test/java/beanconfig/BytesConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::BytesConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::com::typesafe::config::ConfigMemorySize* kilobyte {  };
    ::com::typesafe::config::ConfigMemorySize* kibibyte {  };
    ::com::typesafe::config::ConfigMemorySize* thousandBytes {  };

public:
    virtual ::com::typesafe::config::ConfigMemorySize* getKilobyte();
    virtual void setKilobyte(::com::typesafe::config::ConfigMemorySize* kilobyte);
    virtual ::com::typesafe::config::ConfigMemorySize* getKibibyte();
    virtual void setKibibyte(::com::typesafe::config::ConfigMemorySize* kibibyte);
    virtual ::com::typesafe::config::ConfigMemorySize* getThousandBytes();
    virtual void setThousandBytes(::com::typesafe::config::ConfigMemorySize* thousandBytes);

    // Generated
    BytesConfig();
protected:
    BytesConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
