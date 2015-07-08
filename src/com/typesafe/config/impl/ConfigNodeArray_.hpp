// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeArray.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeArray_ final
    : public ConfigNodeComplexValue
{

public:
    typedef ConfigNodeComplexValue super;
protected:
    void ctor(::java::util::Collection* children);

public: /* protected */
    ConfigNodeArray_* newNode(::java::util::Collection* nodes) override;

    // Generated

public: /* package */
    ConfigNodeArray_(::java::util::Collection* children);
protected:
    ConfigNodeArray_(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
