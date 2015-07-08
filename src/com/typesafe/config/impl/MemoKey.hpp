// Generated from /config/src/main/java/com/typesafe/config/impl/MemoKey.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::MemoKey final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor(AbstractConfigValue* value, Path* restrictToChildOrNull);

private:
    AbstractConfigValue* value {  };
    Path* restrictToChildOrNull {  };

public:
    int32_t hashCode() override;
    bool equals(::java::lang::Object* other) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    MemoKey(AbstractConfigValue* value, Path* restrictToChildOrNull);
protected:
    MemoKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
