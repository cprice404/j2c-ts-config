// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java

#pragma once

#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SerializedConfigValue_FieldOut
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    SerializedConfigValue_SerializedField* code {  };
    ::java::io::ByteArrayOutputStream* bytes {  };
    ::java::io::DataOutput* data {  };
protected:
    void ctor(SerializedConfigValue_SerializedField* code);

    // Generated

public: /* package */
    SerializedConfigValue_FieldOut(SerializedConfigValue_SerializedField* code);
protected:
    SerializedConfigValue_FieldOut(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SerializedConfigValue;
    friend class SerializedConfigValue_SerializedField;
    friend class SerializedConfigValue_SerializedValueType;
};
