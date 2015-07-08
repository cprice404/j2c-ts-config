// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/time/Duration.hpp>

extern void unimplemented_(const char16_t* name);
java::time::Duration::Duration(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::BigInteger*& java::time::Duration::BI_NANOS_PER_SECOND()
{
    clinit();
    return BI_NANOS_PER_SECOND_;
}
java::math::BigInteger* java::time::Duration::BI_NANOS_PER_SECOND_;
java::util::regex::Pattern*& java::time::Duration::PATTERN()
{
    clinit();
    return PATTERN_;
}
java::util::regex::Pattern* java::time::Duration::PATTERN_;
java::time::Duration*& java::time::Duration::ZERO()
{
    clinit();
    return ZERO_;
}
java::time::Duration* java::time::Duration::ZERO_;
constexpr int64_t java::time::Duration::serialVersionUID;

/* private: void ::java::time::Duration::ctor(int64_t seconds, int32_t nanos) */
java::time::Duration* java::time::Duration::abs()
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::abs()");
    return 0;
}

java::time::temporal::Temporal* java::time::Duration::addTo(::java::time::temporal::Temporal* temporal)
{ /* stub */
    unimplemented_(u"java::time::temporal::Temporal* java::time::Duration::addTo(::java::time::temporal::Temporal* temporal)");
    return 0;
}

java::time::Duration* java::time::Duration::between(::java::time::temporal::Temporal* startInclusive, ::java::time::temporal::Temporal* endExclusive)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::between(::java::time::temporal::Temporal* startInclusive, ::java::time::temporal::Temporal* endExclusive)");
    return 0;
}

int32_t java::time::Duration::compareTo(Duration* otherDuration)
{ /* stub */
    unimplemented_(u"int32_t java::time::Duration::compareTo(Duration* otherDuration)");
    return 0;
}

int32_t java::time::Duration::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< Duration* >(o));
}

/* private: java::time::Duration* java::time::Duration::create(::java::math::BigDecimal* seconds) */
/* private: java::time::Duration* java::time::Duration::create(int64_t seconds, int32_t nanoAdjustment) */
/* private: java::time::Duration* java::time::Duration::create(bool negate, int64_t daysAsSecs, int64_t hoursAsSecs, int64_t minsAsSecs, int64_t secs, int32_t nanos) */
java::time::Duration* java::time::Duration::dividedBy(int64_t divisor)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::dividedBy(int64_t divisor)");
    return 0;
}

bool java::time::Duration::equals(::java::lang::Object* otherDuration)
{ /* stub */
    unimplemented_(u"bool java::time::Duration::equals(::java::lang::Object* otherDuration)");
    return 0;
}

java::time::Duration* java::time::Duration::from(::java::time::temporal::TemporalAmount* amount)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::from(::java::time::temporal::TemporalAmount* amount)");
    return 0;
}

int64_t java::time::Duration::get(::java::time::temporal::TemporalUnit* unit)
{ /* stub */
    unimplemented_(u"int64_t java::time::Duration::get(::java::time::temporal::TemporalUnit* unit)");
    return 0;
}

int32_t java::time::Duration::getNano()
{ /* stub */
    unimplemented_(u"int32_t java::time::Duration::getNano()");
    return 0;
}

int64_t java::time::Duration::getSeconds()
{ /* stub */
return seconds ; /* getter */
}

java::util::List* java::time::Duration::getUnits()
{ /* stub */
    unimplemented_(u"java::util::List* java::time::Duration::getUnits()");
    return 0;
}

int32_t java::time::Duration::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::time::Duration::hashCode()");
    return 0;
}

bool java::time::Duration::isNegative()
{ /* stub */
    unimplemented_(u"bool java::time::Duration::isNegative()");
    return 0;
}

bool java::time::Duration::isZero()
{ /* stub */
    unimplemented_(u"bool java::time::Duration::isZero()");
    return 0;
}

java::time::Duration* java::time::Duration::minus(Duration* duration)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minus(Duration* duration)");
    return 0;
}

java::time::Duration* java::time::Duration::minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit)");
    return 0;
}

java::time::Duration* java::time::Duration::minusDays(int64_t daysToSubtract)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minusDays(int64_t daysToSubtract)");
    return 0;
}

java::time::Duration* java::time::Duration::minusHours(int64_t hoursToSubtract)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minusHours(int64_t hoursToSubtract)");
    return 0;
}

java::time::Duration* java::time::Duration::minusMillis(int64_t millisToSubtract)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minusMillis(int64_t millisToSubtract)");
    return 0;
}

java::time::Duration* java::time::Duration::minusMinutes(int64_t minutesToSubtract)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minusMinutes(int64_t minutesToSubtract)");
    return 0;
}

java::time::Duration* java::time::Duration::minusNanos(int64_t nanosToSubtract)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minusNanos(int64_t nanosToSubtract)");
    return 0;
}

java::time::Duration* java::time::Duration::minusSeconds(int64_t secondsToSubtract)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::minusSeconds(int64_t secondsToSubtract)");
    return 0;
}

java::time::Duration* java::time::Duration::multipliedBy(int64_t multiplicand)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::multipliedBy(int64_t multiplicand)");
    return 0;
}

java::time::Duration* java::time::Duration::negated()
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::negated()");
    return 0;
}

