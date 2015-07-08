// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java
#include <com/typesafe/config/impl/SimpleConfigList_wrapListIterator_3.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ListIterator.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::SimpleConfigList_wrapListIterator_3(::java::util::ListIterator* i)
    : super(*static_cast< ::default_init_tag* >(0))
    , i(i)
{
    clinit();
    ctor();
}

bool com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::hasNext()
{
    return npc(i)->hasNext();
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::next()
{
    return java_cast< AbstractConfigValue* >(npc(i)->next());
}

void com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::remove()
{
    throw SimpleConfigList::weAreImmutable(u"listIterator().remove"_j);
}

void com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::add(::com::typesafe::config::ConfigValue* arg0)
{
    throw SimpleConfigList::weAreImmutable(u"listIterator().add"_j);
}

void com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::add(::java::lang::Object* e)
{ 
    add(dynamic_cast< ::com::typesafe::config::ConfigValue* >(e));
}

bool com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::hasPrevious()
{
    return npc(i)->hasPrevious();
}

int32_t com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::nextIndex()
{
    return npc(i)->nextIndex();
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::previous()
{
    return java_cast< AbstractConfigValue* >(npc(i)->previous());
}

int32_t com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::previousIndex()
{
    return npc(i)->previousIndex();
}

void com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::set(::com::typesafe::config::ConfigValue* arg0)
{
    throw SimpleConfigList::weAreImmutable(u"listIterator().set"_j);
}

void com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::set(::java::lang::Object* e)
{ 
    set(dynamic_cast< ::com::typesafe::config::ConfigValue* >(e));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_wrapListIterator_3::getClass0()
{
    return class_();
}

