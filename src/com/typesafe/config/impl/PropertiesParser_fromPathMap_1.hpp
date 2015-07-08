// Generated from /config/src/main/java/com/typesafe/config/impl/PropertiesParser.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class com::typesafe::config::impl::PropertiesParser_fromPathMap_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Comparator
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t compare(Path* a, Path* b);

    // Generated
    PropertiesParser_fromPathMap_1();
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class PropertiesParser;
};
