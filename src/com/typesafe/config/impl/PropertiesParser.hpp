// Generated from /config/src/main/java/com/typesafe/config/impl/PropertiesParser.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::PropertiesParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static AbstractConfigObject* parse(::java::io::Reader* reader, ::com::typesafe::config::ConfigOrigin* origin) /* throws(IOException) */;
    static ::java::lang::String* lastElement(::java::lang::String* path);
    static ::java::lang::String* exceptLastElement(::java::lang::String* path);
    static Path* pathFromPropertyKey(::java::lang::String* key);
    static AbstractConfigObject* fromProperties(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Properties* props);
    static AbstractConfigObject* fromPathMap(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* pathExpressionMap);

private:
    static AbstractConfigObject* fromPathMap(::com::typesafe::config::ConfigOrigin* origin, ::java::util::Map* pathMap, bool convertedFromProperties);

    // Generated

public:
    PropertiesParser();
protected:
    PropertiesParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PropertiesParser_fromPathMap_1;
};
