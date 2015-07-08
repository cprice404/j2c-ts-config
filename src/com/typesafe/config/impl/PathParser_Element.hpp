// Generated from /config/src/main/java/com/typesafe/config/impl/PathParser.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::PathParser_Element
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::StringBuilder* sb {  };
    bool canBeEmpty {  };
protected:
    void ctor(::java::lang::String* initial, bool canBeEmpty);

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    PathParser_Element(::java::lang::String* initial, bool canBeEmpty);
protected:
    PathParser_Element(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PathParser;
};
