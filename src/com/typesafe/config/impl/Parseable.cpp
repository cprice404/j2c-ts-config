// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_IO.hpp>
#include <com/typesafe/config/ConfigException_Parse.hpp>
#include <com/typesafe/config/ConfigException_WrongType.hpp>
#include <com/typesafe/config/ConfigIncludeContext.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigDocumentParser.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <com/typesafe/config/impl/ConfigNodeObject.hpp>
#include <com/typesafe/config/impl/ConfigNodeRoot.hpp>
#include <com/typesafe/config/impl/ConfigParser.hpp>
#include <com/typesafe/config/impl/FullIncluder.hpp>
#include <com/typesafe/config/impl/Parseable_doNotClose_2.hpp>
#include <com/typesafe/config/impl/Parseable_1.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableFile.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableNotFound.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableProperties.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableReader.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableResourceURL.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableResources.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableString.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableURL.hpp>
#include <com/typesafe/config/impl/PropertiesParser.hpp>
#include <com/typesafe/config/impl/SimpleConfigDocument.hpp>
#include <com/typesafe/config/impl/SimpleConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <com/typesafe/config/impl/SimpleIncludeContext.hpp>
#include <com/typesafe/config/impl/SimpleIncluder.hpp>
#include <com/typesafe/config/impl/Tokenizer.hpp>
#include <com/typesafe/config/parser/ConfigDocument.hpp>
#include <java/io/BufferedReader.hpp>
#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStreamReader.hpp>
#include <java/io/Reader.hpp>
#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URI.hpp>
#include <java/net/URISyntaxException.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedList.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
namespace
{
template<typename F>
struct finally_
{
    finally_(F f) : f(f), moved(false) { }
    finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
    ~finally_() { if(!moved) f(); }
private:
    finally_(const finally_&); finally_& operator=(const finally_&);
    F f;
    bool moved;
};

template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
com::typesafe::config::impl::Parseable::Parseable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::Parseable::Parseable() 
    : Parseable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ThreadLocal*& com::typesafe::config::impl::Parseable::parseStack()
{
    clinit();
    return parseStack_;
}
java::lang::ThreadLocal* com::typesafe::config::impl::Parseable::parseStack_;

constexpr int32_t com::typesafe::config::impl::Parseable::MAX_INCLUDE_DEPTH;

void com::typesafe::config::impl::Parseable::ctor()
{
    super::ctor();
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::impl::Parseable::fixupOptions(::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    auto syntax = npc(baseOptions)->getSyntax();
    if(syntax == nullptr) {
        syntax = guessSyntax();
    }
    if(syntax == nullptr) {
        syntax = ::com::typesafe::config::ConfigSyntax::CONF;
    }
    auto modified = npc(baseOptions)->setSyntax(syntax);
    modified = npc(modified)->appendIncluder(ConfigImpl::defaultIncluder());
    modified = npc(modified)->setIncluder(SimpleIncluder::makeFull(npc(modified)->getIncluder()));
    return modified;
}

void com::typesafe::config::impl::Parseable::postConstruct(::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    this->initialOptions = fixupOptions(baseOptions);
    this->includeContext_ = new SimpleIncludeContext(this);
    if(npc(initialOptions)->getOriginDescription() != nullptr)
        initialOrigin = SimpleConfigOrigin::newSimple(npc(initialOptions)->getOriginDescription());
    else
        initialOrigin = createOrigin();
}

java::io::Reader* com::typesafe::config::impl::Parseable::reader(::com::typesafe::config::ConfigParseOptions* options) /* throws(IOException) */
{
    return reader();
}

void com::typesafe::config::impl::Parseable::trace(::java::lang::String* message)
{
    clinit();
    if(ConfigImpl::traceLoadsEnabled()) {
        ConfigImpl::trace(message);
    }
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable::guessSyntax()
{
    return nullptr;
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable::contentType()
{
    return nullptr;
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::Parseable::relativeTo(::java::lang::String* filename)
{
    auto resource = filename;
    if(npc(filename)->startsWith(u"/"_j))
        resource = npc(filename)->substring(1);

    return newResources(resource, npc(options())->setOriginDescription(nullptr));
}

com::typesafe::config::ConfigIncludeContext* com::typesafe::config::impl::Parseable::includeContext()
{
    return includeContext_;
}

com::typesafe::config::impl::AbstractConfigObject* com::typesafe::config::impl::Parseable::forceParsedToObject(::com::typesafe::config::ConfigValue* value)
{
    clinit();
    if(dynamic_cast< AbstractConfigObject* >(value) != nullptr) {
        return java_cast< AbstractConfigObject* >(value);
    } else {
        throw new ::com::typesafe::config::ConfigException_WrongType(npc(value)->origin(), u""_j, u"object at file root"_j, npc(npc(value)->valueType())->name());
    }
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::Parseable::parse(::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    auto stack = java_cast< ::java::util::LinkedList* >(npc(parseStack_)->get());
    if(npc(stack)->size() >= MAX_INCLUDE_DEPTH) {
        throw new ::com::typesafe::config::ConfigException_Parse(initialOrigin, ::java::lang::StringBuilder().append(u"include statements nested more than "_j)->append(MAX_INCLUDE_DEPTH)
            ->append(u" times, you probably have a cycle in your includes. Trace: "_j)
            ->append(static_cast< ::java::lang::Object* >(stack))->toString());
    }
    npc(stack)->addFirst(this);
    {
        auto finally0 = finally([&] {
            npc(stack)->removeFirst();
            if(npc(stack)->isEmpty()) {
                npc(parseStack_)->remove();
            }
        });
        {
            return forceParsedToObject(parseValue(baseOptions));
        }
    }

}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Parseable::parseValue(::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    auto options = fixupOptions(baseOptions);
    ::com::typesafe::config::ConfigOrigin* origin;
    if(npc(options)->getOriginDescription() != nullptr)
        origin = SimpleConfigOrigin::newSimple(npc(options)->getOriginDescription());
    else
        origin = initialOrigin;
    return parseValue(origin, options);
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Parseable::parseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions)
{
    try {
        return rawParseValue(origin, finalOptions);
    } catch (::java::io::IOException* e) {
        if(npc(finalOptions)->getAllowMissing()) {
            return SimpleConfigObject::emptyMissing(origin);
        } else {
            trace(::java::lang::StringBuilder().append(u"exception loading "_j)->append(npc(origin)->description())
                ->append(u": "_j)
                ->append(npc(npc(e)->getClass())->getName())
                ->append(u": "_j)
                ->append(npc(e)->getMessage())->toString());
            throw new ::com::typesafe::config::ConfigException_IO(origin, ::java::lang::StringBuilder().append(npc(npc(e)->getClass())->getName())->append(u": "_j)
                ->append(npc(e)->getMessage())->toString(), e);
        }
    }
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::Parseable::parseDocument(::com::typesafe::config::ConfigParseOptions* baseOptions)
{
    auto options = fixupOptions(baseOptions);
    ::com::typesafe::config::ConfigOrigin* origin;
    if(npc(options)->getOriginDescription() != nullptr)
        origin = SimpleConfigOrigin::newSimple(npc(options)->getOriginDescription());
    else
        origin = initialOrigin;
    return parseDocument(origin, options);
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::Parseable::parseDocument(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions)
{
    try {
        return rawParseDocument(origin, finalOptions);
    } catch (::java::io::IOException* e) {
        if(npc(finalOptions)->getAllowMissing()) {
            auto children = new ::java::util::ArrayList();
            npc(children)->add(new ConfigNodeObject(new ::java::util::ArrayList()));
            return new SimpleConfigDocument(new ConfigNodeRoot(children, origin), finalOptions);
        } else {
            trace(::java::lang::StringBuilder().append(u"exception loading "_j)->append(npc(origin)->description())
                ->append(u": "_j)
                ->append(npc(npc(e)->getClass())->getName())
                ->append(u": "_j)
                ->append(npc(e)->getMessage())->toString());
            throw new ::com::typesafe::config::ConfigException_IO(origin, ::java::lang::StringBuilder().append(npc(npc(e)->getClass())->getName())->append(u": "_j)
                ->append(npc(e)->getMessage())->toString(), e);
        }
    }
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Parseable::rawParseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */
{
    auto reader = this->reader(finalOptions);
    auto contentType = this->contentType();
    ::com::typesafe::config::ConfigParseOptions* optionsWithContentType;
    if(contentType != nullptr) {
        if(ConfigImpl::traceLoadsEnabled() && npc(finalOptions)->getSyntax() != nullptr)
            trace(::java::lang::StringBuilder().append(u"Overriding syntax "_j)->append(static_cast< ::java::lang::Object* >(npc(finalOptions)->getSyntax()))
                ->append(u" with Content-Type which specified "_j)
                ->append(static_cast< ::java::lang::Object* >(contentType))->toString());

        optionsWithContentType = npc(finalOptions)->setSyntax(contentType);
    } else {
        optionsWithContentType = finalOptions;
    }
    {
        auto finally1 = finally([&] {
            npc(reader)->close();
        });
        {
            return rawParseValue(reader, origin, optionsWithContentType);
        }
    }

}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Parseable::rawParseValue(::java::io::Reader* reader, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */
{
    if(npc(finalOptions)->getSyntax() == ::com::typesafe::config::ConfigSyntax::PROPERTIES) {
        return PropertiesParser::parse(reader, origin);
    } else {
        auto tokens = Tokenizer::tokenize(origin, reader, npc(finalOptions)->getSyntax());
        auto document = ConfigDocumentParser::parse(tokens, origin, finalOptions);
        return ConfigParser::parse(document, origin, finalOptions, includeContext());
    }
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::Parseable::rawParseDocument(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */
{
    auto reader = this->reader(finalOptions);
    auto contentType = this->contentType();
    ::com::typesafe::config::ConfigParseOptions* optionsWithContentType;
    if(contentType != nullptr) {
        if(ConfigImpl::traceLoadsEnabled() && npc(finalOptions)->getSyntax() != nullptr)
            trace(::java::lang::StringBuilder().append(u"Overriding syntax "_j)->append(static_cast< ::java::lang::Object* >(npc(finalOptions)->getSyntax()))
                ->append(u" with Content-Type which specified "_j)
                ->append(static_cast< ::java::lang::Object* >(contentType))->toString());

        optionsWithContentType = npc(finalOptions)->setSyntax(contentType);
    } else {
        optionsWithContentType = finalOptions;
    }
    {
        auto finally2 = finally([&] {
            npc(reader)->close();
        });
        {
            return rawParseDocument(reader, origin, optionsWithContentType);
        }
    }

}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::Parseable::rawParseDocument(::java::io::Reader* reader, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */
{
    auto tokens = Tokenizer::tokenize(origin, reader, npc(finalOptions)->getSyntax());
    return new SimpleConfigDocument(ConfigDocumentParser::parse(tokens, origin, finalOptions), finalOptions);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::Parseable::parse()
{
    return forceParsedToObject(parseValue(options()));
}

com::typesafe::config::parser::ConfigDocument* com::typesafe::config::impl::Parseable::parseConfigDocument()
{
    return parseDocument(options());
}

com::typesafe::config::impl::AbstractConfigValue* com::typesafe::config::impl::Parseable::parseValue()
{
    return parseValue(options());
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::impl::Parseable::origin()
{
    return initialOrigin;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::impl::Parseable::options()
{
    return initialOptions;
}

java::lang::String* com::typesafe::config::impl::Parseable::toString()
{
    return npc(getClass())->getSimpleName();
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::impl::Parseable::syntaxFromExtension(::java::lang::String* name)
{
    clinit();
    if(npc(name)->endsWith(u".json"_j))
        return ::com::typesafe::config::ConfigSyntax::JSON;
    else if(npc(name)->endsWith(u".conf"_j))
        return ::com::typesafe::config::ConfigSyntax::CONF;
    else if(npc(name)->endsWith(u".properties"_j))
        return ::com::typesafe::config::ConfigSyntax::PROPERTIES;
    else
        return nullptr;
}

java::io::Reader* com::typesafe::config::impl::Parseable::readerFromStream(::java::io::InputStream* input)
{
    clinit();
    return readerFromStream(input, u"UTF-8"_j);
}

java::io::Reader* com::typesafe::config::impl::Parseable::readerFromStream(::java::io::InputStream* input, ::java::lang::String* encoding)
{
    clinit();
    try {
        ::java::io::Reader* reader = new ::java::io::InputStreamReader(input, encoding);
        return new ::java::io::BufferedReader(reader);
    } catch (::java::io::UnsupportedEncodingException* e) {
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Java runtime does not support UTF-8"_j, e);
    }
}

java::io::Reader* com::typesafe::config::impl::Parseable::doNotClose(::java::io::Reader* input)
{
    clinit();
    return new Parseable_doNotClose_2(input);
}

java::net::URL* com::typesafe::config::impl::Parseable::relativeTo(::java::net::URL* url, ::java::lang::String* filename)
{
    clinit();
    if((new ::java::io::File(filename))->isAbsolute())
        return nullptr;

    try {
        auto siblingURI = npc(url)->toURI();
        auto relative = new ::java::net::URI(filename);
        auto resolved = npc(npc(siblingURI)->resolve(relative))->toURL();
        return resolved;
    } catch (::java::net::MalformedURLException* e) {
        return nullptr;
    } catch (::java::net::URISyntaxException* e) {
        return nullptr;
    } catch (::java::lang::IllegalArgumentException* e) {
        return nullptr;
    }
}

java::io::File* com::typesafe::config::impl::Parseable::relativeTo(::java::io::File* file, ::java::lang::String* filename)
{
    clinit();
    auto child = new ::java::io::File(filename);
    if(npc(child)->isAbsolute())
        return nullptr;

    auto parent = npc(file)->getParentFile();
    if(parent == nullptr)
        return nullptr;
    else
        return new ::java::io::File(parent, filename);
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newNotFound(::java::lang::String* whatNotFound, ::java::lang::String* message, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return new Parseable_ParseableNotFound(whatNotFound, message, options);
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newReader(::java::io::Reader* reader, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return new Parseable_ParseableReader(doNotClose(reader), options);
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newString(::java::lang::String* input, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return new Parseable_ParseableString(input, options);
}

java::lang::String*& com::typesafe::config::impl::Parseable::jsonContentType()
{
    clinit();
    return jsonContentType_;
}
java::lang::String* com::typesafe::config::impl::Parseable::jsonContentType_;

java::lang::String*& com::typesafe::config::impl::Parseable::propertiesContentType()
{
    clinit();
    return propertiesContentType_;
}
java::lang::String* com::typesafe::config::impl::Parseable::propertiesContentType_;

java::lang::String*& com::typesafe::config::impl::Parseable::hoconContentType()
{
    clinit();
    return hoconContentType_;
}
java::lang::String* com::typesafe::config::impl::Parseable::hoconContentType_;

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    if(npc(npc(input)->getProtocol())->equals(u"file"_j)) {
        return newFile(ConfigImplUtil::urlToFile(input), options);
    } else {
        return new Parseable_ParseableURL(input, options);
    }
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newFile(::java::io::File* input, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return new Parseable_ParseableFile(input, options);
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newResourceURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options, ::java::lang::String* resource, Parseable_Relativizer* relativizer)
{
    clinit();
    return new Parseable_ParseableResourceURL(input, options, resource, relativizer);
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newResources(::java::lang::Class* klass, ::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return newResources(convertResourceName(klass, resource), npc(options)->setClassLoader(npc(klass)->getClassLoader()));
}

java::lang::String* com::typesafe::config::impl::Parseable::convertResourceName(::java::lang::Class* klass, ::java::lang::String* resource)
{
    clinit();
    if(npc(resource)->startsWith(u"/"_j)) {
        return npc(resource)->substring(1);
    } else {
        auto className = npc(klass)->getName();
        auto i = npc(className)->lastIndexOf(static_cast< int32_t >(u'.'));
        if(i < 0) {
            return resource;
        } else {
            auto packageName = npc(className)->substring(0, i);
            auto packagePath = npc(packageName)->replace(u'.', u'/');
            return ::java::lang::StringBuilder().append(packagePath)->append(u"/"_j)
                ->append(resource)->toString();
        }
    }
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newResources(::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    if(npc(options)->getClassLoader() == nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"null class loader; pass in a class loader or use Thread.currentThread().setContextClassLoader()"_j);

    return new Parseable_ParseableResources(resource, options);
}

com::typesafe::config::impl::Parseable* com::typesafe::config::impl::Parseable::newProperties(::java::util::Properties* properties, ::com::typesafe::config::ConfigParseOptions* options)
{
    clinit();
    return new Parseable_ParseableProperties(properties, options);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.Parseable", 34);
    return c;
}

void com::typesafe::config::impl::Parseable::clinit()
{
struct string_init_ {
    string_init_() {
    jsonContentType_ = u"application/json"_j;
    propertiesContentType_ = u"text/x-java-properties"_j;
    hoconContentType_ = u"application/hocon"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        parseStack_ = new Parseable_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::Parseable::getClass0()
{
    return class_();
}

