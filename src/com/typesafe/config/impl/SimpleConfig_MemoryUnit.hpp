// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfig.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfig_MemoryUnit final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static SimpleConfig_MemoryUnit *BYTES;
    static SimpleConfig_MemoryUnit *KILOBYTES;
    static SimpleConfig_MemoryUnit *MEGABYTES;
    static SimpleConfig_MemoryUnit *GIGABYTES;
    static SimpleConfig_MemoryUnit *TERABYTES;
    static SimpleConfig_MemoryUnit *PETABYTES;
    static SimpleConfig_MemoryUnit *EXABYTES;
    static SimpleConfig_MemoryUnit *ZETTABYTES;
    static SimpleConfig_MemoryUnit *YOTTABYTES;
    static SimpleConfig_MemoryUnit *KIBIBYTES;
    static SimpleConfig_MemoryUnit *MEBIBYTES;
    static SimpleConfig_MemoryUnit *GIBIBYTES;
    static SimpleConfig_MemoryUnit *TEBIBYTES;
    static SimpleConfig_MemoryUnit *PEBIBYTES;
    static SimpleConfig_MemoryUnit *EXBIBYTES;
    static SimpleConfig_MemoryUnit *ZEBIBYTES;
    static SimpleConfig_MemoryUnit *YOBIBYTES;
    ::java::lang::String* prefix {  };
    int32_t powerOf {  };
    int32_t power {  };
    ::java::math::BigInteger* bytes {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* prefix, int32_t powerOf, int32_t power);

private:
    static ::java::util::Map* makeUnitsMap();
    static ::java::util::Map* unitsMap_;

public: /* package */
    static SimpleConfig_MemoryUnit* parseUnit(::java::lang::String* unit);

    // Generated

private:
    SimpleConfig_MemoryUnit(::java::lang::String* name, int ordinal, ::java::lang::String* prefix, int32_t powerOf, int32_t power);
protected:
    SimpleConfig_MemoryUnit(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& unitsMap();

public:
    static SimpleConfig_MemoryUnit* valueOf(::java::lang::String* a0);
    static SimpleConfig_MemoryUnitArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfig;
};
