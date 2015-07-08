// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableResourceURL.hpp>

#include <com/typesafe/config/ConfigParseable.hpp>
#include <com/typesafe/config/impl/Parseable_Relativizer.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::Parseable_ParseableResourceURL::Parseable_ParseableResourceURL(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableResourceURL::Parseable_ParseableResourceURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options, ::java::lang::String* resource, Parseable_Relativizer* relativizer) 
    : Parseable_ParseableResourceURL(*static_cast< ::default_init_tag* >(0))
{
    ctor(input,options,resource,relativizer);
}

void com::typesafe::config::impl::Parseable_ParseableResourceURL::ctor(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options, ::java::lang::String* resource, Parseable_Relativizer* relativizer)
{
    super::ctor(input);
    this->relativizer = relativizer;
    this->resource = resource;
    postConstruct(options);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableResourceURL::createOrigin()
{
    return SimpleConfigOrigin::newResource(resource, input);
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::Parseable_ParseableResourceURL::relativeTo(::java::lang::String* filename)
{
    return npc(relativizer)->relativeTo(filename);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableResourceURL::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableResourceURL", 55);
    return c;
}

java::net::URL* com::typesafe::config::impl::Parseable_ParseableResourceURL::relativeTo(::java::net::URL* url, ::java::lang::String* filename)
{
    return super::relativeTo(url, filename);
}

java::io::File* com::typesafe::config::impl::Parseable_ParseableResourceURL::relativeTo(::java::io::File* file, ::java::lang::String* filename)
{
    return super::relativeTo(file, filename);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableResourceURL::getClass0()
{
    return class_();
}

