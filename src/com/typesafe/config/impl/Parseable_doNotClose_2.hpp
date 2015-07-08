// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/io/FilterReader.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Parseable_doNotClose_2
    : public ::java::io::FilterReader
{

public:
    typedef ::java::io::FilterReader super;
    void close() override;

    // Generated

public: /* protected */
    Parseable_doNotClose_2(::java::io::Reader* in);

public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Parseable;
    friend class Parseable_Relativizer;
    friend class Parseable_1;
    friend class Parseable_ParseableNotFound;
    friend class Parseable_ParseableReader;
    friend class Parseable_ParseableString;
    friend class Parseable_ParseableURL;
    friend class Parseable_ParseableFile;
    friend class Parseable_ParseableResourceURL;
    friend class Parseable_ParseableResources;
    friend class Parseable_ParseableProperties;
};
