// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncludeContext.java

#pragma once

#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <com/typesafe/config/ConfigIncludeContext.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleIncludeContext
    : public virtual ::java::lang::Object
    , public virtual ::com::typesafe::config::ConfigIncludeContext
{

public:
    typedef ::java::lang::Object super;

private:
    Parseable* parseable {  };
protected:
    void ctor(Parseable* parseable);

public: /* package */
    virtual SimpleIncludeContext* withParseable(Parseable* parseable);

public:
    ::com::typesafe::config::ConfigParseable* relativeTo(::java::lang::String* filename) override;
    ::com::typesafe::config::ConfigParseOptions* parseOptions() override;

    // Generated

public: /* package */
    SimpleIncludeContext(Parseable* parseable);
protected:
    SimpleIncludeContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
