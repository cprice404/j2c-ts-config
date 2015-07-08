// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>

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

struct default_init_tag;

class java::util::EnumMap
    : public AbstractMap
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
{

public:
    typedef AbstractMap super;

private:
    static ::java::lang::Object* NULL__;
    static ::java::lang::EnumArray* ZERO_LENGTH_ENUM_ARRAY_;
    Set* entrySet_ {  };
    ::java::lang::Class* keyType {  };
    ::java::lang::EnumArray* keyUniverse {  };
    static constexpr int64_t serialVersionUID { int64_t(458661240069192865LL) };
    int32_t size_ {  };
    ::java::lang::ObjectArray* vals {  };

protected:
    void ctor(::java::lang::Class* keyType);
    void ctor(EnumMap* m);
    void ctor(Map* m);

public:
    void clear() override;
    EnumMap* clone() override;
    bool containsKey(::java::lang::Object* key) override;
    /*bool containsMapping(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    bool containsValue(::java::lang::Object* value) override;
    /*int32_t entryHashCode(int32_t index); (private) */
    Set* entrySet() override;
    bool equals(::java::lang::Object* o) override;
    /*bool equals(EnumMap* em); (private) */
    ::java::lang::Object* get(::java::lang::Object* key) override;
    /*static ::java::lang::EnumArray* getKeyUniverse(::java::lang::Class* keyType); (private) */
    int32_t hashCode() override;
    /*bool isValidKey(::java::lang::Object* key); (private) */
    Set* keySet() override;
    /*::java::lang::Object* maskNull(::java::lang::Object* value); (private) */
    virtual ::java::lang::Object* put(::java::lang::Enum* key, ::java::lang::Object* value);
    void putAll(Map* m) override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    /*bool removeMapping(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    int32_t size() override;
    /*void typeCheck(::java::lang::Enum* key); (private) */
    /*::java::lang::Object* unmaskNull(::java::lang::Object* value); (private) */
    Collection* values() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    EnumMap(::java::lang::Class* keyType);
    EnumMap(EnumMap* m);
    EnumMap(Map* m);
protected:
    EnumMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    static ::java::lang::Object*& NULL_();
    static ::java::lang::EnumArray*& ZERO_LENGTH_ENUM_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
