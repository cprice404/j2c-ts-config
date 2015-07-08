// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ResolveSource_Node final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::Object* value {  };
    ResolveSource_Node* next {  };
protected:
    void ctor(::java::lang::Object* value, ResolveSource_Node* next);
    void ctor(::java::lang::Object* value);

public: /* package */
    ResolveSource_Node* prepend(::java::lang::Object* value);
    ::java::lang::Object* head();
    ResolveSource_Node* tail();
    ::java::lang::Object* last();
    ResolveSource_Node* reverse();

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    ResolveSource_Node(::java::lang::Object* value, ResolveSource_Node* next);
    ResolveSource_Node(::java::lang::Object* value);
protected:
    ResolveSource_Node(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ResolveSource;
    friend class ResolveSource_ValueWithPath;
    friend class ResolveSource_ResultWithPath;
};
