// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ListIterator.hpp>
#include <com/typesafe/config/ConfigValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3
    : public virtual ::java::lang::Object
    , public virtual ::java::util::ListIterator
{

public:
    typedef ::java::lang::Object super;
    bool hasNext() override;
    ::com::typesafe::config::ConfigValue* next() override;
    void remove() override;
    virtual void add(::com::typesafe::config::ConfigValue* arg0);
    bool hasPrevious() override;
    int32_t nextIndex() override;
    ::com::typesafe::config::ConfigValue* previous() override;
    int32_t previousIndex() override;
    virtual void set(::com::typesafe::config::ConfigValue* arg0);

    // Generated
    SimpleConfigList_wrapListIterator_3(::java::util::ListIterator* i);
    static ::java::lang::Class *class_();
    virtual void add(::java::lang::Object* e) override;
    virtual void set(::java::lang::Object* e) override;
    ::java::util::ListIterator* i;

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigList;
    friend class SimpleConfigList_ResolveModifier;
    friend class SimpleConfigList_relativized_1;
    friend class SimpleConfigList_iterator_2;
};
