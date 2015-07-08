// Generated from /config/src/test/java/beanconfig/StringsConfig.java

#pragma once

#include <fwd-config.hpp>
#include <beanconfig/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::StringsConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* abcd {  };
    ::java::lang::String* yes {  };

public:
    virtual ::java::lang::String* getAbcd();
    virtual void setAbcd(::java::lang::String* s);
    virtual ::java::lang::String* getYes();
    virtual void setYes(::java::lang::String* s);
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

    // Generated
    StringsConfig();
protected:
    StringsConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
