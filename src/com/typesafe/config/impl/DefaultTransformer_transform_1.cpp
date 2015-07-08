// Generated from /config/src/main/java/com/typesafe/config/impl/DefaultTransformer.java
#include <com/typesafe/config/impl/DefaultTransformer_transform_1.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>

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
com::typesafe::config::impl::DefaultTransformer_transform_1::DefaultTransformer_transform_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

int32_t com::typesafe::config::impl::DefaultTransformer_transform_1::compare(::java::util::Map_Entry* a, ::java::util::Map_Entry* b)
{
    return ::java::lang::Integer::compare((npc(java_cast< ::java::lang::Integer* >(npc(a)->getKey())))->intValue(), (npc(java_cast< ::java::lang::Integer* >(npc(b)->getKey())))->intValue());
}

int32_t com::typesafe::config::impl::DefaultTransformer_transform_1::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< ::java::util::Map_Entry* >(o1), dynamic_cast< ::java::util::Map_Entry* >(o2));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::DefaultTransformer_transform_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool com::typesafe::config::impl::DefaultTransformer_transform_1::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* com::typesafe::config::impl::DefaultTransformer_transform_1::getClass0()
{
    return class_();
}

