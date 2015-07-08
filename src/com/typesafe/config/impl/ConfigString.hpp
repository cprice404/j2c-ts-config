// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigString.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/String.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ConfigString
    : public AbstractConfigValue
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractConfigValue super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2LL) };

public: /* protected */
    ::java::lang::String* value {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value);

public: /* package */
    virtual bool wasQuoted();

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::String* unwrapped() override;

public: /* package */
    ::java::lang::String* transformToString() override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) override;

    // Generated
    ConfigString(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* value);
protected:
    ConfigString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

public:
    ::java::lang::String* render();
    ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConfigString_Quoted;
    friend class ConfigString_Unquoted;
};
