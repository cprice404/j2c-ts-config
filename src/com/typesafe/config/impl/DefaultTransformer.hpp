// Generated from /config/src/main/java/com/typesafe/config/impl/DefaultTransformer.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::DefaultTransformer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static AbstractConfigValue* transform(AbstractConfigValue* value, ::com::typesafe::config::ConfigValueType* requested);

    // Generated

public:
    DefaultTransformer();
protected:
    DefaultTransformer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DefaultTransformer_transform_1;
};
