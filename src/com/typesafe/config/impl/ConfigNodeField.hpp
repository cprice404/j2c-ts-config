// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeField.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNodeField final
    : public AbstractConfigNode
{

public:
    typedef AbstractConfigNode super;

private:
    ::java::util::ArrayList* children {  };
protected:
    void ctor(::java::util::Collection* children);

public: /* protected */
    ::java::util::Collection* tokens() override;

public:
    ConfigNodeField* replaceValue(AbstractConfigNodeValue* newValue);
    AbstractConfigNodeValue* value();
    ConfigNodePath* path();

public: /* protected */
    Token* separator();
    ::java::util::List* comments();

    // Generated

public:
    ConfigNodeField(::java::util::Collection* children);
protected:
    ConfigNodeField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
