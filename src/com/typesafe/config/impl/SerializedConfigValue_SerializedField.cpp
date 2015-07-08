// Generated from /config/src/main/java/com/typesafe/config/impl/SerializedConfigValue.java
#include <com/typesafe/config/impl/SerializedConfigValue_SerializedField.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
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
namespace impl {
typedef ::SubArray< ::com::typesafe::config::impl::SerializedConfigValue_SerializedField, ::java::lang::EnumArray > SerializedConfigValue_SerializedFieldArray;
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
com::typesafe::config::impl::SerializedConfigValue_SerializedField::SerializedConfigValue_SerializedField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SerializedConfigValue_SerializedField::SerializedConfigValue_SerializedField(::java::lang::String* name, int ordinal)
    : SerializedConfigValue_SerializedField(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::UNKNOWN = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"UNKNOWN"_j, 0);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::END_MARKER = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"END_MARKER"_j, 1);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ROOT_VALUE = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ROOT_VALUE"_j, 2);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ROOT_WAS_CONFIG = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ROOT_WAS_CONFIG"_j, 3);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::VALUE_DATA = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"VALUE_DATA"_j, 4);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::VALUE_ORIGIN = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"VALUE_ORIGIN"_j, 5);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_DESCRIPTION = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_DESCRIPTION"_j, 6);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_LINE_NUMBER = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_LINE_NUMBER"_j, 7);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_END_LINE_NUMBER = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_END_LINE_NUMBER"_j, 8);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_TYPE = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_TYPE"_j, 9);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_URL = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_URL"_j, 10);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_COMMENTS = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_COMMENTS"_j, 11);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_NULL_URL = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_NULL_URL"_j, 12);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_NULL_COMMENTS = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_NULL_COMMENTS"_j, 13);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_RESOURCE = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_RESOURCE"_j, 14);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::ORIGIN_NULL_RESOURCE = new ::com::typesafe::config::impl::SerializedConfigValue_SerializedField(u"ORIGIN_NULL_RESOURCE"_j, 15);
com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::forInt(int32_t b)
{
    clinit();
    if(b < npc(values())->length)
        return (*values())[b];
    else
        return UNKNOWN;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue_SerializedField::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SerializedConfigValue.SerializedField", 62);
    return c;
}

com::typesafe::config::impl::SerializedConfigValue_SerializedField* com::typesafe::config::impl::SerializedConfigValue_SerializedField::valueOf(::java::lang::String* a0)
{
    if(END_MARKER->toString()->equals(a0))
        return END_MARKER;
    if(ORIGIN_COMMENTS->toString()->equals(a0))
        return ORIGIN_COMMENTS;
    if(ORIGIN_DESCRIPTION->toString()->equals(a0))
        return ORIGIN_DESCRIPTION;
    if(ORIGIN_END_LINE_NUMBER->toString()->equals(a0))
        return ORIGIN_END_LINE_NUMBER;
    if(ORIGIN_LINE_NUMBER->toString()->equals(a0))
        return ORIGIN_LINE_NUMBER;
    if(ORIGIN_NULL_COMMENTS->toString()->equals(a0))
        return ORIGIN_NULL_COMMENTS;
    if(ORIGIN_NULL_RESOURCE->toString()->equals(a0))
        return ORIGIN_NULL_RESOURCE;
    if(ORIGIN_NULL_URL->toString()->equals(a0))
        return ORIGIN_NULL_URL;
    if(ORIGIN_RESOURCE->toString()->equals(a0))
        return ORIGIN_RESOURCE;
    if(ORIGIN_TYPE->toString()->equals(a0))
        return ORIGIN_TYPE;
    if(ORIGIN_URL->toString()->equals(a0))
        return ORIGIN_URL;
    if(ROOT_VALUE->toString()->equals(a0))
        return ROOT_VALUE;
    if(ROOT_WAS_CONFIG->toString()->equals(a0))
        return ROOT_WAS_CONFIG;
    if(UNKNOWN->toString()->equals(a0))
        return UNKNOWN;
    if(VALUE_DATA->toString()->equals(a0))
        return VALUE_DATA;
    if(VALUE_ORIGIN->toString()->equals(a0))
        return VALUE_ORIGIN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::SerializedConfigValue_SerializedFieldArray* com::typesafe::config::impl::SerializedConfigValue_SerializedField::values()
{
    return new com::typesafe::config::impl::SerializedConfigValue_SerializedFieldArray({
        END_MARKER,
        ORIGIN_COMMENTS,
        ORIGIN_DESCRIPTION,
        ORIGIN_END_LINE_NUMBER,
        ORIGIN_LINE_NUMBER,
        ORIGIN_NULL_COMMENTS,
        ORIGIN_NULL_RESOURCE,
        ORIGIN_NULL_URL,
        ORIGIN_RESOURCE,
        ORIGIN_TYPE,
        ORIGIN_URL,
        ROOT_VALUE,
        ROOT_WAS_CONFIG,
        UNKNOWN,
        VALUE_DATA,
        VALUE_ORIGIN,
    });
}

java::lang::Class* com::typesafe::config::impl::SerializedConfigValue_SerializedField::getClass0()
{
    return class_();
}

