// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableNotFound.hpp>

#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/lang/String.hpp>

com::typesafe::config::impl::Parseable_ParseableNotFound::Parseable_ParseableNotFound(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableNotFound::Parseable_ParseableNotFound(::java::lang::String* what, ::java::lang::String* message, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableNotFound(*static_cast< ::default_init_tag* >(0))
{
    ctor(what,message,options);
}

void com::typesafe::config::impl::Parseable_ParseableNotFound::ctor(::java::lang::String* what, ::java::lang::String* message, ::com::typesafe::config::ConfigParseOptions* options)
{
    super::ctor();
    this->what = what;
    this->message = message;
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableNotFound::reader() /* throws(IOException) */
{
    throw new ::java::io::FileNotFoundException(message);
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableNotFound::createOrigin()
{
    return SimpleConfigOrigin::newSimple(what);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableNotFound::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableNotFound", 52);
    return c;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableNotFound::reader(::com::typesafe::config::ConfigParseOptions* options)
{
    return super::reader(options);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableNotFound::getClass0()
{
    return class_();
}

