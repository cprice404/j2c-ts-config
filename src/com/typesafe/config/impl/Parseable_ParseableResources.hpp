// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/net/fwd-config.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/impl/Parseable_Relativizer.hpp>
#include <com/typesafe/config/impl/AbstractConfigObject.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Parseable_ParseableResources final
    : public Parseable
    , public Parseable_Relativizer
{

public:
    typedef Parseable super;

private:
    ::java::lang::String* resource {  };
protected:
    void ctor(::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options);

public: /* protected */
    ::java::io::Reader* reader() /* throws(IOException) */ override;
    AbstractConfigObject* rawParseValue(::com::typesafe::config::ConfigOrigin* origin, ::com::typesafe::config::ConfigParseOptions* finalOptions) /* throws(IOException) */ override;

public: /* package */
    ::com::typesafe::config::ConfigSyntax* guessSyntax() override;
    static ::java::lang::String* parent(::java::lang::String* resource);

public:
    ::com::typesafe::config::ConfigParseable* relativeTo(::java::lang::String* sibling) override;

public: /* protected */
    ::com::typesafe::config::ConfigOrigin* createOrigin() override;

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    Parseable_ParseableResources(::java::lang::String* resource, ::com::typesafe::config::ConfigParseOptions* options);
protected:
    Parseable_ParseableResources(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    virtual ::java::io::Reader* reader(::com::typesafe::config::ConfigParseOptions* options);

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
    friend class Parseable_ParseableResourceURL;
    friend class Parseable_ParseableProperties;
};
