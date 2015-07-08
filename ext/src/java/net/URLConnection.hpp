// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/reflect/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/security/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <sun/net/www/fwd-config.hpp>
#include <java/lang/Object.hpp>

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

class java::net::URLConnection
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    bool allowUserInteraction {  };

private:
    int32_t connectTimeout {  };

public: /* protected */
    bool connected {  };

private:
    static ::java::lang::String* contentClassPrefix_;
    static ::java::lang::String* contentPathProp_;
    static bool defaultAllowUserInteraction_;
    static bool defaultUseCaches_;

public: /* protected */
    bool doInput {  };
    bool doOutput {  };

private:
    static ContentHandlerFactory* factory_;
    static FileNameMap* fileNameMap_;
    static bool fileNameMapLoaded_;
    static ::java::util::Hashtable* handlers_;

public: /* protected */
    int64_t ifModifiedSince {  };

private:
    int32_t readTimeout {  };
    ::sun::net::www::MessageHeader* requests {  };

public: /* protected */
    URL* url {  };
    bool useCaches {  };

protected:
    void ctor(URL* url);

public:
    virtual void addRequestProperty(::java::lang::String* key, ::java::lang::String* value);
    /*static bool checkfpx(::java::io::InputStream* is); (private) */
    virtual void connect() = 0;
    virtual bool getAllowUserInteraction();
    virtual int32_t getConnectTimeout();
    virtual ::java::lang::Object* getContent();
    virtual ::java::lang::Object* getContent(::java::lang::ClassArray* classes);
    virtual ::java::lang::String* getContentEncoding();

public: /* package */
    virtual ContentHandler* getContentHandler();
    /*::java::lang::String* getContentHandlerPkgPrefixes(); (private) */

public:
    virtual int32_t getContentLength();
    virtual int64_t getContentLengthLong();
    virtual ::java::lang::String* getContentType();
    virtual int64_t getDate();
    static bool getDefaultAllowUserInteraction();
    static ::java::lang::String* getDefaultRequestProperty(::java::lang::String* key);
    virtual bool getDefaultUseCaches();
    virtual bool getDoInput();
    virtual bool getDoOutput();
    virtual int64_t getExpiration();
    static FileNameMap* getFileNameMap();
    virtual ::java::lang::String* getHeaderField(::java::lang::String* name);
    virtual ::java::lang::String* getHeaderField(int32_t n);
    virtual int64_t getHeaderFieldDate(::java::lang::String* name, int64_t Default);
    virtual int32_t getHeaderFieldInt(::java::lang::String* name, int32_t Default);
    virtual ::java::lang::String* getHeaderFieldKey(int32_t n);
    virtual int64_t getHeaderFieldLong(::java::lang::String* name, int64_t Default);
    virtual ::java::util::Map* getHeaderFields();
    virtual int64_t getIfModifiedSince();
    virtual ::java::io::InputStream* getInputStream();
    virtual int64_t getLastModified();
    virtual ::java::io::OutputStream* getOutputStream();
    virtual ::java::security::Permission* getPermission();
    virtual int32_t getReadTimeout();
    virtual ::java::util::Map* getRequestProperties();
    virtual ::java::lang::String* getRequestProperty(::java::lang::String* key);
    virtual URL* getURL();
    virtual bool getUseCaches();
    static ::java::lang::String* guessContentTypeFromName(::java::lang::String* fname);
    static ::java::lang::String* guessContentTypeFromStream(::java::io::InputStream* is);
    /*ContentHandler* lookupContentHandlerClassFor(::java::lang::String* contentType); (private) */
    /*static int32_t readBytes(::int32_tArray* c, int32_t len, ::java::io::InputStream* is); (private) */
    virtual void setAllowUserInteraction(bool allowuserinteraction);
    virtual void setConnectTimeout(int32_t timeout);
    static void setContentHandlerFactory(ContentHandlerFactory* fac);
    static void setDefaultAllowUserInteraction(bool defaultallowuserinteraction);
    static void setDefaultRequestProperty(::java::lang::String* key, ::java::lang::String* value);
    virtual void setDefaultUseCaches(bool defaultusecaches);
    virtual void setDoInput(bool doinput);
    virtual void setDoOutput(bool dooutput);
    static void setFileNameMap(FileNameMap* map);
    virtual void setIfModifiedSince(int64_t ifmodifiedsince);
    virtual void setReadTimeout(int32_t timeout);
    virtual void setRequestProperty(::java::lang::String* key, ::java::lang::String* value);
    virtual void setUseCaches(bool usecaches);
    /*static int64_t skipForward(::java::io::InputStream* is, int64_t toSkip); (private) */
    /*::java::lang::String* stripOffParameters(::java::lang::String* contentType); (private) */
    ::java::lang::String* toString() override;
    /*::java::lang::String* typeToPackageName(::java::lang::String* contentType); (private) */

    // Generated

public: /* protected */
    URLConnection(URL* url);
protected:
    URLConnection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::lang::String*& contentClassPrefix();
    static ::java::lang::String*& contentPathProp();
    static bool& defaultAllowUserInteraction();
    static bool& defaultUseCaches();

public: /* package */
    static ContentHandlerFactory*& factory();

private:
    static FileNameMap*& fileNameMap();
    static bool& fileNameMapLoaded();
    static ::java::util::Hashtable*& handlers();
    virtual ::java::lang::Class* getClass0();
};
