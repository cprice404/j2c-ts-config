// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue_NoExceptionsModifier.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigList_relativized_1
    : public AbstractConfigValue_NoExceptionsModifier
{

public:
    typedef AbstractConfigValue_NoExceptionsModifier super;
    AbstractConfigValue* modifyChild(::java::lang::String* key, AbstractConfigValue* v) override;

    // Generated

public: /* protected */
    SimpleConfigList_relativized_1(SimpleConfigList *SimpleConfigList_this, Path* prefix);

public:
    static ::java::lang::Class *class_();
    SimpleConfigList *SimpleConfigList_this;
    Path* prefix;

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigList;
    friend class SimpleConfigList_ResolveModifier;
    friend class SimpleConfigList_iterator_2;
    friend class SimpleConfigList_wrapListIterator_3;
};
