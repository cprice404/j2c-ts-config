// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java
#include <com/typesafe/config/impl/SimpleConfigList_relativized_1.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigList.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleConfigList_relativized_1::SimpleConfigList_relativized_1(SimpleConfigList *SimpleConfigList_this, Path* prefix)
    : super(SimpleConfigList_this, *static_cast< ::default_init_tag* >(0))
    , SimpleConfigList_this(SimpleConfigList_this)
    , prefix(prefix)
{
    clinit();
    ctor();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigList_relativized_1::modifyChild(::java::lang::String* key, AbstractConfigValue* v)
{
    return npc(v)->relativized(prefix);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_relativized_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigList_relativized_1::getClass0()
{
    return class_();
}

