// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigBoolean.java
#include <com/typesafe/config/impl/ConfigBoolean.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::ConfigBoolean::ConfigBoolean(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigBoolean::ConfigBoolean(::com::typesafe::config::ConfigOrigin* origin, bool value) 
    : ConfigBoolean(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value);
}

constexpr int64_t com::typesafe::config::impl::ConfigBoolean::serialVersionUID;

void com::typesafe::config::impl::ConfigBoolean::ctor(::com::typesafe::config::ConfigOrigin* origin, bool value)
{
    super::ctor(origin);
    this->value = value;
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigBoolean::valueType()
{
    return ::com::typesafe::config::ConfigValueType::BOOLEAN;
}

java::lang::Boolean* com::typesafe::config::impl::ConfigBoolean::unwrapped()
{
    return ::java::lang::Boolean::valueOf(value);
}

java::lang::String* com::typesafe::config::impl::ConfigBoolean::transformToString()
{
    return value ? u"true"_j : u"false"_j;
}

com::typesafe::config::impl::ConfigBoolean* com::typesafe::config::impl::ConfigBoolean::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return new ConfigBoolean(origin, value);
}

java::lang::Object* com::typesafe::config::impl::ConfigBoolean::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigBoolean::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigBoolean", 38);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigBoolean::getClass0()
{
    return class_();
}

