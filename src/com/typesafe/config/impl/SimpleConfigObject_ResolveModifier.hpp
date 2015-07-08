// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_Modifier.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigObject_ResolveModifier final
    : public virtual ::java::lang::Object
    , public AbstractConfigValue_Modifier
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Path* originalRestrict {  };
    ResolveContext* context {  };
    ResolveSource* source {  };
protected:
    void ctor(ResolveContext* context, ResolveSource* source);

public:
    AbstractConfigValue* modifyChildMayThrow(::java::lang::String* key, AbstractConfigValue* v) /* throws(NotPossibleToResolve) */ override;

    // Generated

public: /* package */
    SimpleConfigObject_ResolveModifier(ResolveContext* context, ResolveSource* source);
protected:
    SimpleConfigObject_ResolveModifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigObject;
    friend class SimpleConfigObject_relativized_1;
    friend class SimpleConfigObject_RenderComparator;
};
