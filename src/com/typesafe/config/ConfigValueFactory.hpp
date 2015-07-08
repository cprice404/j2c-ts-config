// Generated from /config/src/main/java/com/typesafe/config/ConfigValueFactory.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::ConfigValueFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ConfigValue* fromAnyRef(::java::lang::Object* object, ::java::lang::String* originDescription);
    static ConfigObject* fromMap(::java::util::Map* values, ::java::lang::String* originDescription);
    static ConfigList* fromIterable(::java::lang::Iterable* values, ::java::lang::String* originDescription);
    static ConfigValue* fromAnyRef(::java::lang::Object* object);
    static ConfigObject* fromMap(::java::util::Map* values);
    static ConfigList* fromIterable(::java::lang::Iterable* values);

    // Generated

private:
    ConfigValueFactory();
protected:
    ConfigValueFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
