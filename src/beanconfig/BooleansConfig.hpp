// Generated from /config/src/test/java/beanconfig/BooleansConfig.java

#pragma once

#include <fwd-config.hpp>
#include <beanconfig/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::BooleansConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::Boolean* trueVal {  };
    ::java::lang::Boolean* trueValAgain {  };
    ::java::lang::Boolean* falseVal {  };
    ::java::lang::Boolean* falseValAgain {  };
    ::java::lang::Boolean* on {  };
    bool off {  };

public:
    virtual ::java::lang::Boolean* getTrueVal();
    virtual void setTrueVal(::java::lang::Boolean* trueVal);
    virtual ::java::lang::Boolean* getTrueValAgain();
    virtual void setTrueValAgain(::java::lang::Boolean* trueValAgain);
    virtual ::java::lang::Boolean* getFalseVal();
    virtual void setFalseVal(::java::lang::Boolean* falseVal);
    virtual ::java::lang::Boolean* getFalseValAgain();
    virtual void setFalseValAgain(::java::lang::Boolean* falseValAgain);
    virtual ::java::lang::Boolean* getOn();
    virtual void setOn(::java::lang::Boolean* on);
    virtual bool getOff();
    virtual void setOff(bool off);

    // Generated
    BooleansConfig();
protected:
    BooleansConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
