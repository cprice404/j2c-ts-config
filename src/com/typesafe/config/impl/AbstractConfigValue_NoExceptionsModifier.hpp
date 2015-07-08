// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_Modifier.hpp>

struct default_init_tag;

class com::typesafe::config::impl::AbstractConfigValue_NoExceptionsModifier
    : public virtual ::java::lang::Object
    , public virtual AbstractConfigValue_Modifier
{

public:
    typedef ::java::lang::Object super;
    AbstractConfigValue* modifyChildMayThrow(::java::lang::String* keyOrNull, AbstractConfigValue* v) /* throws(Exception) */ override;

public: /* package */
    virtual AbstractConfigValue* modifyChild(::java::lang::String* keyOrNull, AbstractConfigValue* v) = 0;

    // Generated

public:
    AbstractConfigValue_NoExceptionsModifier(AbstractConfigValue *AbstractConfigValue_this);
protected:
    AbstractConfigValue_NoExceptionsModifier(AbstractConfigValue *AbstractConfigValue_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    AbstractConfigValue *AbstractConfigValue_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class AbstractConfigValue;
    friend class AbstractConfigValue_NotPossibleToResolve;
    friend class AbstractConfigValue_Modifier;
};
