// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

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

struct default_init_tag;

class java::net::URL final
    : public virtual ::java::lang::Object
    , public ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* authority {  };
    static URLStreamHandlerFactory* factory_;
    ::java::lang::String* file {  };

public: /* package */
    URLStreamHandler* handler {  };

private:
    static ::java::util::Hashtable* handlers_;
    int32_t hashCode_ {  };
    ::java::lang::String* host {  };

public: /* package */
    InetAddress* hostAddress {  };

private:
    ::java::lang::String* path {  };
    int32_t port {  };
    ::java::lang::String* protocol {  };
    static ::java::lang::String* protocolPathProp_;
    ::java::lang::String* query {  };
    ::java::lang::String* ref {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-7627629688361524110LL) };

private:
    static ::java::lang::Object* streamHandlerLock_;
    ::java::lang::String* userInfo {  };

protected:
    void ctor(::java::lang::String* spec);
    void ctor(URL* context, ::java::lang::String* spec);
    void ctor(::java::lang::String* protocol, ::java::lang::String* host, ::java::lang::String* file);
    void ctor(URL* context, ::java::lang::String* spec, URLStreamHandler* handler);
    void ctor(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file);
    void ctor(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, URLStreamHandler* handler);
    /*void checkSpecifyHandler(::java::lang::SecurityManager* sm); (private) */

public:
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::String* getAuthority();
    ::java::lang::Object* getContent();
    ::java::lang::Object* getContent(::java::lang::ClassArray* classes);
    int32_t getDefaultPort();
    ::java::lang::String* getFile();
    ::java::lang::String* getHost();
    ::java::lang::String* getPath();
    int32_t getPort();
    ::java::lang::String* getProtocol();
    ::java::lang::String* getQuery();
    ::java::lang::String* getRef();

public: /* package */
    static URLStreamHandler* getURLStreamHandler(::java::lang::String* protocol);

public:
    ::java::lang::String* getUserInfo();
    int32_t hashCode() override;
    /*bool isValidProtocol(::java::lang::String* protocol); (private) */
    URLConnection* openConnection();
    URLConnection* openConnection(Proxy* proxy);
    ::java::io::InputStream* openStream();
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    bool sameFile(URL* other);

public: /* package */
    void set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, ::java::lang::String* ref);
    void set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* authority, ::java::lang::String* userInfo, ::java::lang::String* path, ::java::lang::String* query, ::java::lang::String* ref);

public:
    static void setURLStreamHandlerFactory(URLStreamHandlerFactory* fac);
    ::java::lang::String* toExternalForm();
    ::java::lang::String* toString() override;
    URI* toURI();
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    URL(::java::lang::String* spec);
    URL(URL* context, ::java::lang::String* spec);
    URL(::java::lang::String* protocol, ::java::lang::String* host, ::java::lang::String* file);
    URL(URL* context, ::java::lang::String* spec, URLStreamHandler* handler);
    URL(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file);
    URL(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, URLStreamHandler* handler);
protected:
    URL(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static URLStreamHandlerFactory*& factory();
    static ::java::util::Hashtable*& handlers();

private:
    static ::java::lang::String*& protocolPathProp();
    static ::java::lang::Object*& streamHandlerLock();
    virtual ::java::lang::Class* getClass0();
};
