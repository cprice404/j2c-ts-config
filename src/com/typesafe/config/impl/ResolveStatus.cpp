// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveStatus.java
#include <com/typesafe/config/impl/ResolveStatus.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
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
typedef ::SubArray< ::com::typesafe::config::impl::ResolveStatus, ::java::lang::EnumArray > ResolveStatusArray;
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
com::typesafe::config::impl::ResolveStatus::ResolveStatus(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveStatus::ResolveStatus(::java::lang::String* name, int ordinal)
    : ResolveStatus(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ResolveStatus::UNRESOLVED = new ::com::typesafe::config::impl::ResolveStatus(u"UNRESOLVED"_j, 0);
com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ResolveStatus::RESOLVED = new ::com::typesafe::config::impl::ResolveStatus(u"RESOLVED"_j, 1);
com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ResolveStatus::fromValues(::java::util::Collection* values)
{
    clinit();
    for (auto _i = npc(values)->iterator(); _i->hasNext(); ) {
        AbstractConfigValue* v = java_cast< AbstractConfigValue* >(_i->next());
        {
            if(npc(v)->resolveStatus() == ResolveStatus::UNRESOLVED)
                return ResolveStatus::UNRESOLVED;

        }
    }
    return ResolveStatus::RESOLVED;
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ResolveStatus::fromBoolean(bool resolved)
{
    clinit();
    return resolved ? ResolveStatus::RESOLVED : ResolveStatus::UNRESOLVED;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveStatus::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveStatus", 38);
    return c;
}

com::typesafe::config::impl::ResolveStatus* com::typesafe::config::impl::ResolveStatus::valueOf(::java::lang::String* a0)
{
    if(RESOLVED->toString()->equals(a0))
        return RESOLVED;
    if(UNRESOLVED->toString()->equals(a0))
        return UNRESOLVED;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::typesafe::config::impl::ResolveStatusArray* com::typesafe::config::impl::ResolveStatus::values()
{
    return new com::typesafe::config::impl::ResolveStatusArray({
        RESOLVED,
        UNRESOLVED,
    });
}

java::lang::Class* com::typesafe::config::impl::ResolveStatus::getClass0()
{
    return class_();
}

