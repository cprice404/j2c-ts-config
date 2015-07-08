// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java
#include <com/typesafe/config/impl/SerializedConfigValue_FieldOut.hpp>

#include <com/typesafe/config/impl/SerializedConfigValue_SerializedField.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/DataOutputStream.hpp>

com::typesafe::config::impl::SerializedConfigValue_FieldOut::SerializedConfigValue_FieldOut(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SerializedConfigValue_FieldOut::SerializedConfigValue_FieldOut(SerializedConfigValue_SerializedField* code) 
    : SerializedConfigValue_FieldOut(*static_cast< ::default_init_tag* >(0))
{
    ctor(code);
}

void com::typesafe::config::impl::SerializedConfigValue_FieldOut::ctor(SerializedConfigValue_SerializedField* code)
{
    super::ctor();
    this->code = code;
    this->bytes = new ::java::io::ByteArrayOutputStream();
    this->data = new ::java::io::DataOutputStream(bytes);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue_FieldOut::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SerializedConfigValue.FieldOut", 55);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue_FieldOut::getClass0()
{
    return class_();
}

