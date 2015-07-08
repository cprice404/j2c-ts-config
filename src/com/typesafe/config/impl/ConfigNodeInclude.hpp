// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeInclude.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeInclude final
    : public AbstractConfigNode
{

public:
    typedef AbstractConfigNode super;

private:
    ::java::util::ArrayList* children_ {  };
    ConfigIncludeKind* kind_ {  };
protected:
    void ctor(::java::util::Collection* children, ConfigIncludeKind* kind);

public:
    ::java::util::Collection* children();

public: /* protected */
    ::java::util::Collection* tokens() override;
    ConfigIncludeKind* kind();
    ::java::lang::String* name();

    // Generated

public: /* package */
    ConfigNodeInclude(::java::util::Collection* children, ConfigIncludeKind* kind);
protected:
    ConfigNodeInclude(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
