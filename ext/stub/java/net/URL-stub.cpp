// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/net/URL.hpp>

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
java::net::URL::URL(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URL::URL(::java::lang::String* spec)
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(spec);
}

java::net::URL::URL(URL* context, ::java::lang::String* spec)
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(context, spec);
}

java::net::URL::URL(::java::lang::String* protocol, ::java::lang::String* host, ::java::lang::String* file)
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(protocol, host, file);
}

java::net::URL::URL(URL* context, ::java::lang::String* spec, URLStreamHandler* handler)
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(context, spec, handler);
}

java::net::URL::URL(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file)
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(protocol, host, port, file);
}

java::net::URL::URL(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, URLStreamHandler* handler)
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(protocol, host, port, file, handler);
}

java::net::URLStreamHandlerFactory*& java::net::URL::factory()
{
    clinit();
    return factory_;
}
java::net::URLStreamHandlerFactory* java::net::URL::factory_;
java::util::Hashtable*& java::net::URL::handlers()
{
    clinit();
    return handlers_;
}
java::util::Hashtable* java::net::URL::handlers_;
java::lang::String*& java::net::URL::protocolPathProp()
{
    clinit();
    return protocolPathProp_;
}
java::lang::String* java::net::URL::protocolPathProp_;
constexpr int64_t java::net::URL::serialVersionUID;
java::lang::Object*& java::net::URL::streamHandlerLock()
{
    clinit();
    return streamHandlerLock_;
}
java::lang::Object* java::net::URL::streamHandlerLock_;

void ::java::net::URL::ctor(::java::lang::String* spec)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URL::ctor(::java::lang::String* spec)");
}

void ::java::net::URL::ctor(URL* context, ::java::lang::String* spec)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URL::ctor(URL* context, ::java::lang::String* spec)");
}

void ::java::net::URL::ctor(::java::lang::String* protocol, ::java::lang::String* host, ::java::lang::String* file)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URL::ctor(::java::lang::String* protocol, ::java::lang::String* host, ::java::lang::String* file)");
}

void ::java::net::URL::ctor(URL* context, ::java::lang::String* spec, URLStreamHandler* handler)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URL::ctor(URL* context, ::java::lang::String* spec, URLStreamHandler* handler)");
}

void ::java::net::URL::ctor(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URL::ctor(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file)");
}

void ::java::net::URL::ctor(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, URLStreamHandler* handler)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::net::URL::ctor(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, URLStreamHandler* handler)");
}

/* private: void java::net::URL::checkSpecifyHandler(::java::lang::SecurityManager* sm) */
bool java::net::URL::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::net::URL::equals(::java::lang::Object* obj)");
    return 0;
}

java::lang::String* java::net::URL::getAuthority()
{ /* stub */
return authority ; /* getter */
}

java::lang::Object* java::net::URL::getContent()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::net::URL::getContent()");
    return 0;
}

java::lang::Object* java::net::URL::getContent(::java::lang::ClassArray* classes)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::net::URL::getContent(::java::lang::ClassArray* classes)");
    return 0;
}

int32_t java::net::URL::getDefaultPort()
{ /* stub */
    unimplemented_(u"int32_t java::net::URL::getDefaultPort()");
    return 0;
}

java::lang::String* java::net::URL::getFile()
{ /* stub */
return file ; /* getter */
}

java::lang::String* java::net::URL::getHost()
{ /* stub */
return host ; /* getter */
}

java::lang::String* java::net::URL::getPath()
{ /* stub */
return path ; /* getter */
}

int32_t java::net::URL::getPort()
{ /* stub */
return port ; /* getter */
}

java::lang::String* java::net::URL::getProtocol()
{ /* stub */
return protocol ; /* getter */
}

java::lang::String* java::net::URL::getQuery()
{ /* stub */
return query ; /* getter */
}

java::lang::String* java::net::URL::getRef()
{ /* stub */
return ref ; /* getter */
}

java::net::URLStreamHandler* java::net::URL::getURLStreamHandler(::java::lang::String* protocol)
{ /* stub */
    clinit();
    unimplemented_(u"java::net::URLStreamHandler* java::net::URL::getURLStreamHandler(::java::lang::String* protocol)");
    return 0;
}

java::lang::String* java::net::URL::getUserInfo()
{ /* stub */
return userInfo ; /* getter */
}

int32_t java::net::URL::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::net::URL::hashCode()");
    return 0;
}

/* private: bool java::net::URL::isValidProtocol(::java::lang::String* protocol) */
java::net::URLConnection* java::net::URL::openConnection()
{ /* stub */
    unimplemented_(u"java::net::URLConnection* java::net::URL::openConnection()");
    return 0;
}

java::net::URLConnection* java::net::URL::openConnection(Proxy* proxy)
{ /* stub */
    unimplemented_(u"java::net::URLConnection* java::net::URL::openConnection(Proxy* proxy)");
    return 0;
}

java::io::InputStream* java::net::URL::openStream()
{ /* stub */
    unimplemented_(u"java::io::InputStream* java::net::URL::openStream()");
    return 0;
}

/* private: void java::net::URL::readObject(::java::io::ObjectInputStream* s) */
bool java::net::URL::sameFile(URL* other)
{ /* stub */
    unimplemented_(u"bool java::net::URL::sameFile(URL* other)");
    return 0;
}

void java::net::URL::set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, ::java::lang::String* ref)
{ /* stub */
    unimplemented_(u"void java::net::URL::set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, ::java::lang::String* ref)");
}

void java::net::URL::set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* authority, ::java::lang::String* userInfo, ::java::lang::String* path, ::java::lang::String* query, ::java::lang::String* ref)
{ /* stub */
    unimplemented_(u"void java::net::URL::set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* authority, ::java::lang::String* userInfo, ::java::lang::String* path, ::java::lang::String* query, ::java::lang::String* ref)");
}

void java::net::URL::setURLStreamHandlerFactory(URLStreamHandlerFactory* fac)
{ /* stub */
    clinit();
    unimplemented_(u"void java::net::URL::setURLStreamHandlerFactory(URLStreamHandlerFactory* fac)");
}

java::lang::String* java::net::URL::toExternalForm()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URL::toExternalForm()");
    return 0;
}

java::lang::String* java::net::URL::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::net::URL::toString()");
    return 0;
}

java::net::URI* java::net::URL::toURI()
{ /* stub */
    unimplemented_(u"java::net::URI* java::net::URL::toURI()");
    return 0;
}

/* private: void java::net::URL::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::net::URL::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URL", 12);
    return c;
}

java::lang::Class* java::net::URL::getClass0()
{
    return class_();
}

