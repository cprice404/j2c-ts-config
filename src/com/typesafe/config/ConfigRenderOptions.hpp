// Generated from /config/src/main/java/com/typesafe/config/ConfigRenderOptions.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigRenderOptions final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool originComments {  };
    bool comments {  };
    bool formatted {  };
    bool json {  };
protected:
    void ctor(bool originComments, bool comments, bool formatted, bool json);

public:
    static ConfigRenderOptions* defaults();
    static ConfigRenderOptions* concise();
    ConfigRenderOptions* setComments(bool value);
    bool getComments();
    ConfigRenderOptions* setOriginComments(bool value);
    bool getOriginComments();
    ConfigRenderOptions* setFormatted(bool value);
    bool getFormatted();
    ConfigRenderOptions* setJson(bool value);
    bool getJson();
    ::java::lang::String* toString() override;

    // Generated

private:
    ConfigRenderOptions(bool originComments, bool comments, bool formatted, bool json);
protected:
    ConfigRenderOptions(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
