// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

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
typedef ::SubArray< ::java::lang::Long, NumberArray, ComparableArray > LongArray;
}  // namespace lang
}  // namespace java

struct default_init_tag;

class java::lang::Long_LongCache
    : public virtual Object
{

public:
    typedef Object super;

private:
    static LongArray* cache_;

    /*void ctor(); (private) */

    // Generated

public:
    Long_LongCache();
protected:
    Long_LongCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static LongArray*& cache();

private:
    virtual ::java::lang::Class* getClass0();
};
