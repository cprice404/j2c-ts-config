// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveMemos.java
#include <com/typesafe/config/impl/ResolveMemos.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/MemoKey.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>

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
com::typesafe::config::impl::ResolveMemos::ResolveMemos(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveMemos::ResolveMemos(::java::util::Map* memos) 
    : ResolveMemos(*static_cast< ::default_init_tag* >(0))
{
    ctor(memos);
}

com::typesafe::config::impl::ResolveMemos::ResolveMemos() 
    : ResolveMemos(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::impl::ResolveMemos::ctor(::java::util::Map* memos)
{
    super::ctor();
    this->memos = memos;
}

void com::typesafe::config::impl::ResolveMemos::ctor()
{
    ctor(new ::java::util::HashMap());
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::ResolveMemos::get(MemoKey* key)
{
    return java_cast< AbstractConfigValue* >(npc(memos)->get(key));
}

com::typesafe::config::impl::ResolveMemos* com::typesafe::config::impl::ResolveMemos::put(MemoKey* key, AbstractConfigValue* value)
{
    ::java::util::Map* copy = new ::java::util::HashMap(static_cast< ::java::util::Map* >(memos));
    npc(copy)->put(key, value);
    return new ResolveMemos(copy);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveMemos::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveMemos", 37);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveMemos::getClass0()
{
    return class_();
}

