// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/concurrent/fwd-config.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class java::util::concurrent::TimeUnit
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static TimeUnitArray* $VALUES_;

public: /* package */
    static constexpr int64_t C0 { int64_t(1LL) };
    static constexpr int64_t C1 { int64_t(1000LL) };
    static constexpr int64_t C2 { int64_t(1000000LL) };
    static constexpr int64_t C3 { int64_t(1000000000LL) };
    static constexpr int64_t C4 { int64_t(60000000000LL) };
    static constexpr int64_t C5 { int64_t(3600000000000LL) };
    static constexpr int64_t C6 { int64_t(86400000000000LL) };

public:
    static TimeUnit* DAYS;
    static TimeUnit* HOURS;

public: /* package */
    static constexpr int64_t MAX { int64_t(9223372036854775807LL) };

public:
    static TimeUnit* MICROSECONDS;
    static TimeUnit* MILLISECONDS;
    static TimeUnit* MINUTES;
    static TimeUnit* NANOSECONDS;
    static TimeUnit* SECONDS;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    virtual int64_t convert(int64_t sourceDuration, TimeUnit* sourceUnit);

public: /* package */
    virtual int32_t excessNanos(int64_t d, int64_t m) = 0;

public:
    virtual void sleep(int64_t timeout);
    virtual void timedJoin(::java::lang::Thread* thread, int64_t timeout);
    virtual void timedWait(::java::lang::Object* obj, int64_t timeout);
    virtual int64_t toDays(int64_t duration);
    virtual int64_t toHours(int64_t duration);
    virtual int64_t toMicros(int64_t duration);
    virtual int64_t toMillis(int64_t duration);
    virtual int64_t toMinutes(int64_t duration);
    virtual int64_t toNanos(int64_t duration);
    virtual int64_t toSeconds(int64_t duration);
    static TimeUnit* valueOf(::java::lang::String* name);
    static TimeUnitArray* values();

public: /* package */
    static int64_t x(int64_t d, int64_t m, int64_t over);

    // Generated

public:
    TimeUnit(::java::lang::String* name, int ordinal);
protected:
    TimeUnit(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static TimeUnitArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
