// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigLong.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/ConfigNumber.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Long.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigLong final
    : public ConfigNumber
    , public virtual ::java::io::Serializable
{

public:
    typedef ConfigNumber super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2LL) };
    int64_t value {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, int64_t value, ::java::lang::String* originalText);

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::Long* unwrapped() override;

public: /* package */
    ::java::lang::String* transformToString() override;

public: /* protected */
    int64_t longValue() override;
    double doubleValue() override;
    ConfigLong* newCopy(::com::typesafe::config::ConfigOrigin* origin) override;

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

    // Generated

public: /* package */
    ConfigLong(::com::typesafe::config::ConfigOrigin* origin, int64_t value, ::java::lang::String* originalText);
protected:
    ConfigLong(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
