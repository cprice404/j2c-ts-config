// Generated from /config/src/main/java/com/typesafe/config/impl/MemoKey.java
#include <com/typesafe/config/impl/MemoKey.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>

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
com::typesafe::config::impl::MemoKey::MemoKey(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::MemoKey::MemoKey(AbstractConfigValue* value, Path* restrictToChildOrNull) 
    : MemoKey(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,restrictToChildOrNull);
}

void com::typesafe::config::impl::MemoKey::ctor(AbstractConfigValue* value, Path* restrictToChildOrNull)
{
    super::ctor();
    this->value = value;
    this->restrictToChildOrNull = restrictToChildOrNull;
}

int32_t com::typesafe::config::impl::MemoKey::hashCode()
{
    auto h = ::java::lang::System::identityHashCode(value);
    if(restrictToChildOrNull != nullptr) {
        return h + int32_t(41) * (int32_t(41) + npc(restrictToChildOrNull)->hashCode());
    } else {
        return h;
    }
}

bool com::typesafe::config::impl::MemoKey::equals(::java::lang::Object* other)
{
    if(dynamic_cast< MemoKey* >(other) != nullptr) {
        auto o = java_cast< MemoKey* >(other);
        if(npc(o)->value != this->value)
            return false;
        else if(npc(o)->restrictToChildOrNull == this->restrictToChildOrNull)
            return true;
        else if(npc(o)->restrictToChildOrNull == nullptr || this->restrictToChildOrNull == nullptr)
            return false;
        else
            return npc(npc(o)->restrictToChildOrNull)->equals(this->restrictToChildOrNull);
    } else {
        return false;
    }
}

java::lang::String* com::typesafe::config::impl::MemoKey::toString()
{
    return ::java::lang::StringBuilder().append(u"MemoKey("_j)->append(static_cast< ::java::lang::Object* >(value))
        ->append(u"@"_j)
        ->append(::java::lang::System::identityHashCode(value))
        ->append(u","_j)
        ->append(static_cast< ::java::lang::Object* >(restrictToChildOrNull))
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::MemoKey::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.MemoKey", 32);
    return c;
}

java::lang::Class* com::typesafe::config::impl::MemoKey::getClass0()
{
    return class_();
}

