// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/util/LinkedList.hpp>

struct default_init_tag;

class com::typesafe::config::impl::Parseable_1
    : public ::java::lang::ThreadLocal
{

public:
    typedef ::java::lang::ThreadLocal super;

public: /* protected */
    ::java::util::LinkedList* initialValue() override;

    // Generated

public:
    Parseable_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Parseable;
    friend class Parseable_Relativizer;
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
