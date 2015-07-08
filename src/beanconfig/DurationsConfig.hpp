// Generated from /config/src/test/java/beanconfig/DurationsConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/time/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::DurationsConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::time::Duration* second {  };
    ::java::time::Duration* secondAsNumber {  };
    ::java::time::Duration* halfSecond {  };

public:
    virtual ::java::time::Duration* getSecond();
    virtual void setSecond(::java::time::Duration* second);
    virtual ::java::time::Duration* getSecondAsNumber();
    virtual void setSecondAsNumber(::java::time::Duration* secondAsNumber);
    virtual ::java::time::Duration* getHalfSecond();
    virtual void setHalfSecond(::java::time::Duration* halfSecond);

    // Generated
    DurationsConfig();
protected:
    DurationsConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
