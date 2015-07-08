// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableURL.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/URL.hpp>
#include <java/net/URLConnection.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::Parseable_ParseableURL::Parseable_ParseableURL(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableURL::Parseable_ParseableURL(::java::net::URL* input) 
    : Parseable_ParseableURL(*static_cast< ::default_init_tag* >(0))
{
    ctor(input);
}

com::typesafe::config::impl::Parseable_ParseableURL::Parseable_ParseableURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableURL(*static_cast< ::default_init_tag* >(0))
{
    ctor(input,options);
}

void com::typesafe::config::impl::Parseable_ParseableURL::init()
{
    contentType_ = nullptr;
}

void com::typesafe::config::impl::Parseable_ParseableURL::ctor(::java::net::URL* input)
{
    super::ctor();
    init();
    this->input = input;
}

void com::typesafe::config::impl::Parseable_ParseableURL::ctor(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options)
{
    ctor(input);
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableURL::reader() /* throws(IOException) */
{
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"reader() without options should not be called on ParseableURL"_j);
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableURL::acceptContentType(::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    if(npc(options)->getSyntax() == nullptr)
        return nullptr;

    {
        auto v = npc(options)->getSyntax();
        if((v == ::com::typesafe::config::ConfigSyntax::JSON)) {
            return jsonContentType();
        }
        if((v == ::com::typesafe::config::ConfigSyntax::CONF)) {
            return hoconContentType();
        }
        if((v == ::com::typesafe::config::ConfigSyntax::PROPERTIES)) {
            return propertiesContentType();
        }
end_switch0:;
    }

    return nullptr;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableURL::reader(::com::typesafe::config::ConfigParseOptions* options) /* throws(IOException) */
{
    try {
        if(ConfigImpl::traceLoadsEnabled())
            trace(::java::lang::StringBuilder().append(u"Loading config from a URL: "_j)->append(npc(input)->toExternalForm())->toString());

        auto connection = npc(input)->openConnection();
        auto acceptContent = acceptContentType(options);
        if(acceptContent != nullptr) {
            npc(connection)->setRequestProperty(u"Accept"_j, acceptContent);
        }
        npc(connection)->connect();
        contentType_ = npc(connection)->getContentType();
        if(contentType_ != nullptr) {
            if(ConfigImpl::traceLoadsEnabled())
                trace(::java::lang::StringBuilder().append(u"URL sets Content-Type: '"_j)->append(contentType_)
                    ->append(u"'"_j)->toString());

            contentType_ = npc(contentType_)->trim();
            auto semi = npc(contentType_)->indexOf(static_cast< int32_t >(u';'));
            if(semi >= 0)
                contentType_ = npc(contentType_)->substring(0, semi);

        }
        auto stream = npc(connection)->getInputStream();
        return readerFromStream(stream);
    } catch (::java::io::FileNotFoundException* fnf) {
        throw fnf;
    } catch (::java::io::IOException* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"Cannot load config from URL: "_j)->append(npc(input)->toExternalForm())->toString(), e);
    }
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable_ParseableURL::guessSyntax()
{
    return syntaxFromExtension(npc(input)->getPath());
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable_ParseableURL::contentType()
{
    if(contentType_ != nullptr) {
        if(npc(contentType_)->equals(jsonContentType()))
            return ::com::typesafe::config::ConfigSyntax::JSON;
        else if(npc(contentType_)->equals(propertiesContentType()))
            return ::com::typesafe::config::ConfigSyntax::PROPERTIES;
        else if(npc(contentType_)->equals(hoconContentType()))
            return ::com::typesafe::config::ConfigSyntax::CONF;
        else {
            if(ConfigImpl::traceLoadsEnabled())
                trace(::java::lang::StringBuilder().append(u"'"_j)->append(contentType_)
                    ->append(u"' isn't a known content type"_j)->toString());

            return nullptr;
        }
    } else {
        return nullptr;
    }
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::Parseable_ParseableURL::relativeTo(::java::lang::String* filename)
{
    auto url = relativeTo(input, filename);
    if(url == nullptr)
        return nullptr;

    return newURL(url, npc(options())->setOriginDescription(nullptr));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableURL::createOrigin()
{
    return SimpleConfigOrigin::newURL(input);
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableURL::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"("_j)
        ->append(npc(input)->toExternalForm())
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableURL::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableURL", 47);
    return c;
}

java::net::URL* com::typesafe::config::impl::Parseable_ParseableURL::relativeTo(::java::net::URL* url, ::java::lang::String* filename)
{
    return super::relativeTo(url, filename);
}

java::io::File* com::typesafe::config::impl::Parseable_ParseableURL::relativeTo(::java::io::File* file, ::java::lang::String* filename)
{
    return super::relativeTo(file, filename);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableURL::getClass0()
{
    return class_();
}

