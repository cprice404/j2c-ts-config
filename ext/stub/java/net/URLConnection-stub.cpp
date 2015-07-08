// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/net/URLConnection.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
namespace reflect {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
}  // namespace reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
}  // namespace lang
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::net::URLConnection::URLConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URLConnection::URLConnection(URL* url)
    : URLConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor(url);
}

java::lang::String*& java::net::URLConnection::contentClassPrefix()
{
    clinit();
    return contentClassPrefix_;
}
java::lang::String* java::net::URLConnection::contentClassPrefix_;
java::lang::String*& java::net::URLConnection::contentPathProp()
{
    clinit();
    return contentPathProp_;
}
java::lang::String* java::net::URLConnection::contentPathProp_;
bool& java::net::URLConnection::defaultAllowUserInteraction()
{
    clinit();
    return defaultAllowUserInteraction_;
}
bool java::net::URLConnection::defaultAllowUserInteraction_;
bool& java::net::URLConnection::defaultUseCaches()
{
    clinit();
    return defaultUseCaches_;
}
bool java::net::URLConnection::defaultUseCaches_;
java::net::ContentHandlerFactory*& java::net::URLConnection::factory()
{
    clinit();
    return factory_;
}
java::net::ContentHandlerFactory* java::net::URLConnection::factory_;
java::net::FileNameMap*& java::net::URLConnection::fileNameMap()
{
    clinit();
    return fileNameMap_;
}
java::net::FileNameMap* java::net::URLConnection::fileNameMap_;
bool& java::net::URLConnection::fileNameMapLoaded()
{
    clinit();
    return fileNameMapLoaded_;
}
bool java::net::URLConnection::fileNameMapLoaded_;
java::util::Hashtable*& java::net::URLConnection::handlers()
{
    clinit();
    return handlers_;
}
java::util::Hashtable* java::net::URLConnection::handlers_;

void ::java::net::URLConnection::ctor(URL* url)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URLConnection::ctor(URL* url)");
}

void java::net::URLConnection::addRequestProperty(::java::lang::String* key, ::java::lang::String* value)
{ /* stub */
    unimplemented_(u"void java::net::URLConnection::addRequestProperty(::java::lang::String* key, ::java::lang::String* value)");
}

/* private: bool java::net::URLConnection::checkfpx(::java::io::InputStream* is) */
bool java::net::URLConnection::getAllowUserInteraction()
{ /* stub */
return allowUserInteraction ; /* getter */
}

int32_t java::net::URLConnection::getConnectTimeout()
{ /* stub */
return connectTimeout ; /* getter */
}

java::lang::Object* java::net::URLConnection::getContent()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::net::URLConnection::getContent()");
    return 0;
}

java::lang::Object* java::net::URLConnection::getContent(::java::lang::ClassArray* classes)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::net::URLConnection::getContent(::java::lang::ClassArray* classes)");
    return 0;
}

java::lang::String* java::net::URLConnection::getContentEncoding()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::getContentEncoding()");
    return 0;
}

java::net::ContentHandler* java::net::URLConnection::getContentHandler()
{ /* stub */
    unimplemented_(u"java::net::ContentHandler* java::net::URLConnection::getContentHandler()");
    return 0;
}

/* private: java::lang::String* java::net::URLConnection::getContentHandlerPkgPrefixes() */
int32_t java::net::URLConnection::getContentLength()
{ /* stub */
    unimplemented_(u"int32_t java::net::URLConnection::getContentLength()");
    return 0;
}

int64_t java::net::URLConnection::getContentLengthLong()
{ /* stub */
    unimplemented_(u"int64_t java::net::URLConnection::getContentLengthLong()");
    return 0;
}

java::lang::String* java::net::URLConnection::getContentType()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::getContentType()");
    return 0;
}

int64_t java::net::URLConnection::getDate()
{ /* stub */
    unimplemented_(u"int64_t java::net::URLConnection::getDate()");
    return 0;
}

