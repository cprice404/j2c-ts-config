// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNumber.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Number.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigNumber
    : public AbstractConfigValue
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractConfigValue super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2LL) };

public: /* protected */
    ::java::lang::String* originalText {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText);

public:
    ::java::lang::Number* unwrapped() = 0;

public: /* package */
    ::java::lang::String* transformToString() override;
    virtual int32_t intValueRangeChecked(::java::lang::String* path);

public: /* protected */
    virtual int64_t longValue() = 0;
    virtual double doubleValue() = 0;

private:
    bool isWhole();

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* package */
    static ConfigNumber* newNumber(::com::typesafe::config::ConfigOrigin* origin, int64_t number, ::java::lang::String* originalText);
    static ConfigNumber* newNumber(::com::typesafe::config::ConfigOrigin* origin, double number, ::java::lang::String* originalText);

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

    // Generated

public: /* protected */
    ConfigNumber(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* originalText);
protected:
    ConfigNumber(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
