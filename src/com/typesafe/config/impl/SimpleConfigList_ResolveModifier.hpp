// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_Modifier.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigList_ResolveModifier
    : public virtual ::java::lang::Object
    , public virtual AbstractConfigValue_Modifier
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ResolveContext* context {  };
    ResolveSource* source {  };
protected:
    void ctor(ResolveContext* context, ResolveSource* source);

public:
    AbstractConfigValue* modifyChildMayThrow(::java::lang::String* key, AbstractConfigValue* v) /* throws(NotPossibleToResolve) */ override;

    // Generated

public: /* package */
    SimpleConfigList_ResolveModifier(ResolveContext* context, ResolveSource* source);
protected:
    SimpleConfigList_ResolveModifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigList;
    friend class SimpleConfigList_relativized_1;
    friend class SimpleConfigList_iterator_2;
    friend class SimpleConfigList_wrapListIterator_3;
};
