// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableProperties.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/PropertiesParser.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Properties.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::Parseable_ParseableProperties::Parseable_ParseableProperties(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableProperties::Parseable_ParseableProperties(::java::util::Properties* props, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableProperties(*static_cast< ::default_init_tag* >(0))
{
    ctor(props,options);
}

void com::typesafe::config::impl::Parseable_ParseableProperties::ctor(::java::util::Properties* props, ::com::typesafe::config::ConfigParseOptions* options)
{
    super::ctor();
    this->props = props;
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableProperties::reader() /* throws(IOException) */
{
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"reader() should not be called on props"_j);
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::Parseable_ParseableProperties::rawParseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions)
{
    if(ConfigImpl::traceLoadsEnabled())
        trace(::java::lang::StringBuilder().append(u"Loading config from properties "_j)->append(static_cast< ::java::lang::Object* >(props))->toString());

    return PropertiesParser::fromProperties(origin, props);
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable_ParseableProperties::guessSyntax()
{
    return ::com::typesafe::config::ConfigSyntax::PROPERTIES;
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableProperties::createOrigin()
{
    return SimpleConfigOrigin::newSimple(u"properties"_j);
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableProperties::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"("_j)
        ->append(npc(props)->size())
        ->append(u" props)"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableProperties::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableProperties", 54);
    return c;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableProperties::reader(::com::typesafe::config::ConfigParseOptions* options)
{
    return super::reader(options);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableProperties::getClass0()
{
    return class_();
}

