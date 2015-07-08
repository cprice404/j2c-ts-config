// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_FileNameSource.hpp>

#include <com/typesafe/config/impl/Parseable.hpp>
#include <java/io/File.hpp>

com::typesafe::config::impl::ConfigImpl_FileNameSource::ConfigImpl_FileNameSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_FileNameSource::ConfigImpl_FileNameSource()
    : ConfigImpl_FileNameSource(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::ConfigImpl_FileNameSource::nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* parseOptions)
{
    return Parseable::newFile(new ::java::io::File(name), parseOptions);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_FileNameSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.FileNameSource", 50);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_FileNameSource::getClass0()
{
    return class_();
}

