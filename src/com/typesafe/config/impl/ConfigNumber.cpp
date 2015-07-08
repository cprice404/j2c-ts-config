// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNumber.java
#include <com/typesafe/config/impl/ConfigNumber.hpp>

#include <com/typesafe/config/ConfigException_WrongType.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigDouble.hpp>
#include <com/typesafe/config/impl/ConfigInt.hpp>
#include <com/typesafe/config/impl/ConfigLong.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
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
com::typesafe::config::impl::ConfigNumber::ConfigNumber(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNumber::ConfigNumber(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText) 
    : ConfigNumber(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,originalText);
}

constexpr int64_t com::typesafe::config::impl::ConfigNumber::serialVersionUID;

void com::typesafe::config::impl::ConfigNumber::ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText)
{
    super::ctor(origin);
    this->originalText = originalText;
}

java::lang::String* com::typesafe::config::impl::ConfigNumber::transformToString()
{
    return originalText;
}

int32_t com::typesafe::config::impl::ConfigNumber::intValueRangeChecked(::java::lang::String* path)
{
    auto l = longValue();
    if(l < ::java::lang::Integer::MIN_VALUE || l > ::java::lang::Integer::MAX_VALUE) {
        throw new ::com::typesafe::config::ConfigException_WrongType(origin(), path, u"32-bit integer"_j, ::java::lang::StringBuilder().append(u"out-of-range value "_j)->append(l)->toString());
    }
    return static_cast< int32_t >(l);
}

bool com::typesafe::config::impl::ConfigNumber::isWhole()
{
    auto asLong = longValue();
    return asLong == doubleValue();
}

bool com::typesafe::config::impl::ConfigNumber::canEqual(::java::lang::Object* other)
{
    return dynamic_cast< ConfigNumber* >(other) != nullptr;
}

bool com::typesafe::config::impl::ConfigNumber::equals(::java::lang::Object* other)
{
    if(dynamic_cast< ConfigNumber* >(other) != nullptr && canEqual(other)) {
        auto n = java_cast< ConfigNumber* >(other);
        if(isWhole()) {
            return npc(n)->isWhole() && this->longValue() == npc(n)->longValue();
        } else {
            return (!npc(n)->isWhole()) && this->doubleValue() == npc(n)->doubleValue();
        }
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::ConfigNumber::hashCode()
{
    int64_t asLong;
    if(isWhole()) {
        asLong = longValue();
    } else {
        asLong = ::java::lang::Double::doubleToLongBits(doubleValue());
    }
    return static_cast< int32_t >((asLong ^ (static_cast<int64_t>(static_cast<uint64_t>(asLong) >> int32_t(32)))));
}

com::typesafe::config::impl::ConfigNumber* com::typesafe::config::impl::ConfigNumber::newNumber(::com::typesafe::config::ConfigOrigin* origin, int64_t number, ::java::lang::String* originalText)
{
    clinit();
    if(number <= ::java::lang::Integer::MAX_VALUE && number >= ::java::lang::Integer::MIN_VALUE)
        return new ConfigInt(origin, static_cast< int32_t >(number), originalText);
    else
        return new ConfigLong(origin, number, originalText);
}

com::typesafe::config::impl::ConfigNumber* com::typesafe::config::impl::ConfigNumber::newNumber(::com::typesafe::config::ConfigOrigin* origin, double number, ::java::lang::String* originalText)
{
    clinit();
    auto asLong = static_cast< int64_t >(number);
    if(asLong == number) {
        return newNumber(origin, asLong, originalText);
    } else {
        return new ConfigDouble(origin, number, originalText);
    }
}

java::lang::Object* com::typesafe::config::impl::ConfigNumber::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNumber::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNumber", 37);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNumber::getClass0()
{
    return class_();
}

