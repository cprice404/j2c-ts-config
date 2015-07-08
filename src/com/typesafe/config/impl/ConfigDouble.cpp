// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigDouble.java
#include <com/typesafe/config/impl/ConfigDouble.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::ConfigDouble::ConfigDouble(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigDouble::ConfigDouble(::com::typesafe::config::ConfigOrigin* origin, double value, ::java::lang::String* originalText) 
    : ConfigDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value,originalText);
}

constexpr int64_t com::typesafe::config::impl::ConfigDouble::serialVersionUID;

void com::typesafe::config::impl::ConfigDouble::ctor(::com::typesafe::config::ConfigOrigin* origin, double value, ::java::lang::String* originalText)
{
    super::ctor(origin, originalText);
    this->value = value;
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigDouble::valueType()
{
    return ::com::typesafe::config::ConfigValueType::NUMBER;
}

java::lang::Double* com::typesafe::config::impl::ConfigDouble::unwrapped()
{
    return ::java::lang::Double::valueOf(value);
}

java::lang::String* com::typesafe::config::impl::ConfigDouble::transformToString()
{
    auto s = super::transformToString();
    if(s == nullptr)
        return ::java::lang::Double::toString(value);
    else
        return s;
}

int64_t com::typesafe::config::impl::ConfigDouble::longValue()
{
    return static_cast< int64_t >(value);
}

double com::typesafe::config::impl::ConfigDouble::doubleValue()
{
    return value;
}

com::typesafe::config::impl::ConfigDouble* com::typesafe::config::impl::ConfigDouble::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return new ConfigDouble(origin, value, originalText);
}

java::lang::Object* com::typesafe::config::impl::ConfigDouble::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigDouble::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigDouble", 37);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigDouble::getClass0()
{
    return class_();
}

