// Generated from /config/src/test/java/beanconfig/ValuesConfig.java

#pragma once

#include <beanconfig/fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class beanconfig::ValuesConfig
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::Object* obj {  };
    ::com::typesafe::config::Config* config {  };
    ::com::typesafe::config::ConfigObject* configObj {  };
    ::com::typesafe::config::ConfigValue* configValue {  };
    ::com::typesafe::config::ConfigList* list {  };
    ::java::util::Map* unwrappedMap {  };

public:
    virtual ::java::lang::Object* getObj();
    virtual void setObj(::java::lang::Object* obj);
    virtual ::com::typesafe::config::Config* getConfig();
    virtual void setConfig(::com::typesafe::config::Config* config);
    virtual ::com::typesafe::config::ConfigObject* getConfigObj();
    virtual void setConfigObj(::com::typesafe::config::ConfigObject* configObj);
    virtual ::com::typesafe::config::ConfigValue* getConfigValue();
    virtual void setConfigValue(::com::typesafe::config::ConfigValue* configValue);
    virtual ::com::typesafe::config::ConfigList* getList();
    virtual void setList(::com::typesafe::config::ConfigList* list);
    virtual ::java::util::Map* getUnwrappedMap();
    virtual void setUnwrappedMap(::java::util::Map* unwrappedMap);

    // Generated
    ValuesConfig();
protected:
    ValuesConfig(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
