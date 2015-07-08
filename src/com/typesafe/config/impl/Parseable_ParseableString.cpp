// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableString.hpp>

#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/StringReader.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::Parseable_ParseableString::Parseable_ParseableString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableString::Parseable_ParseableString(::java::lang::String* input, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableString(*static_cast< ::default_init_tag* >(0))
{
    ctor(input,options);
}

void com::typesafe::config::impl::Parseable_ParseableString::ctor(::java::lang::String* input, ::com::typesafe::config::ConfigParseOptions* options)
{
    super::ctor();
    this->input = input;
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableString::reader()
{
    if(ConfigImpl::traceLoadsEnabled())
        trace(::java::lang::StringBuilder().append(u"Loading config from a String "_j)->append(input)->toString());

    return new ::java::io::StringReader(input);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableString::createOrigin()
{
    return SimpleConfigOrigin::newSimple(u"String"_j);
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableString::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"("_j)
        ->append(input)
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableString::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableString", 50);
    return c;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableString::reader(::com::typesafe::config::ConfigParseOptions* options)
{
    return super::reader(options);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableString::getClass0()
{
    return class_();
}

