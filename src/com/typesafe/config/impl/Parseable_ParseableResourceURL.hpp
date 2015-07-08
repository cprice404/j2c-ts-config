// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <com/typesafe/config/impl/Parseable_ParseableURL.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Parseable_ParseableResourceURL final
    : public Parseable_ParseableURL
{

public:
    typedef Parseable_ParseableURL super;

private:
    Parseable_Relativizer* relativizer {  };
    ::java::lang::String* resource {  };
protected:
    void ctor(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options, ::java::lang::String* resource, Parseable_Relativizer* relativizer);

public: /* protected */
    ::com::typesafe::config::ConfigOrigin* createOrigin() override;

public: /* package */
    ::com::typesafe::config::ConfigParseable* relativeTo(::java::lang::String* filename) override;

    // Generated
    Parseable_ParseableResourceURL(::java::net::URL* input, ::com::typesafe::config::ConfigParseOptions* options, ::java::lang::String* resource, Parseable_Relativizer* relativizer);
protected:
    Parseable_ParseableResourceURL(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

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
    friend class Parseable_ParseableURL;
    friend class Parseable_ParseableFile;
    friend class Parseable_ParseableResources;
    friend class Parseable_ParseableProperties;
};
