// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigBoolean.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Boolean.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigBoolean final
    : public AbstractConfigValue
    , public ::java::io::Serializable
{

public:
    typedef AbstractConfigValue super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2LL) };
    bool value {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, bool value);

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::Boolean* unwrapped() override;

public: /* package */
    ::java::lang::String* transformToString() override;

public: /* protected */
    ConfigBoolean* newCopy(::com::typesafe::config::ConfigOrigin* origin) override;

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

    // Generated

public: /* package */
    ConfigBoolean(::com::typesafe::config::ConfigOrigin* origin, bool value);
protected:
    ConfigBoolean(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
