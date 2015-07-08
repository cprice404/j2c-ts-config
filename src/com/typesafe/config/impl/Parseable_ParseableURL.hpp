// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Parseable_ParseableURL
    : public Parseable
{

public:
    typedef Parseable super;

public: /* protected */
    ::java::net::URL* input {  };

private:
    ::java::lang::String* contentType_ {  };
protected:
    void ctor(::java::net::URL* input);
    void ctor(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options);

public: /* protected */
    ::java::io::Reader* reader() /* throws(IOException) */ override;

private:
    static ::java::lang::String* acceptContentType(::com::typesafe::config::ConfigParseOptions* options);

public: /* protected */
    ::java::io::Reader* reader(::com::typesafe::config::ConfigParseOptions* options) /* throws(IOException) */ override;

public: /* package */
    ::com::typesafe::config::ConfigSyntax* guessSyntax() override;
    ::com::typesafe::config::ConfigSyntax* contentType() override;
    ::com::typesafe::config::ConfigParseable* relativeTo(::java::lang::String* filename) override;

public: /* protected */
    ::com::typesafe::config::ConfigOrigin* createOrigin() override;

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    Parseable_ParseableURL(::java::net::URL* input);

public: /* package */
    Parseable_ParseableURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options);
protected:
    Parseable_ParseableURL(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public: /* package */
    static ::java::net::URL* relativeTo(::java::net::URL* url, ::java::lang::String* filename);
    static ::java::io::File* relativeTo(::java::io::File* file, ::java::lang::String* filename);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Parseable;
    friend class Parseable_Relativizer;
    friend class Parseable_1;
    friend class Parseable_doNotClose_2;
    friend class Parseable_ParseableNotFound;
    friend class Parseable_ParseableReader;
    friend class Parseable_ParseableString;
    friend class Parseable_ParseableFile;
    friend class Parseable_ParseableResourceURL;
    friend class Parseable_ParseableResources;
    friend class Parseable_ParseableProperties;
};
