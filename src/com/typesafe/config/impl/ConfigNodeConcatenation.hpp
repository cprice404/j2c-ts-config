// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeConcatenation.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeConcatenation final
    : public ConfigNodeComplexValue
{

public:
    typedef ConfigNodeComplexValue super;
protected:
    void ctor(::java::util::Collection* children);

public: /* protected */
    ConfigNodeConcatenation* newNode(::java::util::Collection* nodes) override;

    // Generated

public: /* package */
    ConfigNodeConcatenation(::java::util::Collection* children);
protected:
    ConfigNodeConcatenation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