bool java::net::URLConnection::getDefaultAllowUserInteraction()
{ /* stub */
    clinit();
return defaultAllowUserInteraction() ; /* getter */
}

java::lang::String* java::net::URLConnection::getDefaultRequestProperty(::java::lang::String* key)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::net::URLConnection::getDefaultRequestProperty(::java::lang::String* key)");
    return 0;
}

bool java::net::URLConnection::getDefaultUseCaches()
{ /* stub */
    unimplemented_(u"bool java::net::URLConnection::getDefaultUseCaches()");
    return 0;
}

bool java::net::URLConnection::getDoInput()
{ /* stub */
return doInput ; /* getter */
}

bool java::net::URLConnection::getDoOutput()
{ /* stub */
return doOutput ; /* getter */
}

int64_t java::net::URLConnection::getExpiration()
{ /* stub */
    unimplemented_(u"int64_t java::net::URLConnection::getExpiration()");
    return 0;
}

java::net::FileNameMap* java::net::URLConnection::getFileNameMap()
{ /* stub */
    clinit();
return fileNameMap() ; /* getter */
}

java::lang::String* java::net::URLConnection::getHeaderField(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::getHeaderField(::java::lang::String* name)");
    return 0;
}

java::lang::String* java::net::URLConnection::getHeaderField(int32_t n)
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::getHeaderField(int32_t n)");
    return 0;
}

int64_t java::net::URLConnection::getHeaderFieldDate(::java::lang::String* name, int64_t Default)
{ /* stub */
    unimplemented_(u"int64_t java::net::URLConnection::getHeaderFieldDate(::java::lang::String* name, int64_t Default)");
    return 0;
}

int32_t java::net::URLConnection::getHeaderFieldInt(::java::lang::String* name, int32_t Default)
{ /* stub */
    unimplemented_(u"int32_t java::net::URLConnection::getHeaderFieldInt(::java::lang::String* name, int32_t Default)");
    return 0;
}

java::lang::String* java::net::URLConnection::getHeaderFieldKey(int32_t n)
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::getHeaderFieldKey(int32_t n)");
    return 0;
}

int64_t java::net::URLConnection::getHeaderFieldLong(::java::lang::String* name, int64_t Default)
{ /* stub */
    unimplemented_(u"int64_t java::net::URLConnection::getHeaderFieldLong(::java::lang::String* name, int64_t Default)");
    return 0;
}

java::util::Map* java::net::URLConnection::getHeaderFields()
{ /* stub */
    unimplemented_(u"java::util::Map* java::net::URLConnection::getHeaderFields()");
    return 0;
}

int64_t java::net::URLConnection::getIfModifiedSince()
{ /* stub */
return ifModifiedSince ; /* getter */
}

java::io::InputStream* java::net::URLConnection::getInputStream()
{ /* stub */
    unimplemented_(u"java::io::InputStream* java::net::URLConnection::getInputStream()");
    return 0;
}

int64_t java::net::URLConnection::getLastModified()
{ /* stub */
    unimplemented_(u"int64_t java::net::URLConnection::getLastModified()");
    return 0;
}

java::io::OutputStream* java::net::URLConnection::getOutputStream()
{ /* stub */
    unimplemented_(u"java::io::OutputStream* java::net::URLConnection::getOutputStream()");
    return 0;
}

java::security::Permission* java::net::URLConnection::getPermission()
{ /* stub */
    unimplemented_(u"java::security::Permission* java::net::URLConnection::getPermission()");
    return 0;
}

int32_t java::net::URLConnection::getReadTimeout()
{ /* stub */
return readTimeout ; /* getter */
}

java::util::Map* java::net::URLConnection::getRequestProperties()
{ /* stub */
    unimplemented_(u"java::util::Map* java::net::URLConnection::getRequestProperties()");
    return 0;
}

java::lang::String* java::net::URLConnection::getRequestProperty(::java::lang::String* key)
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::getRequestProperty(::java::lang::String* key)");
    return 0;
}

