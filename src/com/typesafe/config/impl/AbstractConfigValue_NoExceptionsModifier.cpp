// Generated from /config/src/main/java/com/typesafe/config/impl/AbstractConfigValue.java
#include <com/typesafe/config/impl/AbstractConfigValue_NoExceptionsModifier.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::AbstractConfigValue_NoExceptionsModifier::AbstractConfigValue_NoExceptionsModifier(AbstractConfigValue *AbstractConfigValue_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractConfigValue_this(AbstractConfigValue_this)
{
    clinit();
}

com::typesafe::config::impl::AbstractConfigValue_NoExceptionsModifier::AbstractConfigValue_NoExceptionsModifier(AbstractConfigValue *AbstractConfigValue_this)
    : AbstractConfigValue_NoExceptionsModifier(AbstractConfigValue_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::AbstractConfigValue_NoExceptionsModifier::modifyChildMayThrow(::java::lang::String* keyOrNull, AbstractConfigValue* v) /* throws(Exception) */
{
    try {
        return modifyChild(keyOrNull, v);
    } catch (::java::lang::RuntimeException* e) {
        throw e;
    } catch (::java::lang::Exception* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Unexpected exception"_j, e);
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::AbstractConfigValue_NoExceptionsModifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.AbstractConfigValue.NoExceptionsModifier", 65);
    return c;
}

java::lang::Class* com::typesafe::config::impl::AbstractConfigValue_NoExceptionsModifier::getClass0()
{
    return class_();
}

