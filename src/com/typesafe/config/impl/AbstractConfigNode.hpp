// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigNode.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/parser/ConfigNode.hpp>

struct default_init_tag;

class com::typesafe::config::impl::AbstractConfigNode
    : public virtual ::java::lang::Object
    , public virtual ::com::typesafe::config::parser::ConfigNode
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    virtual ::java::util::Collection* tokens() = 0;

public:
    ::java::lang::String* render() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated
    AbstractConfigNode();
protected:
    AbstractConfigNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
