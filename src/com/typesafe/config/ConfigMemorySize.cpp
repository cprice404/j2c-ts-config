// Generated from /config/src/main/java/com/typesafe/config/ConfigMemorySize.java
#include <com/typesafe/config/ConfigMemorySize.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

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
com::typesafe::config::ConfigMemorySize::ConfigMemorySize(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigMemorySize::ConfigMemorySize(int64_t bytes) 
    : ConfigMemorySize(*static_cast< ::default_init_tag* >(0))
{
    ctor(bytes);
}

void com::typesafe::config::ConfigMemorySize::ctor(int64_t bytes)
{
    super::ctor();
    if(bytes < 0)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Attempt to construct ConfigMemorySize with negative number: "_j)->append(bytes)->toString());

    this->bytes = bytes;
}

com::typesafe::config::ConfigMemorySize* com::typesafe::config::ConfigMemorySize::ofBytes(int64_t bytes)
{
    clinit();
    return new ConfigMemorySize(bytes);
}

int64_t com::typesafe::config::ConfigMemorySize::toBytes()
{
    return bytes;
}

java::lang::String* com::typesafe::config::ConfigMemorySize::toString()
{
    return ::java::lang::StringBuilder().append(u"ConfigMemorySize("_j)->append(bytes)
        ->append(u")"_j)->toString();
}

bool com::typesafe::config::ConfigMemorySize::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ConfigMemorySize* >(other) != nullptr) {
        return npc((java_cast< ConfigMemorySize* >(other)))->bytes == this->bytes;
    } else {
        return false;
    }
}

int32_t com::typesafe::config::ConfigMemorySize::hashCode()
{
    return npc(::java::lang::Long::valueOf(bytes))->hashCode();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigMemorySize::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigMemorySize", 36);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigMemorySize::getClass0()
{
    return class_();
}

