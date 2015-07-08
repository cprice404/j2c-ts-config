// Generated from /config/src/main/java/com/typesafe/config/impl/PathBuilder.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::PathBuilder final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Stack* keys {  };
    Path* result_ {  };
protected:
    void ctor();

private:
    void checkCanAppend();

public: /* package */
    void appendKey(::java::lang::String* key);
    void appendPath(Path* path);
    Path* result();

    // Generated
    PathBuilder();
protected:
    PathBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
