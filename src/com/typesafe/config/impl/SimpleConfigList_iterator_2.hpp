// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <com/typesafe/config/ConfigValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigList_iterator_2
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;
    bool hasNext() override;
    ::com::typesafe::config::ConfigValue* next() override;
    void remove() override;

    // Generated
    SimpleConfigList_iterator_2(SimpleConfigList *SimpleConfigList_this, ::java::util::Iterator* i);
    static ::java::lang::Class *class_();
    SimpleConfigList *SimpleConfigList_this;
    ::java::util::Iterator* i;

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigList;
    friend class SimpleConfigList_ResolveModifier;
    friend class SimpleConfigList_relativized_1;
    friend class SimpleConfigList_wrapListIterator_3;
};
