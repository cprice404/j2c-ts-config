// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <com/typesafe/config/parser/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/ConfigParseable.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Parseable
    : public virtual ::java::lang::Object
    , public virtual ::com::typesafe::config::ConfigParseable
{

public:
    typedef ::java::lang::Object super;

private:
    ::com::typesafe::config::ConfigIncludeContext* includeContext_ {  };
    ::com::typesafe::config::ConfigParseOptions* initialOptions {  };
    ::com::typesafe::config::ConfigOrigin* initialOrigin {  };
    static ::java::lang::ThreadLocal* parseStack_;
    static constexpr int32_t MAX_INCLUDE_DEPTH { int32_t(50) };
protected:
    void ctor();

private:
    ::com::typesafe::config::ConfigParseOptions* fixupOptions(::com::typesafe::config::ConfigParseOptions* baseOptions);

public: /* protected */
    virtual void postConstruct(::com::typesafe::config::ConfigParseOptions* baseOptions);
    virtual ::java::io::Reader* reader() /* throws(IOException) */ = 0;
    virtual ::java::io::Reader* reader(::com::typesafe::config::ConfigParseOptions* options) /* throws(IOException) */;
    static void trace(::java::lang::String* message);

public: /* package */
    virtual ::com::typesafe::config::ConfigSyntax* guessSyntax();
    virtual ::com::typesafe::config::ConfigSyntax* contentType();
    virtual ::com::typesafe::config::ConfigParseable* relativeTo(::java::lang::String* filename);
    virtual ::com::typesafe::config::ConfigIncludeContext* includeContext();
    static AbstractConfigObject* forceParsedToObject(::com::typesafe::config::ConfigValue* value);

public:
    ::com::typesafe::config::ConfigObject* parse(::com::typesafe::config::ConfigParseOptions* baseOptions) override;

public: /* package */
    AbstractConfigValue* parseValue(::com::typesafe::config::ConfigParseOptions* baseOptions);

private:
    AbstractConfigValue* parseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions);

public: /* package */
    ::com::typesafe::config::parser::ConfigDocument* parseDocument(::com::typesafe::config::ConfigParseOptions* baseOptions);

private:
    ::com::typesafe::config::parser::ConfigDocument* parseDocument(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions);

public: /* protected */
    virtual AbstractConfigValue* rawParseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */;

private:
    AbstractConfigValue* rawParseValue(::java::io::Reader* reader, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */;

public: /* protected */
    virtual ::com::typesafe::config::parser::ConfigDocument* rawParseDocument(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */;

private:
    ::com::typesafe::config::parser::ConfigDocument* rawParseDocument(::java::io::Reader* reader, ::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */;

public:
    virtual ::com::typesafe::config::ConfigObject* parse();
    virtual ::com::typesafe::config::parser::ConfigDocument* parseConfigDocument();

public: /* package */
    virtual AbstractConfigValue* parseValue();

public:
    ::com::typesafe::config::ConfigOrigin* origin() override;

public: /* protected */
    virtual ::com::typesafe::config::ConfigOrigin* createOrigin() = 0;

public:
    ::com::typesafe::config::ConfigParseOptions* options() override;
    ::java::lang::String* toString() override;

private:
    static ::com::typesafe::config::ConfigSyntax* syntaxFromExtension(::java::lang::String* name);
    static ::java::io::Reader* readerFromStream(::java::io::InputStream* input);
    static ::java::io::Reader* readerFromStream(::java::io::InputStream* input, ::java::lang::String* encoding);
    static ::java::io::Reader* doNotClose(::java::io::Reader* input);

public: /* package */
    static ::java::net::URL* relativeTo(::java::net::URL* url, ::java::lang::String* filename);
    static ::java::io::File* relativeTo(::java::io::File* file, ::java::lang::String* filename);

public:
    static Parseable* newNotFound(::java::lang::String* whatNotFound, ::java::lang::String* message, ::com::typesafe::config::ConfigParseOptions* options);
    static Parseable* newReader(::java::io::Reader* reader, ::com::typesafe::config::ConfigParseOptions* options);
    static Parseable* newString(::java::lang::String* input, ::com::typesafe::config::ConfigParseOptions* options);

private:
    static ::java::lang::String* jsonContentType_;
    static ::java::lang::String* propertiesContentType_;
    static ::java::lang::String* hoconContentType_;

public:
    static Parseable* newURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options);
    static Parseable* newFile(::java::io::File* input, ::com::typesafe::config::ConfigParseOptions* options);

private:
    static Parseable* newResourceURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options, ::java::lang::String* resource, Parseable_Relativizer* relativizer);

public:
    static Parseable* newResources(::java::lang::Class* klass, ::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options);

private:
    static ::java::lang::String* convertResourceName(::java::lang::Class* klass, ::java::lang::String* resource);

public:
    static Parseable* newResources(::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options);
    static Parseable* newProperties(::java::util::Properties* properties, ::com::typesafe::config::ConfigParseOptions* options);

    // Generated

public: /* protected */
    Parseable();
protected:
    Parseable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::ThreadLocal*& parseStack();
    static ::java::lang::String*& jsonContentType();
    static ::java::lang::String*& propertiesContentType();
    static ::java::lang::String*& hoconContentType();
    virtual ::java::lang::Class* getClass0();
    friend class Parseable_Relativizer;
    friend class Parseable_1;
    friend class Parseable_doNotClose_2;
    friend class Parseable_ParseableNotFound;
    friend class Parseable_ParseableReader;
    friend class Parseable_ParseableString;
    friend class Parseable_ParseableURL;
    friend class Parseable_ParseableFile;
    friend class Parseable_ParseableResourceURL;
    friend class Parseable_ParseableResources;
    friend class Parseable_ParseableProperties;
};
