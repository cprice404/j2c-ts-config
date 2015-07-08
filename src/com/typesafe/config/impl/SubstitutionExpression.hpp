// Generated from /config/src/main/java/com/typesafe/config/impl/SubstitutionExpression.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SubstitutionExpression final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Path* path_ {  };
    bool optional_ {  };
protected:
    void ctor(Path* path, bool optional);

public: /* package */
    Path* path();
    bool optional();
    SubstitutionExpression* changePath(Path* newPath);

public:
    ::java::lang::String* toString() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

public: /* package */
    SubstitutionExpression(Path* path, bool optional);
protected:
    SubstitutionExpression(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
