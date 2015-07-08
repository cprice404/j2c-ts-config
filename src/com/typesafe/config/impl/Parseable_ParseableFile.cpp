// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_ParseableFile.hpp>

#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigParseable.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::Parseable_ParseableFile::Parseable_ParseableFile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable_ParseableFile::Parseable_ParseableFile(::java::io::File* input, ::com::typesafe::config::ConfigParseOptions* options) 
    : Parseable_ParseableFile(*static_cast< ::default_init_tag* >(0))
{
    ctor(input,options);
}

void com::typesafe::config::impl::Parseable_ParseableFile::ctor(::java::io::File* input, ::com::typesafe::config::ConfigParseOptions* options)
{
    super::ctor();
    this->input = input;
    postConstruct(options);
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableFile::reader() /* throws(IOException) */
{
    if(ConfigImpl::traceLoadsEnabled())
        trace(::java::lang::StringBuilder().append(u"Loading config from a file: "_j)->append(static_cast< ::java::lang::Object* >(input))->toString());

    ::java::io::InputStream* stream = new ::java::io::FileInputStream(input);
    return readerFromStream(stream);
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable_ParseableFile::guessSyntax()
{
    return syntaxFromExtension(npc(input)->getName());
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::Parseable_ParseableFile::relativeTo(::java::lang::String* filename)
{
    ::java::io::File* sibling;
    if((new ::java::io::File(filename))->isAbsolute()) {
        sibling = new ::java::io::File(filename);
    } else {
        sibling = relativeTo(input, filename);
    }
    if(sibling == nullptr)
        return nullptr;

    if(npc(sibling)->exists()) {
        trace(::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(sibling))->append(u" exists, so loading it as a file"_j)->toString());
        return newFile(sibling, npc(options())->setOriginDescription(nullptr));
    } else {
        trace(::java::lang::StringBuilder().append(static_cast< ::java::lang::Object* >(sibling))->append(u" does not exist, so trying it as a classpath resource"_j)->toString());
        return super::relativeTo(filename);
    }
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable_ParseableFile::createOrigin()
{
    return SimpleConfigOrigin::newFile(npc(input)->getPath());
}

java::lang::String* com::typesafe::config::impl::Parseable_ParseableFile::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getSimpleName())->append(u"("_j)
        ->append(npc(input)->getPath())
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableFile::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable.ParseableFile", 48);
    return c;
}

java::io::Reader* com::typesafe::config::impl::Parseable_ParseableFile::reader(::com::typesafe::config::ConfigParseOptions* options)
{
    return super::reader(options);
}

java::net::URL* com::typesafe::config::impl::Parseable_ParseableFile::relativeTo(::java::net::URL* url, ::java::lang::String* filename)
{
    return super::relativeTo(url, filename);
}

java::io::File* com::typesafe::config::impl::Parseable_ParseableFile::relativeTo(::java::io::File* file, ::java::lang::String* filename)
{
    return super::relativeTo(file, filename);
}

java::lang::Class* com::typesafe::config::impl::Parseable_ParseableFile::getClass0()
{
    return class_();
}

