// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java
#include <com/typesafe/config/impl/SimpleConfigObject_relativized_1.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleConfigObject_relativized_1::SimpleConfigObject_relativized_1(SimpleConfigObject *SimpleConfigObject_this, Path* prefix)
    : super(SimpleConfigObject_this, *static_cast< ::default_init_tag* >(0))
    , SimpleConfigObject_this(SimpleConfigObject_this)
    , prefix(prefix)
{
    clinit();
    ctor();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::SimpleConfigObject_relativized_1::modifyChild(::java::lang::String* key, AbstractConfigValue* v)
{
    return npc(v)->relativized(prefix);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject_relativized_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject_relativized_1::getClass0()
{
    return class_();
}

