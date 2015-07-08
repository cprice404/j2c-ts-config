// Generated from /config/src/main/java/com/typesafe/config/ConfigMemorySize.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigMemorySize final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int64_t bytes {  };
protected:
    void ctor(int64_t bytes);

public:
    static ConfigMemorySize* ofBytes(int64_t bytes);
    int64_t toBytes();
    ::java::lang::String* toString() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

private:
    ConfigMemorySize(int64_t bytes);
protected:
    ConfigMemorySize(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
