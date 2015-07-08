// Generated from /config/src/test/java/beanconfig/ArraysConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::ArraysConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::util::List* empty {  };
    ::java::util::List* ofInt {  };
    ::java::util::List* ofString {  };
    ::java::util::List* ofDouble {  };
    ::java::util::List* ofLong {  };
    ::java::util::List* ofNull {  };
    ::java::util::List* ofBoolean {  };
    ::java::util::List* ofObject {  };
    ::java::util::List* ofConfig {  };
    ::java::util::List* ofConfigObject {  };
    ::java::util::List* ofConfigValue {  };
    ::java::util::List* ofDuration {  };
    ::java::util::List* ofMemorySize {  };
    ::java::util::List* ofStringBean {  };

public:
    virtual ::java::util::List* getEmpty();
    virtual void setEmpty(::java::util::List* empty);
    virtual ::java::util::List* getOfInt();
    virtual void setOfInt(::java::util::List* ofInt);
    virtual ::java::util::List* getOfString();
    virtual void setOfString(::java::util::List* ofString);
    virtual ::java::util::List* getOfDouble();
    virtual void setOfDouble(::java::util::List* ofDouble);
    virtual ::java::util::List* getOfNull();
    virtual void setOfNull(::java::util::List* ofNull);
    virtual ::java::util::List* getOfBoolean();
    virtual void setOfBoolean(::java::util::List* ofBoolean);
    virtual ::java::util::List* getOfObject();
    virtual void setOfObject(::java::util::List* ofObject);
    virtual ::java::util::List* getOfLong();
    virtual void setOfLong(::java::util::List* ofLong);
    virtual ::java::util::List* getOfConfig();
    virtual void setOfConfig(::java::util::List* ofConfig);
    virtual ::java::util::List* getOfConfigObject();
    virtual void setOfConfigObject(::java::util::List* ofConfigObject);
    virtual ::java::util::List* getOfConfigValue();
    virtual void setOfConfigValue(::java::util::List* ofConfigValue);
    virtual ::java::util::List* getOfDuration();
    virtual void setOfDuration(::java::util::List* ofDuration);
    virtual ::java::util::List* getOfMemorySize();
    virtual void setOfMemorySize(::java::util::List* ofMemorySize);
    virtual ::java::util::List* getOfStringBean();
    virtual void setOfStringBean(::java::util::List* ofStringBean);

    // Generated
    ArraysConfig();
protected:
    ArraysConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
