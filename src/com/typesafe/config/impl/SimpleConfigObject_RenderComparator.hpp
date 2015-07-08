// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigObject_RenderComparator final
    : public virtual ::java::lang::Object
    , public ::java::util::Comparator
    , public ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    static bool isAllDigits(::java::lang::String* s);

public:
    int32_t compare(::java::lang::String* a, ::java::lang::String* b);

    // Generated
    SimpleConfigObject_RenderComparator();
protected:
    SimpleConfigObject_RenderComparator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigObject;
    friend class SimpleConfigObject_ResolveModifier;
    friend class SimpleConfigObject_relativized_1;
};
