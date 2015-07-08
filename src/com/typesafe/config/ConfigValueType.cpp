// Generated from /config/src/main/java/com/typesafe/config/ConfigValueType.java
#include <com/typesafe/config/ConfigValueType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
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
typedef ::SubArray< ::com::typesafe::config::ConfigValueType, ::java::lang::EnumArray > ConfigValueTypeArray;
}  // namespace config
}  // namespace typesafe
}  // namespace com

com::typesafe::config::ConfigValueType::ConfigValueType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigValueType::ConfigValueType(::java::lang::String* name, int ordinal)
    : ConfigValueType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::OBJECT = new ::com::typesafe::config::ConfigValueType(u"OBJECT"_j, 0);
com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::LIST = new ::com::typesafe::config::ConfigValueType(u"LIST"_j, 1);
com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::NUMBER = new ::com::typesafe::config::ConfigValueType(u"NUMBER"_j, 2);
com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::BOOLEAN = new ::com::typesafe::config::ConfigValueType(u"BOOLEAN"_j, 3);
com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::NULL_ = new ::com::typesafe::config::ConfigValueType(u"NULL_"_j, 4);
com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::STRING = new ::com::typesafe::config::ConfigValueType(u"STRING"_j, 5);
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigValueType::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigValueType", 35);
    return c;
}

com::typesafe::config::ConfigValueType* com::typesafe::config::ConfigValueType::valueOf(::java::lang::String* a0)
{
    if(BOOLEAN->toString()->equals(a0))
        return BOOLEAN;
    if(LIST->toString()->equals(a0))
        return LIST;
    if(NULL_->toString()->equals(a0))
        return NULL_;
    if(NUMBER->toString()->equals(a0))
        return NUMBER;
    if(OBJECT->toString()->equals(a0))
        return OBJECT;
    if(STRING->toString()->equals(a0))
        return STRING;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::ConfigValueTypeArray* com::typesafe::config::ConfigValueType::values()
{
    return new com::typesafe::config::ConfigValueTypeArray({
        BOOLEAN,
        LIST,
        NULL_,
        NUMBER,
        OBJECT,
        STRING,
    });
}

java::lang::Class* com::typesafe::config::ConfigValueType::getClass0()
{
    return class_();
}

