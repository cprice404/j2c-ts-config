// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <java/time/fwd-config.hpp>
#include <java/time/temporal/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/regex/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/time/temporal/TemporalAmount.hpp>
#include <java/lang/Comparable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::time::Duration final
    : public virtual ::java::lang::Object
    , public ::java::time::temporal::TemporalAmount
    , public ::java::lang::Comparable
    , public ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::math::BigInteger* BI_NANOS_PER_SECOND_;
    static ::java::util::regex::Pattern* PATTERN_;
    static Duration* ZERO_;
    int32_t nanos {  };
    int64_t seconds {  };
    static constexpr int64_t serialVersionUID { int64_t(3078945930695997490LL) };

    /*void ctor(int64_t seconds, int32_t nanos); (private) */

public:
    Duration* abs();
    ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) override;
    static Duration* between(::java::time::temporal::Temporal* startInclusive, ::java::time::temporal::Temporal* endExclusive);
    int32_t compareTo(Duration* otherDuration);
    /*static Duration* create(::java::math::BigDecimal* seconds); (private) */
    /*static Duration* create(int64_t seconds, int32_t nanoAdjustment); (private) */
    /*static Duration* create(bool negate, int64_t daysAsSecs, int64_t hoursAsSecs, int64_t minsAsSecs, int64_t secs, int32_t nanos); (private) */
    Duration* dividedBy(int64_t divisor);
    bool equals(::java::lang::Object* otherDuration) override;
    static Duration* from(::java::time::temporal::TemporalAmount* amount);
    int64_t get(::java::time::temporal::TemporalUnit* unit) override;
    int32_t getNano();
    int64_t getSeconds();
    ::java::util::List* getUnits() override;
    int32_t hashCode() override;
    bool isNegative();
    bool isZero();
    Duration* minus(Duration* duration);
    Duration* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit);
    Duration* minusDays(int64_t daysToSubtract);
    Duration* minusHours(int64_t hoursToSubtract);
    Duration* minusMillis(int64_t millisToSubtract);
    Duration* minusMinutes(int64_t minutesToSubtract);
    Duration* minusNanos(int64_t nanosToSubtract);
    Duration* minusSeconds(int64_t secondsToSubtract);
    Duration* multipliedBy(int64_t multiplicand);
    Duration* negated();
    static Duration* of(int64_t amount, ::java::time::temporal::TemporalUnit* unit);
    static Duration* ofDays(int64_t days);
    static Duration* ofHours(int64_t hours);
    static Duration* ofMillis(int64_t millis);
    static Duration* ofMinutes(int64_t minutes);
    static Duration* ofNanos(int64_t nanos);
    static Duration* ofSeconds(int64_t seconds);
    static Duration* ofSeconds(int64_t seconds, int64_t nanoAdjustment);
    static Duration* parse(::java::lang::CharSequence* text);
    /*static int32_t parseFraction(::java::lang::CharSequence* text, ::java::lang::String* parsed, int32_t negate); (private) */
    /*static int64_t parseNumber(::java::lang::CharSequence* text, ::java::lang::String* parsed, int32_t multiplier, ::java::lang::String* errorText); (private) */
    Duration* plus(Duration* duration);
    Duration* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit);
    /*Duration* plus(int64_t secondsToAdd, int64_t nanosToAdd); (private) */
    Duration* plusDays(int64_t daysToAdd);
    Duration* plusHours(int64_t hoursToAdd);
    Duration* plusMillis(int64_t millisToAdd);
    Duration* plusMinutes(int64_t minutesToAdd);
    Duration* plusNanos(int64_t nanosToAdd);
    Duration* plusSeconds(int64_t secondsToAdd);

public: /* package */
    static Duration* readExternal(::java::io::DataInput* in);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */

public:
    ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) override;
    int64_t toDays();
    int64_t toHours();
    int64_t toMillis();
    int64_t toMinutes();
    int64_t toNanos();
    /*::java::math::BigDecimal* toSeconds(); (private) */
    ::java::lang::String* toString() override;
    Duration* withNanos(int32_t nanoOfSecond);
    Duration* withSeconds(int64_t seconds);

public: /* package */
    void writeExternal(::java::io::DataOutput* out);
    /*::java::lang::Object* writeReplace(); (private) */

    // Generated

public:
    Duration();
protected:
    Duration(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    static ::java::math::BigInteger*& BI_NANOS_PER_SECOND();
    static ::java::util::regex::Pattern*& PATTERN();

public:
    static Duration*& ZERO();

private:
    virtual ::java::lang::Class* getClass0();
};
