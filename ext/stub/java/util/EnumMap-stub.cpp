// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/EnumMap.hpp>

#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
}  // namespace lang
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::util::EnumMap::EnumMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::EnumMap::EnumMap(::java::lang::Class* keyType)
    : EnumMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(keyType);
}

java::util::EnumMap::EnumMap(EnumMap* m)
    : EnumMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::util::EnumMap::EnumMap(Map* m)
    : EnumMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

java::lang::Object*& java::util::EnumMap::NULL_()
{
    clinit();
    return NULL__;
}
java::lang::Object* java::util::EnumMap::NULL__;
java::lang::EnumArray*& java::util::EnumMap::ZERO_LENGTH_ENUM_ARRAY()
{
    clinit();
    return ZERO_LENGTH_ENUM_ARRAY_;
}
java::lang::EnumArray* java::util::EnumMap::ZERO_LENGTH_ENUM_ARRAY_;
constexpr int64_t java::util::EnumMap::serialVersionUID;

void ::java::util::EnumMap::ctor(::java::lang::Class* keyType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::EnumMap::ctor(::java::lang::Class* keyType)");
}

void ::java::util::EnumMap::ctor(EnumMap* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::EnumMap::ctor(EnumMap* m)");
}

void ::java::util::EnumMap::ctor(Map* m)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::EnumMap::ctor(Map* m)");
}

void java::util::EnumMap::clear()
{ /* stub */
    unimplemented_(u"void java::util::EnumMap::clear()");
}

java::util::EnumMap* java::util::EnumMap::clone()
{ /* stub */
    unimplemented_(u"java::util::EnumMap* java::util::EnumMap::clone()");
    return 0;
}

bool java::util::EnumMap::containsKey(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"bool java::util::EnumMap::containsKey(::java::lang::Object* key)");
    return 0;
}

/* private: bool java::util::EnumMap::containsMapping(::java::lang::Object* key, ::java::lang::Object* value) */
bool java::util::EnumMap::containsValue(::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"bool java::util::EnumMap::containsValue(::java::lang::Object* value)");
    return 0;
}

/* private: int32_t java::util::EnumMap::entryHashCode(int32_t index) */
java::util::Set* java::util::EnumMap::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::EnumMap::entrySet()");
    return 0;
}

bool java::util::EnumMap::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::util::EnumMap::equals(::java::lang::Object* o)");
    return 0;
}

/* private: bool java::util::EnumMap::equals(EnumMap* em) */
java::lang::Object* java::util::EnumMap::get(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::EnumMap::get(::java::lang::Object* key)");
    return 0;
}

/* private: java::lang::EnumArray* java::util::EnumMap::getKeyUniverse(::java::lang::Class* keyType) */
int32_t java::util::EnumMap::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::EnumMap::hashCode()");
    return 0;
}

/* private: bool java::util::EnumMap::isValidKey(::java::lang::Object* key) */
java::util::Set* java::util::EnumMap::keySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::util::EnumMap::keySet()");
    return 0;
}

/* private: java::lang::Object* java::util::EnumMap::maskNull(::java::lang::Object* value) */
java::lang::Object* java::util::EnumMap::put(::java::lang::Enum* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::EnumMap::put(::java::lang::Enum* key, ::java::lang::Object* value)");
    return 0;
}

java::lang::Object* java::util::EnumMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{ 
    return put(dynamic_cast< ::java::lang::Enum* >(key), dynamic_cast< ::java::lang::Object* >(value));
}

void java::util::EnumMap::putAll(Map* m)
{ /* stub */
    unimplemented_(u"void java::util::EnumMap::putAll(Map* m)");
}

/* private: void java::util::EnumMap::readObject(::java::io::ObjectInputStream* s) */
java::lang::Object* java::util::EnumMap::remove(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::EnumMap::remove(::java::lang::Object* key)");
    return 0;
}

/* private: bool java::util::EnumMap::removeMapping(::java::lang::Object* key, ::java::lang::Object* value) */
int32_t java::util::EnumMap::size()
{ /* stub */
    unimplemented_(u"int32_t java::util::EnumMap::size()");
    return 0;
}

/* private: void java::util::EnumMap::typeCheck(::java::lang::Enum* key) */
/* private: java::lang::Object* java::util::EnumMap::unmaskNull(::java::lang::Object* value) */
java::util::Collection* java::util::EnumMap::values()
{ /* stub */
    unimplemented_(u"java::util::Collection* java::util::EnumMap::values()");
    return 0;
}

/* private: void java::util::EnumMap::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::EnumMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumMap", 17);
    return c;
}

bool java::util::EnumMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return super::remove(key, value);
}

java::lang::Class* java::util::EnumMap::getClass0()
{
    return class_();
}

