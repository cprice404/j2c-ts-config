// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfig.java
#include <com/typesafe/config/impl/SimpleConfig_MemoryUnit.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/BigInteger.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
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
typedef ::SubArray< ::com::typesafe::config::impl::SimpleConfig_MemoryUnit, ::java::lang::EnumArray > SimpleConfig_MemoryUnitArray;
}  // namespace impl
}  // namespace config
}  // namespace typesafe
}  // namespace com

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleConfig_MemoryUnit::SimpleConfig_MemoryUnit(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfig_MemoryUnit::SimpleConfig_MemoryUnit(::java::lang::String* name, int ordinal, ::java::lang::String* prefix, int32_t powerOf, int32_t power) 
    : SimpleConfig_MemoryUnit(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, prefix,powerOf,power);
}

com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::BYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"BYTES"_j, 0, u""_j, int32_t(1024), int32_t(0));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::KILOBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"KILOBYTES"_j, 1, u"kilo"_j, int32_t(1000), int32_t(1));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::MEGABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"MEGABYTES"_j, 2, u"mega"_j, int32_t(1000), int32_t(2));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::GIGABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"GIGABYTES"_j, 3, u"giga"_j, int32_t(1000), int32_t(3));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::TERABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"TERABYTES"_j, 4, u"tera"_j, int32_t(1000), int32_t(4));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::PETABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"PETABYTES"_j, 5, u"peta"_j, int32_t(1000), int32_t(5));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::EXABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"EXABYTES"_j, 6, u"exa"_j, int32_t(1000), int32_t(6));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::ZETTABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"ZETTABYTES"_j, 7, u"zetta"_j, int32_t(1000), int32_t(7));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::YOTTABYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"YOTTABYTES"_j, 8, u"yotta"_j, int32_t(1000), int32_t(8));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::KIBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"KIBIBYTES"_j, 9, u"kibi"_j, int32_t(1024), int32_t(1));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::MEBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"MEBIBYTES"_j, 10, u"mebi"_j, int32_t(1024), int32_t(2));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::GIBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"GIBIBYTES"_j, 11, u"gibi"_j, int32_t(1024), int32_t(3));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::TEBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"TEBIBYTES"_j, 12, u"tebi"_j, int32_t(1024), int32_t(4));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::PEBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"PEBIBYTES"_j, 13, u"pebi"_j, int32_t(1024), int32_t(5));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::EXBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"EXBIBYTES"_j, 14, u"exbi"_j, int32_t(1024), int32_t(6));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::ZEBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"ZEBIBYTES"_j, 15, u"zebi"_j, int32_t(1024), int32_t(7));
com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::YOBIBYTES = new ::com::typesafe::config::impl::SimpleConfig_MemoryUnit(u"YOBIBYTES"_j, 16, u"yobi"_j, int32_t(1024), int32_t(8));
void com::typesafe::config::impl::SimpleConfig_MemoryUnit::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* prefix, int32_t powerOf, int32_t power)
{
    super::ctor(name, ordinal);
    this->prefix = prefix;
    this->powerOf = powerOf;
    this->power = power;
    this->bytes = npc(::java::math::BigInteger::valueOf(static_cast< int64_t >(powerOf)))->pow(power);
}

