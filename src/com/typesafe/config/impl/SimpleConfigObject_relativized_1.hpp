// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NoExceptionsModifier.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigObject_relativized_1
    : public AbstractConfigValue_NoExceptionsModifier
{

public:
    typedef AbstractConfigValue_NoExceptionsModifier super;
    AbstractConfigValue* modifyChild(::java::lang::String* key, AbstractConfigValue* v) override;

    // Generated

public: /* protected */
    SimpleConfigObject_relativized_1(SimpleConfigObject *SimpleConfigObject_this, Path* prefix);

public:
    static ::java::lang::Class *class_();
    SimpleConfigObject *SimpleConfigObject_this;
    Path* prefix;

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigObject;
    friend class SimpleConfigObject_ResolveModifier;
    friend class SimpleConfigObject_RenderComparator;
};
