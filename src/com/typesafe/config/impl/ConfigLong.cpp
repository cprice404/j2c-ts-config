// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigLong.java
#include <com/typesafe/config/impl/ConfigLong.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::ConfigLong::ConfigLong(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigLong::ConfigLong(::com::typesafe::config::ConfigOrigin* origin, int64_t value, ::java::lang::String* originalText) 
    : ConfigLong(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value,originalText);
}

constexpr int64_t com::typesafe::config::impl::ConfigLong::serialVersionUID;

void com::typesafe::config::impl::ConfigLong::ctor(::com::typesafe::config::ConfigOrigin* origin, int64_t value, ::java::lang::String* originalText)
{
    super::ctor(origin, originalText);
    this->value = value;
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigLong::valueType()
{
    return ::com::typesafe::config::ConfigValueType::NUMBER;
}

java::lang::Long* com::typesafe::config::impl::ConfigLong::unwrapped()
{
    return ::java::lang::Long::valueOf(value);
}

java::lang::String* com::typesafe::config::impl::ConfigLong::transformToString()
{
    auto s = super::transformToString();
    if(s == nullptr)
        return ::java::lang::Long::toString(value);
    else
        return s;
}

int64_t com::typesafe::config::impl::ConfigLong::longValue()
{
    return value;
}

double com::typesafe::config::impl::ConfigLong::doubleValue()
{
    return value;
}

com::typesafe::config::impl::ConfigLong* com::typesafe::config::impl::ConfigLong::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return new ConfigLong(origin, value, originalText);
}

java::lang::Object* com::typesafe::config::impl::ConfigLong::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigLong::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigLong", 35);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigLong::getClass0()
{
    return class_();
}

