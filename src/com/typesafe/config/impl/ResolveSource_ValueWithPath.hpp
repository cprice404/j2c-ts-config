// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ResolveSource_ValueWithPath final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    AbstractConfigValue* value {  };
    ResolveSource_Node* pathFromRoot {  };
protected:
    void ctor(AbstractConfigValue* value, ResolveSource_Node* pathFromRoot);

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    ResolveSource_ValueWithPath(AbstractConfigValue* value, ResolveSource_Node* pathFromRoot);
protected:
    ResolveSource_ValueWithPath(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ResolveSource;
    friend class ResolveSource_Node;
    friend class ResolveSource_ResultWithPath;
};
