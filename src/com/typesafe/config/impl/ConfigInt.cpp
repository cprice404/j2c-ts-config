// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigInt.java
#include <com/typesafe/config/impl/ConfigInt.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::ConfigInt::ConfigInt(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigInt::ConfigInt(::com::typesafe::config::ConfigOrigin* origin, int32_t value, ::java::lang::String* originalText) 
    : ConfigInt(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,value,originalText);
}

constexpr int64_t com::typesafe::config::impl::ConfigInt::serialVersionUID;

void com::typesafe::config::impl::ConfigInt::ctor(::com::typesafe::config::ConfigOrigin* origin, int32_t value, ::java::lang::String* originalText)
{
    super::ctor(origin, originalText);
    this->value = value;
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigInt::valueType()
{
    return ::com::typesafe::config::ConfigValueType::NUMBER;
}

java::lang::Integer* com::typesafe::config::impl::ConfigInt::unwrapped()
{
    return ::java::lang::Integer::valueOf(value);
}

java::lang::String* com::typesafe::config::impl::ConfigInt::transformToString()
{
    auto s = super::transformToString();
    if(s == nullptr)
        return ::java::lang::Integer::toString(value);
    else
        return s;
}

int64_t com::typesafe::config::impl::ConfigInt::longValue()
{
    return value;
}

double com::typesafe::config::impl::ConfigInt::doubleValue()
{
    return value;
}

com::typesafe::config::impl::ConfigInt* com::typesafe::config::impl::ConfigInt::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return new ConfigInt(origin, value, originalText);
}

java::lang::Object* com::typesafe::config::impl::ConfigInt::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigInt::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigInt", 34);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigInt::getClass0()
{
    return class_();
}

