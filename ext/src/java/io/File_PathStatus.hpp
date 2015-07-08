// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
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

namespace io {
typedef ::SubArray< ::java::io::File_PathStatus, ::java::lang::EnumArray > File_PathStatusArray;
}  // namespace io
}  // namespace java

struct default_init_tag;

class java::io::File_PathStatus final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static File_PathStatusArray* $VALUES_;

public:
    static File_PathStatus* CHECKED;
    static File_PathStatus* INVALID;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    static File_PathStatus* valueOf(::java::lang::String* arg0);
    static File_PathStatusArray* values();

    // Generated
    File_PathStatus(::java::lang::String* name, int ordinal);
protected:
    File_PathStatus(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static File_PathStatusArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
