// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java
#include <com/typesafe/config/impl/SerializedConfigValue_SerializedValueType.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/ConfigDouble.hpp>
#include <com/typesafe/config/impl/ConfigInt.hpp>
#include <com/typesafe/config/impl/ConfigLong.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
}  // namespace lang

namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
}  // namespace lang
}  // namespace java

namespace com {
namespace typesafe {
namespace config {
namespace impl {
typedef ::SubArray< ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType, ::java::lang::EnumArray > SerializedConfigValue_SerializedValueTypeArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::SerializedConfigValue_SerializedValueType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::SerializedConfigValue_SerializedValueType(::java::lang::String* name, int ordinal, ::com::typesafe::config::ConfigValueType* configType) 
    : SerializedConfigValue_SerializedValueType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, configType);
}

com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::NULL_ = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"NULL_"_j, 0, ::com::typesafe::config::ConfigValueType::NULL_);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::BOOLEAN = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"BOOLEAN"_j, 1, ::com::typesafe::config::ConfigValueType::BOOLEAN);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::INT = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"INT"_j, 2, ::com::typesafe::config::ConfigValueType::NUMBER);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::LONG = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"LONG"_j, 3, ::com::typesafe::config::ConfigValueType::NUMBER);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::DOUBLE = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"DOUBLE"_j, 4, ::com::typesafe::config::ConfigValueType::NUMBER);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::STRING = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"STRING"_j, 5, ::com::typesafe::config::ConfigValueType::STRING);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::LIST = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"LIST"_j, 6, ::com::typesafe::config::ConfigValueType::LIST);
com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::OBJECT = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedValueType(u"OBJECT"_j, 7, ::com::typesafe::config::ConfigValueType::OBJECT);
void com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::ctor(::java::lang::String* name, int ordinal, ::com::typesafe::config::ConfigValueType* configType)
{
    super::ctor(name, ordinal);
    this->configType = configType;
}

com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::forInt(int32_t b)
{
    clinit();
    if(b < npc(values())->length)
        return (*values())[b];
    else
        return nullptr;
}

com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::forValue(::com::typesafe::config::ConfigValue* value)
{
    clinit();
    auto t = npc(value)->valueType();
    if(t == ::com::typesafe::config::ConfigValueType::NUMBER) {
        if(dynamic_cast< ConfigInt* >(value) != nullptr)
            return INT;
        else if(dynamic_cast< ConfigLong* >(value) != nullptr)
            return LONG;
        else if(dynamic_cast< ConfigDouble* >(value) != nullptr)
            return DOUBLE;

    } else {
        for(auto st : *npc(values())) {
            if(npc(st)->configType == t)
                return st;

        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(::java::lang::StringBuilder().append(u"don't know how to serialize "_j)->append(static_cast< ::java::lang::Object* >(value))->toString());
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SerializedConfigValue.SerializedValueType", 66);
    return c;
}

com::typesafe::config::impl::SerializedConfigValue_SerializedValueType* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::valueOf(::java::lang::String* a0)
{
    if(BOOLEAN->toString()->equals(a0))
        return BOOLEAN;
    if(DOUBLE->toString()->equals(a0))
        return DOUBLE;
    if(INT->toString()->equals(a0))
        return INT;
    if(LIST->toString()->equals(a0))
        return LIST;
    if(LONG->toString()->equals(a0))
        return LONG;
    if(NULL_->toString()->equals(a0))
        return NULL_;
    if(OBJECT->toString()->equals(a0))
        return OBJECT;
    if(STRING->toString()->equals(a0))
        return STRING;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::SerializedConfigValue_SerializedValueTypeArray* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::values()
{
    return new com::typesafe::config::impl::SerializedConfigValue_SerializedValueTypeArray({
        BOOLEAN,
        DOUBLE,
        INT,
        LIST,
        LONG,
        NULL_,
        OBJECT,
        STRING,
    });
}

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue_SerializedValueType::getClass0()
{
    return class_();
}

