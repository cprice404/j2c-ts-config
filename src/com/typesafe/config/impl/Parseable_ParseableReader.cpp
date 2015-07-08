// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableReader.hpp>

#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::impl::Parseable_ParseableReader::Parseable_ParseableReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableReader::Parseable_ParseableReader(::java::io::Reader* reader, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(reader,options);
}

void com::typesafe::config::impl::Parseable_ParseableReader::ctor(::java::io::Reader* reader, ::com::typesafe::config::ConfigParseOptions* options)
{
    super::ctor();
    this->reader_ = reader;
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableReader::reader()
{
    if(ConfigImpl::traceLoadsEnabled())
        trace(::java::lang::StringBuilder().append(u"Loading config from reader "_j)->append(static_cast< ::java::lang::Object* >(reader_))->toString());

    return reader_;
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableReader::createOrigin()
{
    return SimpleConfigOrigin::newSimple(u"Reader"_j);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableReader", 50);
    return c;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableReader::reader(::com::typesafe::config::ConfigParseOptions* options)
{
    return super::reader(options);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableReader::getClass0()
{
    return class_();
}

