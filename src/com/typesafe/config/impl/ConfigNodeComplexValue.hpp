// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeComplexValue.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeComplexValue
    : public AbstractConfigNodeValue
{

public:
    typedef AbstractConfigNodeValue super;

public: /* protected */
    ::java::util::ArrayList* children_ {  };
protected:
    void ctor(::java::util::Collection* children);

public:
    ::java::util::Collection* children();

public: /* protected */
    ::java::util::Collection* tokens() override;
    virtual ConfigNodeComplexValue* indentText(AbstractConfigNode* indentation);

public: /* package */
    virtual ConfigNodeComplexValue* newNode(::java::util::Collection* nodes) = 0;

    // Generated
    ConfigNodeComplexValue(::java::util::Collection* children);
protected:
    ConfigNodeComplexValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
