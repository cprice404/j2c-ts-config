// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
typedef ::SubArray< ::java::lang::Integer, NumberArray, ComparableArray > IntegerArray;
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::Integer_IntegerCache
    : public virtual Object
{

public:
    typedef Object super;

private:
    static bool $assertionsDisabled_;
    static IntegerArray* cache_;
    static int32_t high_;

public: /* package */
    static constexpr int32_t low { int32_t(-128) };

    /*void ctor(); (private) */

    // Generated

public:
    Integer_IntegerCache();
protected:
    Integer_IntegerCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();
    static IntegerArray*& cache();
    static int32_t& high();

private:
    virtual ::java::lang::Class* getClass0();
};
