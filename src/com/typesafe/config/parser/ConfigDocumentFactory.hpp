// Generated from /config/src/main/java/com/typesafe/config/parser/ConfigDocumentFactory.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/parser/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::parser::ConfigDocumentFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ConfigDocument* parseReader(::java::io::Reader* reader, ::com::typesafe::config::ConfigParseOptions* options);
    static ConfigDocument* parseReader(::java::io::Reader* reader);
    static ConfigDocument* parseFile(::java::io::File* file, ::com::typesafe::config::ConfigParseOptions* options);
    static ConfigDocument* parseFile(::java::io::File* file);
    static ConfigDocument* parseString(::java::lang::String* s, ::com::typesafe::config::ConfigParseOptions* options);
    static ConfigDocument* parseString(::java::lang::String* s);

    // Generated
    ConfigDocumentFactory();
protected:
    ConfigDocumentFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