java::net::URL* java::net::URLConnection::getURL()
{ /* stub */
    unimplemented_(u"java::net::URL* java::net::URLConnection::getURL()");
    return 0;
}

bool java::net::URLConnection::getUseCaches()
{ /* stub */
return useCaches ; /* getter */
}

java::lang::String* java::net::URLConnection::guessContentTypeFromName(::java::lang::String* fname)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::net::URLConnection::guessContentTypeFromName(::java::lang::String* fname)");
    return 0;
}

java::lang::String* java::net::URLConnection::guessContentTypeFromStream(::java::io::InputStream* is)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::net::URLConnection::guessContentTypeFromStream(::java::io::InputStream* is)");
    return 0;
}

/* private: java::net::ContentHandler* java::net::URLConnection::lookupContentHandlerClassFor(::java::lang::String* contentType) */
/* private: int32_t java::net::URLConnection::readBytes(::int32_tArray* c, int32_t len, ::java::io::InputStream* is) */
void java::net::URLConnection::setAllowUserInteraction(bool allowuserinteraction)
{ /* stub */
    this->allowUserInteraction = allowuserinteraction; /* setter */
}

void java::net::URLConnection::setConnectTimeout(int32_t timeout)
{ /* stub */
    this->connectTimeout = timeout; /* setter */
}

void java::net::URLConnection::setContentHandlerFactory(ContentHandlerFactory* fac)
{ /* stub */
    clinit();
    unimplemented_(u"void java::net::URLConnection::setContentHandlerFactory(ContentHandlerFactory* fac)");
}

void java::net::URLConnection::setDefaultAllowUserInteraction(bool defaultallowuserinteraction)
{ /* stub */
    clinit();
    URLConnection::defaultAllowUserInteraction() = defaultallowuserinteraction; /* setter */
}

void java::net::URLConnection::setDefaultRequestProperty(::java::lang::String* key, ::java::lang::String* value)
{ /* stub */
    clinit();
    unimplemented_(u"void java::net::URLConnection::setDefaultRequestProperty(::java::lang::String* key, ::java::lang::String* value)");
}

void java::net::URLConnection::setDefaultUseCaches(bool defaultusecaches)
{ /* stub */
    unimplemented_(u"void java::net::URLConnection::setDefaultUseCaches(bool defaultusecaches)");
}

void java::net::URLConnection::setDoInput(bool doinput)
{ /* stub */
    this->doInput = doinput; /* setter */
}

void java::net::URLConnection::setDoOutput(bool dooutput)
{ /* stub */
    this->doOutput = dooutput; /* setter */
}

void java::net::URLConnection::setFileNameMap(FileNameMap* map)
{ /* stub */
    clinit();
    URLConnection::fileNameMap() = map; /* setter */
}

void java::net::URLConnection::setIfModifiedSince(int64_t ifmodifiedsince)
{ /* stub */
    this->ifModifiedSince = ifmodifiedsince; /* setter */
}

void java::net::URLConnection::setReadTimeout(int32_t timeout)
{ /* stub */
    this->readTimeout = timeout; /* setter */
}

void java::net::URLConnection::setRequestProperty(::java::lang::String* key, ::java::lang::String* value)
{ /* stub */
    unimplemented_(u"void java::net::URLConnection::setRequestProperty(::java::lang::String* key, ::java::lang::String* value)");
}

void java::net::URLConnection::setUseCaches(bool usecaches)
{ /* stub */
    this->useCaches = usecaches; /* setter */
}

/* private: int64_t java::net::URLConnection::skipForward(::java::io::InputStream* is, int64_t toSkip) */
/* private: java::lang::String* java::net::URLConnection::stripOffParameters(::java::lang::String* contentType) */
java::lang::String* java::net::URLConnection::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URLConnection::toString()");
    return 0;
}

/* private: java::lang::String* java::net::URLConnection::typeToPackageName(::java::lang::String* contentType) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::net::URLConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URLConnection", 22);
    return c;
}

java::lang::Class* java::net::URLConnection::getClass0()
{
    return class_();
}

