// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/io/File_PathStatus.hpp>

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

extern void unimplemented_(const char16_t* name);
java::io::File_PathStatus::File_PathStatus(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::File_PathStatusArray*& java::io::File_PathStatus::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::io::File_PathStatusArray* java::io::File_PathStatus::$VALUES_;
java::io::File_PathStatus* java::io::File_PathStatus::CHECKED;
java::io::File_PathStatus* java::io::File_PathStatus::INVALID;

/* private: void ::java::io::File_PathStatus::ctor(::java::lang::String* name, int ordinal) */
java::io::File_PathStatus* java::io::File_PathStatus::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::File_PathStatus* java::io::File_PathStatus::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::io::File_PathStatusArray* java::io::File_PathStatus::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::io::File_PathStatusArray* java::io::File_PathStatus::values()");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::io::File_PathStatus::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.File.PathStatus", 23);
    return c;
}

java::lang::Enum* java::io::File_PathStatus::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::io::File_PathStatus::getClass0()
{
    return class_();
}

