// Generated from /config/src/test/java/beanconfig/NumbersConfig.java

#pragma once

#include <fwd-config.hpp>
#include <beanconfig/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::NumbersConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t intVal {  };
    ::java::lang::Integer* intObj {  };
    int64_t longVal {  };
    ::java::lang::Long* longObj {  };
    double doubleVal {  };
    ::java::lang::Double* doubleObj {  };

public:
    virtual int32_t getIntVal();
    virtual void setIntVal(int32_t intVal);
    virtual ::java::lang::Integer* getIntObj();
    virtual void setIntObj(::java::lang::Integer* intObj);
    virtual int64_t getLongVal();
    virtual void setLongVal(int64_t longVal);
    virtual ::java::lang::Long* getLongObj();
    virtual void setLongObj(::java::lang::Long* longObj);
    virtual double getDoubleVal();
    virtual void setDoubleVal(double doubleVal);
    virtual ::java::lang::Double* getDoubleObj();
    virtual void setDoubleObj(::java::lang::Double* doubleObj);

    // Generated
    NumbersConfig();
protected:
    NumbersConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