java::time::Duration* java::time::Duration::of(int64_t amount, ::java::time::temporal::TemporalUnit* unit)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::of(int64_t amount, ::java::time::temporal::TemporalUnit* unit)");
    return 0;
}

java::time::Duration* java::time::Duration::ofDays(int64_t days)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofDays(int64_t days)");
    return 0;
}

java::time::Duration* java::time::Duration::ofHours(int64_t hours)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofHours(int64_t hours)");
    return 0;
}

java::time::Duration* java::time::Duration::ofMillis(int64_t millis)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofMillis(int64_t millis)");
    return 0;
}

java::time::Duration* java::time::Duration::ofMinutes(int64_t minutes)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofMinutes(int64_t minutes)");
    return 0;
}

java::time::Duration* java::time::Duration::ofNanos(int64_t nanos)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofNanos(int64_t nanos)");
    return 0;
}

java::time::Duration* java::time::Duration::ofSeconds(int64_t seconds)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofSeconds(int64_t seconds)");
    return 0;
}

java::time::Duration* java::time::Duration::ofSeconds(int64_t seconds, int64_t nanoAdjustment)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::ofSeconds(int64_t seconds, int64_t nanoAdjustment)");
    return 0;
}

java::time::Duration* java::time::Duration::parse(::java::lang::CharSequence* text)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::parse(::java::lang::CharSequence* text)");
    return 0;
}

/* private: int32_t java::time::Duration::parseFraction(::java::lang::CharSequence* text, ::java::lang::String* parsed, int32_t negate) */
/* private: int64_t java::time::Duration::parseNumber(::java::lang::CharSequence* text, ::java::lang::String* parsed, int32_t multiplier, ::java::lang::String* errorText) */
java::time::Duration* java::time::Duration::plus(Duration* duration)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plus(Duration* duration)");
    return 0;
}

java::time::Duration* java::time::Duration::plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit)");
    return 0;
}

/* private: java::time::Duration* java::time::Duration::plus(int64_t secondsToAdd, int64_t nanosToAdd) */
java::time::Duration* java::time::Duration::plusDays(int64_t daysToAdd)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plusDays(int64_t daysToAdd)");
    return 0;
}

java::time::Duration* java::time::Duration::plusHours(int64_t hoursToAdd)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plusHours(int64_t hoursToAdd)");
    return 0;
}

java::time::Duration* java::time::Duration::plusMillis(int64_t millisToAdd)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plusMillis(int64_t millisToAdd)");
    return 0;
}

java::time::Duration* java::time::Duration::plusMinutes(int64_t minutesToAdd)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plusMinutes(int64_t minutesToAdd)");
    return 0;
}

java::time::Duration* java::time::Duration::plusNanos(int64_t nanosToAdd)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plusNanos(int64_t nanosToAdd)");
    return 0;
}

java::time::Duration* java::time::Duration::plusSeconds(int64_t secondsToAdd)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::plusSeconds(int64_t secondsToAdd)");
    return 0;
}

java::time::Duration* java::time::Duration::readExternal(::java::io::DataInput* in)
{ /* stub */
    clinit();
    unimplemented_(u"java::time::Duration* java::time::Duration::readExternal(::java::io::DataInput* in)");
    return 0;
}

/* private: void java::time::Duration::readObject(::java::io::ObjectInputStream* s) */
java::time::temporal::Temporal* java::time::Duration::subtractFrom(::java::time::temporal::Temporal* temporal)
{ /* stub */
    unimplemented_(u"java::time::temporal::Temporal* java::time::Duration::subtractFrom(::java::time::temporal::Temporal* temporal)");
    return 0;
}

int64_t java::time::Duration::toDays()
{ /* stub */
    unimplemented_(u"int64_t java::time::Duration::toDays()");
    return 0;
}

int64_t java::time::Duration::toHours()
{ /* stub */
    unimplemented_(u"int64_t java::time::Duration::toHours()");
    return 0;
}

int64_t java::time::Duration::toMillis()
{ /* stub */
    unimplemented_(u"int64_t java::time::Duration::toMillis()");
    return 0;
}

int64_t java::time::Duration::toMinutes()
{ /* stub */
    unimplemented_(u"int64_t java::time::Duration::toMinutes()");
    return 0;
}

int64_t java::time::Duration::toNanos()
{ /* stub */
    unimplemented_(u"int64_t java::time::Duration::toNanos()");
    return 0;
}

/* private: java::math::BigDecimal* java::time::Duration::toSeconds() */
java::lang::String* java::time::Duration::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::time::Duration::toString()");
    return 0;
}

java::time::Duration* java::time::Duration::withNanos(int32_t nanoOfSecond)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::withNanos(int32_t nanoOfSecond)");
    return 0;
}

java::time::Duration* java::time::Duration::withSeconds(int64_t seconds)
{ /* stub */
    unimplemented_(u"java::time::Duration* java::time::Duration::withSeconds(int64_t seconds)");
    return 0;
}

void java::time::Duration::writeExternal(::java::io::DataOutput* out)
{ /* stub */
    unimplemented_(u"void java::time::Duration::writeExternal(::java::io::DataOutput* out)");
}

/* private: java::lang::Object* java::time::Duration::writeReplace() */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::time::Duration::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.time.Duration", 18);
    return c;
}

java::lang::Class* java::time::Duration::getClass0()
{
    return class_();
}

