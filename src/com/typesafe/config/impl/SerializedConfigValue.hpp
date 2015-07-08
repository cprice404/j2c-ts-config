// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/io/Externalizable.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SerializedConfigValue
    : public AbstractConfigValue
    , public virtual ::java::io::Externalizable
{

public:
    typedef AbstractConfigValue super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    ::com::typesafe::config::ConfigValue* value {  };
    bool wasConfig {  };
protected:
    void ctor();
    void ctor(::com::typesafe::config::ConfigValue* value);
    void ctor(::com::typesafe::config::Config* conf);

private:
    ::java::lang::Object* readResolve() /* throws(ObjectStreamException) */;
    static void writeOriginField(::java::io::DataOutput* out, SerializedConfigValue_SerializedField* code, ::java::lang::Object* v) /* throws(IOException) */;

public: /* package */
    static void writeOrigin(::java::io::DataOutput* out, SimpleConfigOrigin* origin, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */;
    static SimpleConfigOrigin* readOrigin(::java::io::DataInput* in, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */;

private:
    static void writeValueData(::java::io::DataOutput* out, ::com::typesafe::config::ConfigValue* value) /* throws(IOException) */;
    static AbstractConfigValue* readValueData(::java::io::DataInput* in, SimpleConfigOrigin* origin) /* throws(IOException) */;
    static void writeValue(::java::io::DataOutput* out, ::com::typesafe::config::ConfigValue* value, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */;
    static AbstractConfigValue* readValue(::java::io::DataInput* in, SimpleConfigOrigin* baseOrigin) /* throws(IOException) */;
    static void writeField(::java::io::DataOutput* out, SerializedConfigValue_FieldOut* field) /* throws(IOException) */;
    static void writeEndMarker(::java::io::DataOutput* out) /* throws(IOException) */;
    static SerializedConfigValue_SerializedField* readCode(::java::io::DataInput* in) /* throws(IOException) */;
    static void skipField(::java::io::DataInput* in) /* throws(IOException) */;

public:
    void writeExternal(::java::io::ObjectOutput* out) /* throws(IOException) */ override;
    void readExternal(::java::io::ObjectInput* in) /* throws(IOException, ClassNotFoundException) */ override;

private:
    static ::com::typesafe::config::ConfigException* shouldNotBeUsed();

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::lang::Object* unwrapped() override;

public: /* protected */
    SerializedConfigValue* newCopy(::com::typesafe::config::ConfigOrigin* origin) override;

public:
    ::java::lang::String* toString() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated
    SerializedConfigValue();

public: /* package */
    SerializedConfigValue(::com::typesafe::config::ConfigValue* value);
    SerializedConfigValue(::com::typesafe::config::Config* conf);
protected:
    SerializedConfigValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SerializedConfigValue_SerializedField;
    friend class SerializedConfigValue_SerializedValueType;
    friend class SerializedConfigValue_FieldOut;
};
