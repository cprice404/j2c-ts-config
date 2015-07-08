// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Properties_XmlSupport.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Properties_XmlSupport::Properties_XmlSupport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

sun::util::spi::XmlPropertiesProvider*& java::util::Properties_XmlSupport::PROVIDER()
{
    clinit();
    return PROVIDER_;
}
sun::util::spi::XmlPropertiesProvider* java::util::Properties_XmlSupport::PROVIDER_;

/* private: void ::java::util::Properties_XmlSupport::ctor() */
void java::util::Properties_XmlSupport::load(Properties* props, ::java::io::InputStream* in)
{ /* stub */
    clinit();
    unimplemented_(u"void java::util::Properties_XmlSupport::load(Properties* props, ::java::io::InputStream* in)");
}

/* private: sun::util::spi::XmlPropertiesProvider* java::util::Properties_XmlSupport::loadProvider() */
/* private: sun::util::spi::XmlPropertiesProvider* java::util::Properties_XmlSupport::loadProviderAsService(::java::lang::ClassLoader* cl) */
/* private: sun::util::spi::XmlPropertiesProvider* java::util::Properties_XmlSupport::loadProviderFromProperty(::java::lang::ClassLoader* cl) */
void java::util::Properties_XmlSupport::save(Properties* props, ::java::io::OutputStream* os, ::java::lang::String* comment, ::java::lang::String* encoding)
{ /* stub */
    clinit();
    unimplemented_(u"void java::util::Properties_XmlSupport::save(Properties* props, ::java::io::OutputStream* os, ::java::lang::String* comment, ::java::lang::String* encoding)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Properties_XmlSupport::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Properties.XmlSupport", 31);
    return c;
}

java::lang::Class* java::util::Properties_XmlSupport::getClass0()
{
    return class_();
}