java::util::Map* com::typesafe::config::impl::SimpleConfig_MemoryUnit::makeUnitsMap()
{
    clinit();
    ::java::util::Map* map = new ::java::util::HashMap();
    for(auto unit : *npc(SimpleConfig_MemoryUnit::values())) {
        npc(map)->put(::java::lang::StringBuilder().append(npc(unit)->prefix)->append(u"byte"_j)->toString(), unit);
        npc(map)->put(::java::lang::StringBuilder().append(npc(unit)->prefix)->append(u"bytes"_j)->toString(), unit);
        if(npc(npc(unit)->prefix)->length() == 0) {
            npc(map)->put(u"b"_j, unit);
            npc(map)->put(u"B"_j, unit);
            npc(map)->put(u""_j, unit);
        } else {
            auto first = npc(npc(unit)->prefix)->substring(0, 1);
            auto firstUpper = npc(first)->toUpperCase();
            if(npc(unit)->powerOf == 1024) {
                npc(map)->put(first, unit);
                npc(map)->put(firstUpper, unit);
                npc(map)->put(::java::lang::StringBuilder().append(firstUpper)->append(u"i"_j)->toString(), unit);
                npc(map)->put(::java::lang::StringBuilder().append(firstUpper)->append(u"iB"_j)->toString(), unit);
            } else if(npc(unit)->powerOf == 1000) {
                if(npc(unit)->power == 1) {
                    npc(map)->put(::java::lang::StringBuilder().append(first)->append(u"B"_j)->toString(), unit);
                } else {
                    npc(map)->put(::java::lang::StringBuilder().append(firstUpper)->append(u"B"_j)->toString(), unit);
                }
            } else {
                throw new ::java::lang::RuntimeException(u"broken MemoryUnit enum"_j);
            }
        }
    }
    return map;
}

java::util::Map*& com::typesafe::config::impl::SimpleConfig_MemoryUnit::unitsMap()
{
    clinit();
    return unitsMap_;
}
java::util::Map* com::typesafe::config::impl::SimpleConfig_MemoryUnit::unitsMap_;

com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::parseUnit(::java::lang::String* unit)
{
    clinit();
    return java_cast< SimpleConfig_MemoryUnit* >(npc(unitsMap_)->get(unit));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfig_MemoryUnit::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfig.MemoryUnit", 48);
    return c;
}

void com::typesafe::config::impl::SimpleConfig_MemoryUnit::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        unitsMap_ = makeUnitsMap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

com::typesafe::config::impl::SimpleConfig_MemoryUnit* com::typesafe::config::impl::SimpleConfig_MemoryUnit::valueOf(::java::lang::String* a0)
{
    if(BYTES->toString()->equals(a0))
        return BYTES;
    if(EXABYTES->toString()->equals(a0))
        return EXABYTES;
    if(EXBIBYTES->toString()->equals(a0))
        return EXBIBYTES;
    if(GIBIBYTES->toString()->equals(a0))
        return GIBIBYTES;
    if(GIGABYTES->toString()->equals(a0))
        return GIGABYTES;
    if(KIBIBYTES->toString()->equals(a0))
        return KIBIBYTES;
    if(KILOBYTES->toString()->equals(a0))
        return KILOBYTES;
    if(MEBIBYTES->toString()->equals(a0))
        return MEBIBYTES;
    if(MEGABYTES->toString()->equals(a0))
        return MEGABYTES;
    if(PEBIBYTES->toString()->equals(a0))
        return PEBIBYTES;
    if(PETABYTES->toString()->equals(a0))
        return PETABYTES;
    if(TEBIBYTES->toString()->equals(a0))
        return TEBIBYTES;
    if(TERABYTES->toString()->equals(a0))
        return TERABYTES;
    if(YOBIBYTES->toString()->equals(a0))
        return YOBIBYTES;
    if(YOTTABYTES->toString()->equals(a0))
        return YOTTABYTES;
    if(ZEBIBYTES->toString()->equals(a0))
        return ZEBIBYTES;
    if(ZETTABYTES->toString()->equals(a0))
        return ZETTABYTES;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::SimpleConfig_MemoryUnitArray* com::typesafe::config::impl::SimpleConfig_MemoryUnit::values()
{
    return new com::typesafe::config::impl::SimpleConfig_MemoryUnitArray({
        BYTES,
        EXABYTES,
        EXBIBYTES,
        GIBIBYTES,
        GIGABYTES,
        KIBIBYTES,
        KILOBYTES,
        MEBIBYTES,
        MEGABYTES,
        PEBIBYTES,
        PETABYTES,
        TEBIBYTES,
        TERABYTES,
        YOBIBYTES,
        YOTTABYTES,
        ZEBIBYTES,
        ZETTABYTES,
    });
}

java::lang::Class* com::typesafe::config::impl::SimpleConfig_MemoryUnit::getClass0()
{
    return class_();
}

