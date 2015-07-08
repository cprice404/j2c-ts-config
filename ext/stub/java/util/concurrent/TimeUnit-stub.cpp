// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/concurrent/TimeUnit.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
}  // namespace lang

namespace util {
namespace concurrent {
typedef ::SubArray< ::java::util::concurrent::TimeUnit, ::java::lang::EnumArray > TimeUnitArray;
}  // namespace concurrent
}  // namespace util
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::util::concurrent::TimeUnit::TimeUnit(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::concurrent::TimeUnitArray*& java::util::concurrent::TimeUnit::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::util::concurrent::TimeUnitArray* java::util::concurrent::TimeUnit::$VALUES_;
constexpr int64_t java::util::concurrent::TimeUnit::C0;
constexpr int64_t java::util::concurrent::TimeUnit::C1;
constexpr int64_t java::util::concurrent::TimeUnit::C2;
constexpr int64_t java::util::concurrent::TimeUnit::C3;
constexpr int64_t java::util::concurrent::TimeUnit::C4;
constexpr int64_t java::util::concurrent::TimeUnit::C5;
constexpr int64_t java::util::concurrent::TimeUnit::C6;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::DAYS;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::HOURS;
constexpr int64_t java::util::concurrent::TimeUnit::MAX;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::MICROSECONDS;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::MILLISECONDS;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::MINUTES;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::NANOSECONDS;
java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::SECONDS;

/* private: void ::java::util::concurrent::TimeUnit::ctor(::java::lang::String* name, int ordinal) */
int64_t java::util::concurrent::TimeUnit::convert(int64_t sourceDuration, TimeUnit* sourceUnit)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::convert(int64_t sourceDuration, TimeUnit* sourceUnit)");
    return 0;
}

void java::util::concurrent::TimeUnit::sleep(int64_t timeout)
{ /* stub */
    unimplemented_(u"void java::util::concurrent::TimeUnit::sleep(int64_t timeout)");
}

void java::util::concurrent::TimeUnit::timedJoin(::java::lang::Thread* thread, int64_t timeout)
{ /* stub */
    unimplemented_(u"void java::util::concurrent::TimeUnit::timedJoin(::java::lang::Thread* thread, int64_t timeout)");
}

void java::util::concurrent::TimeUnit::timedWait(::java::lang::Object* obj, int64_t timeout)
{ /* stub */
    unimplemented_(u"void java::util::concurrent::TimeUnit::timedWait(::java::lang::Object* obj, int64_t timeout)");
}

int64_t java::util::concurrent::TimeUnit::toDays(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toDays(int64_t duration)");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::toHours(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toHours(int64_t duration)");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::toMicros(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toMicros(int64_t duration)");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::toMillis(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toMillis(int64_t duration)");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::toMinutes(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toMinutes(int64_t duration)");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::toNanos(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toNanos(int64_t duration)");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::toSeconds(int64_t duration)
{ /* stub */
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::toSeconds(int64_t duration)");
    return 0;
}

java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::valueOf(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::concurrent::TimeUnit* java::util::concurrent::TimeUnit::valueOf(::java::lang::String* name)");
    return 0;
}

java::util::concurrent::TimeUnitArray* java::util::concurrent::TimeUnit::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::concurrent::TimeUnitArray* java::util::concurrent::TimeUnit::values()");
    return 0;
}

int64_t java::util::concurrent::TimeUnit::x(int64_t d, int64_t m, int64_t over)
{ /* stub */
    clinit();
    unimplemented_(u"int64_t java::util::concurrent::TimeUnit::x(int64_t d, int64_t m, int64_t over)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::concurrent::TimeUnit::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.concurrent.TimeUnit", 29);
    return c;
}

java::lang::Enum* java::util::concurrent::TimeUnit::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::util::concurrent::TimeUnit::getClass0()
{
    return class_();
}

