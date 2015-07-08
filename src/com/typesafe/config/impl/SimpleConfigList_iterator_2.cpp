// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java
#include <com/typesafe/config/impl/SimpleConfigList_iterator_2.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Iterator.hpp>

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
com::typesafe::config::impl::SimpleConfigList_iterator_2::SimpleConfigList_iterator_2(SimpleConfigList *SimpleConfigList_this, ::java::util::Iterator* i)
    : super(*static_cast< ::default_init_tag* >(0))
    , SimpleConfigList_this(SimpleConfigList_this)
    , i(i)
{
    clinit();
    ctor();
}

bool com::typesafe::config::impl::SimpleConfigList_iterator_2::hasNext()
{
    return npc(i)->hasNext();
}

com::typesafe::config::ConfigValue* com::typesafe::config::impl::SimpleConfigList_iterator_2::next()
{
    return java_cast< AbstractConfigValue* >(npc(i)->next());
}

void com::typesafe::config::impl::SimpleConfigList_iterator_2::remove()
{
    throw SimpleConfigList::weAreImmutable(u"iterator().remove"_j);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_iterator_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_iterator_2::getClass0()
{
    return class_();
}

