// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/math/BigDecimal.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
}  // namespace lang

namespace math {
typedef ::SubArray< ::java::math::BigDecimal, ::java::lang::NumberArray, ::java::lang::ComparableArray > BigDecimalArray;
}  // namespace math
}  // namespace java

extern void unimplemented_(const char16_t* name);
java::math::BigDecimal::BigDecimal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::BigDecimal::BigDecimal(::char16_tArray* in)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::math::BigDecimal::BigDecimal(::java::lang::String* val)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val);
}

java::math::BigDecimal::BigDecimal(double val)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val);
}

java::math::BigDecimal::BigDecimal(BigInteger* val)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val);
}

java::math::BigDecimal::BigDecimal(int32_t val)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val);
}

java::math::BigDecimal::BigDecimal(int64_t val)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val);
}

java::math::BigDecimal::BigDecimal(::char16_tArray* in, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, mc);
}

java::math::BigDecimal::BigDecimal(::java::lang::String* val, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val, mc);
}

java::math::BigDecimal::BigDecimal(double val, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val, mc);
}

java::math::BigDecimal::BigDecimal(BigInteger* val, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val, mc);
}

java::math::BigDecimal::BigDecimal(BigInteger* unscaledVal, int32_t scale)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(unscaledVal, scale);
}

java::math::BigDecimal::BigDecimal(int32_t val, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val, mc);
}

java::math::BigDecimal::BigDecimal(int64_t val, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(val, mc);
}

java::math::BigDecimal::BigDecimal(::char16_tArray* in, int32_t offset, int32_t len)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, offset, len);
}

java::math::BigDecimal::BigDecimal(BigInteger* unscaledVal, int32_t scale, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(unscaledVal, scale, mc);
}

java::math::BigDecimal::BigDecimal(BigInteger* intVal, int64_t val, int32_t scale, int32_t prec)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(intVal, val, scale, prec);
}

java::math::BigDecimal::BigDecimal(::char16_tArray* in, int32_t offset, int32_t len, MathContext* mc)
    : BigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, offset, len, mc);
}

bool& java::math::BigDecimal::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::math::BigDecimal::$assertionsDisabled_;
std::atomic< java::math::BigIntegerArray* >& java::math::BigDecimal::BIG_TEN_POWERS_TABLE()
{
    clinit();
    return BIG_TEN_POWERS_TABLE_;
}
std::atomic< java::math::BigIntegerArray* > java::math::BigDecimal::BIG_TEN_POWERS_TABLE_;
int32_t& java::math::BigDecimal::BIG_TEN_POWERS_TABLE_INITLEN()
{
    clinit();
    return BIG_TEN_POWERS_TABLE_INITLEN_;
}
int32_t java::math::BigDecimal::BIG_TEN_POWERS_TABLE_INITLEN_;
int32_t& java::math::BigDecimal::BIG_TEN_POWERS_TABLE_MAX()
{
    clinit();
    return BIG_TEN_POWERS_TABLE_MAX_;
}
int32_t java::math::BigDecimal::BIG_TEN_POWERS_TABLE_MAX_;
constexpr int64_t java::math::BigDecimal::DIV_NUM_BASE;
constexpr int64_t java::math::BigDecimal::HALF_LONG_MAX_VALUE;
constexpr int64_t java::math::BigDecimal::HALF_LONG_MIN_VALUE;
constexpr int64_t java::math::BigDecimal::INFLATED;
java::math::BigInteger*& java::math::BigDecimal::INFLATED_BIGINT()
{
    clinit();
    return INFLATED_BIGINT_;
}
java::math::BigInteger* java::math::BigDecimal::INFLATED_BIGINT_;
int64_tArrayArray*& java::math::BigDecimal::LONGLONG_TEN_POWERS_TABLE()
{
    clinit();
    return LONGLONG_TEN_POWERS_TABLE_;
}
int64_tArrayArray* java::math::BigDecimal::LONGLONG_TEN_POWERS_TABLE_;
int64_tArray*& java::math::BigDecimal::LONG_TEN_POWERS_TABLE()
{
    clinit();
    return LONG_TEN_POWERS_TABLE_;
}
int64_tArray* java::math::BigDecimal::LONG_TEN_POWERS_TABLE_;
constexpr int32_t java::math::BigDecimal::MAX_COMPACT_DIGITS;
java::math::BigDecimal*& java::math::BigDecimal::ONE()
{
    clinit();
    return ONE_;
}
java::math::BigDecimal* java::math::BigDecimal::ONE_;
constexpr int32_t java::math::BigDecimal::ROUND_CEILING;
constexpr int32_t java::math::BigDecimal::ROUND_DOWN;
constexpr int32_t java::math::BigDecimal::ROUND_FLOOR;
constexpr int32_t java::math::BigDecimal::ROUND_HALF_DOWN;
constexpr int32_t java::math::BigDecimal::ROUND_HALF_EVEN;
constexpr int32_t java::math::BigDecimal::ROUND_HALF_UP;
constexpr int32_t java::math::BigDecimal::ROUND_UNNECESSARY;
constexpr int32_t java::math::BigDecimal::ROUND_UP;
java::math::BigDecimal*& java::math::BigDecimal::TEN()
{
    clinit();
    return TEN_;
}
java::math::BigDecimal* java::math::BigDecimal::TEN_;
int64_tArray*& java::math::BigDecimal::THRESHOLDS_TABLE()
{
    clinit();
    return THRESHOLDS_TABLE_;
}
int64_tArray* java::math::BigDecimal::THRESHOLDS_TABLE_;
java::math::BigDecimal*& java::math::BigDecimal::ZERO()
{
    clinit();
    return ZERO_;
}
java::math::BigDecimal* java::math::BigDecimal::ZERO_;
java::math::BigDecimalArray*& java::math::BigDecimal::ZERO_SCALED_BY()
{
    clinit();
    return ZERO_SCALED_BY_;
}
java::math::BigDecimalArray* java::math::BigDecimal::ZERO_SCALED_BY_;
doubleArray*& java::math::BigDecimal::double10pow()
{
    clinit();
    return double10pow_;
}
doubleArray* java::math::BigDecimal::double10pow_;
floatArray*& java::math::BigDecimal::float10pow()
{
    clinit();
    return float10pow_;
}
floatArray* java::math::BigDecimal::float10pow_;
constexpr int64_t java::math::BigDecimal::serialVersionUID;
java::lang::ThreadLocal*& java::math::BigDecimal::threadLocalStringBuilderHelper()
{
    clinit();
    return threadLocalStringBuilderHelper_;
}
java::lang::ThreadLocal* java::math::BigDecimal::threadLocalStringBuilderHelper_;
java::math::BigDecimalArray*& java::math::BigDecimal::zeroThroughTen()
{
    clinit();
    return zeroThroughTen_;
}
java::math::BigDecimalArray* java::math::BigDecimal::zeroThroughTen_;

void ::java::math::BigDecimal::ctor(::char16_tArray* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(::char16_tArray* in)");
}

void ::java::math::BigDecimal::ctor(::java::lang::String* val)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(::java::lang::String* val)");
}

void ::java::math::BigDecimal::ctor(double val)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(double val)");
}

void ::java::math::BigDecimal::ctor(BigInteger* val)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(BigInteger* val)");
}

void ::java::math::BigDecimal::ctor(int32_t val)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(int32_t val)");
}

void ::java::math::BigDecimal::ctor(int64_t val)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(int64_t val)");
}

void ::java::math::BigDecimal::ctor(::char16_tArray* in, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(::char16_tArray* in, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(::java::lang::String* val, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(::java::lang::String* val, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(double val, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(double val, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(BigInteger* val, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(BigInteger* val, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(BigInteger* unscaledVal, int32_t scale)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(BigInteger* unscaledVal, int32_t scale)");
}

void ::java::math::BigDecimal::ctor(int32_t val, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(int32_t val, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(int64_t val, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(int64_t val, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(::char16_tArray* in, int32_t offset, int32_t len)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(::char16_tArray* in, int32_t offset, int32_t len)");
}

void ::java::math::BigDecimal::ctor(BigInteger* unscaledVal, int32_t scale, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(BigInteger* unscaledVal, int32_t scale, MathContext* mc)");
}

void ::java::math::BigDecimal::ctor(BigInteger* intVal, int64_t val, int32_t scale, int32_t prec)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(BigInteger* intVal, int64_t val, int32_t scale, int32_t prec)");
}

void ::java::math::BigDecimal::ctor(::char16_tArray* in, int32_t offset, int32_t len, MathContext* mc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::BigDecimal::ctor(::char16_tArray* in, int32_t offset, int32_t len, MathContext* mc)");
}

java::math::BigDecimal* java::math::BigDecimal::abs()
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::abs()");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::abs(MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::abs(MathContext* mc)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::add(BigDecimal* augend)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::add(BigDecimal* augend)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::add(BigDecimal* augend, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::add(BigDecimal* augend, MathContext* mc)");
    return 0;
}

/* private: int64_t java::math::BigDecimal::add(int64_t xs, int64_t ys) */
/* private: java::math::BigDecimal* java::math::BigDecimal::add(int64_t xs, int64_t ys, int32_t scale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::add(int64_t xs, int32_t scale1, int64_t ys, int32_t scale2) */
/* private: java::math::BigDecimal* java::math::BigDecimal::add(int64_t xs, int32_t scale1, BigInteger* snd, int32_t scale2) */
/* private: java::math::BigDecimal* java::math::BigDecimal::add(BigInteger* fst, int32_t scale1, BigInteger* snd, int32_t scale2) */
/* private: int32_t java::math::BigDecimal::adjustScale(int32_t scl, int64_t exp) */
/* private: java::math::BigDecimal* java::math::BigDecimal::audit() */
/* private: int32_t java::math::BigDecimal::bigDigitLength(BigInteger* b) */
/* private: java::math::BigInteger* java::math::BigDecimal::bigMultiplyPowerTen(int32_t n) */
/* private: java::math::BigInteger* java::math::BigDecimal::bigMultiplyPowerTen(int64_t value, int32_t n) */
/* private: java::math::BigInteger* java::math::BigDecimal::bigMultiplyPowerTen(BigInteger* value, int32_t n) */
/* private: java::math::BigInteger* java::math::BigDecimal::bigTenToThe(int32_t n) */
int8_t java::math::BigDecimal::byteValueExact()
{ /* stub */
    unimplemented_(u"int8_t java::math::BigDecimal::byteValueExact()");
    return 0;
}

/* private: int32_t java::math::BigDecimal::checkScale(int64_t val) */
/* private: int32_t java::math::BigDecimal::checkScale(int64_t intCompact, int64_t val) */
/* private: int32_t java::math::BigDecimal::checkScale(BigInteger* intVal, int64_t val) */
/* private: int32_t java::math::BigDecimal::checkScaleNonZero(int64_t val) */
/* private: bool java::math::BigDecimal::commonNeedIncrement(int32_t roundingMode, int32_t qsign, int32_t cmpFracHalf, bool oddQuot) */
/* private: int64_t java::math::BigDecimal::compactValFor(BigInteger* b) */
/* private: int32_t java::math::BigDecimal::compareMagnitude(BigDecimal* val) */
/* private: int32_t java::math::BigDecimal::compareMagnitudeNormalized(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale) */
/* private: int32_t java::math::BigDecimal::compareMagnitudeNormalized(int64_t xs, int32_t xscale, BigInteger* ys, int32_t yscale) */
/* private: int32_t java::math::BigDecimal::compareMagnitudeNormalized(BigInteger* xs, int32_t xscale, BigInteger* ys, int32_t yscale) */
int32_t java::math::BigDecimal::compareTo(BigDecimal* val)
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::compareTo(BigDecimal* val)");
    return 0;
}

int32_t java::math::BigDecimal::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< BigDecimal* >(o));
}

/* private: java::math::BigDecimal* java::math::BigDecimal::createAndStripZerosToMatchScale(BigInteger* intVal, int32_t scale, int64_t preferredScale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::createAndStripZerosToMatchScale(int64_t compactVal, int32_t scale, int64_t preferredScale) */
/* private: int64_t java::math::BigDecimal::divWord(int64_t n, int64_t dLong) */
java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, int32_t roundingMode)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, int32_t roundingMode)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, RoundingMode* roundingMode)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, RoundingMode* roundingMode)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, MathContext* mc)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, int32_t scale, int32_t roundingMode)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, int32_t scale, int32_t roundingMode)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, int32_t scale, RoundingMode* roundingMode)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divide(BigDecimal* divisor, int32_t scale, RoundingMode* roundingMode)");
    return 0;
}

/* private: java::math::BigDecimal* java::math::BigDecimal::divide(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(BigInteger* xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(int64_t xs, int32_t xscale, BigInteger* ys, int32_t yscale, int64_t preferredScale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(BigInteger* xs, int32_t xscale, BigInteger* ys, int32_t yscale, int64_t preferredScale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(int64_t dividend, int32_t dividendScale, int64_t divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(BigInteger* dividend, int32_t dividendScale, int64_t divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(int64_t dividend, int32_t dividendScale, BigInteger* divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divide(BigInteger* dividend, int32_t dividendScale, BigInteger* divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode) */
java::math::BigDecimalArray* java::math::BigDecimal::divideAndRemainder(BigDecimal* divisor)
{ /* stub */
    unimplemented_(u"java::math::BigDecimalArray* java::math::BigDecimal::divideAndRemainder(BigDecimal* divisor)");
    return 0;
}

java::math::BigDecimalArray* java::math::BigDecimal::divideAndRemainder(BigDecimal* divisor, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimalArray* java::math::BigDecimal::divideAndRemainder(BigDecimal* divisor, MathContext* mc)");
    return 0;
}

/* private: int64_t java::math::BigDecimal::divideAndRound(int64_t ldividend, int64_t ldivisor, int32_t roundingMode) */
/* private: java::math::BigInteger* java::math::BigDecimal::divideAndRound(BigInteger* bdividend, int64_t ldivisor, int32_t roundingMode) */
/* private: java::math::BigInteger* java::math::BigDecimal::divideAndRound(BigInteger* bdividend, BigInteger* bdivisor, int32_t roundingMode) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divideAndRound(int64_t ldividend, int64_t ldivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divideAndRound(BigInteger* bdividend, int64_t ldivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divideAndRound(BigInteger* bdividend, BigInteger* bdivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divideAndRound128(int64_t dividendHi, int64_t dividendLo, int64_t divisor, int32_t sign, int32_t scale, int32_t roundingMode, int32_t preferredScale) */
/* private: java::math::BigInteger* java::math::BigDecimal::divideAndRoundByTenPow(BigInteger* intVal, int32_t tenPow, int32_t roundingMode) */
/* private: java::math::BigDecimal* java::math::BigDecimal::divideSmallFastPath(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, MathContext* mc) */
java::math::BigDecimal* java::math::BigDecimal::divideToIntegralValue(BigDecimal* divisor)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divideToIntegralValue(BigDecimal* divisor)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::divideToIntegralValue(BigDecimal* divisor, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::divideToIntegralValue(BigDecimal* divisor, MathContext* mc)");
    return 0;
}

/* private: java::math::BigDecimal* java::math::BigDecimal::doRound(BigDecimal* val, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::doRound(int64_t compactVal, int32_t scale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::doRound(BigInteger* intVal, int32_t scale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::doRound128(int64_t hi, int64_t lo, int32_t sign, int32_t scale, MathContext* mc) */
double java::math::BigDecimal::doubleValue()
{ /* stub */
    unimplemented_(u"double java::math::BigDecimal::doubleValue()");
    return 0;
}

bool java::math::BigDecimal::equals(::java::lang::Object* x)
{ /* stub */
    unimplemented_(u"bool java::math::BigDecimal::equals(::java::lang::Object* x)");
    return 0;
}

/* private: java::math::BigInteger* java::math::BigDecimal::expandBigIntegerTenPowers(int32_t n) */
float java::math::BigDecimal::floatValue()
{ /* stub */
    unimplemented_(u"float java::math::BigDecimal::floatValue()");
    return 0;
}

/* private: java::lang::String* java::math::BigDecimal::getValueString(int32_t signum, ::java::lang::String* intString, int32_t scale) */
int32_t java::math::BigDecimal::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::hashCode()");
    return 0;
}

/* private: java::math::BigInteger* java::math::BigDecimal::inflated() */
int32_t java::math::BigDecimal::intValue()
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::intValue()");
    return 0;
}

int32_t java::math::BigDecimal::intValueExact()
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::intValueExact()");
    return 0;
}

/* private: java::lang::String* java::math::BigDecimal::layoutChars(bool sci) */
/* private: int32_t java::math::BigDecimal::longCompareMagnitude(int64_t x, int64_t y) */
int32_t java::math::BigDecimal::longDigitLength(int64_t x)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::math::BigDecimal::longDigitLength(int64_t x)");
    return 0;
}

/* private: bool java::math::BigDecimal::longLongCompareMagnitude(int64_t hi0, int64_t lo0, int64_t hi1, int64_t lo1) */
/* private: int64_t java::math::BigDecimal::longMultiplyPowerTen(int64_t val, int32_t n) */
int64_t java::math::BigDecimal::longValue()
{ /* stub */
    unimplemented_(u"int64_t java::math::BigDecimal::longValue()");
    return 0;
}

int64_t java::math::BigDecimal::longValueExact()
{ /* stub */
    unimplemented_(u"int64_t java::math::BigDecimal::longValueExact()");
    return 0;
}

/* private: int64_t java::math::BigDecimal::make64(int64_t hi, int64_t lo) */
/* private: void java::math::BigDecimal::matchScale(BigDecimalArray* val) */
java::math::BigDecimal* java::math::BigDecimal::max(BigDecimal* val)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::max(BigDecimal* val)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::min(BigDecimal* val)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::min(BigDecimal* val)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::movePointLeft(int32_t n)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::movePointLeft(int32_t n)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::movePointRight(int32_t n)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::movePointRight(int32_t n)");
    return 0;
}

/* private: int64_t java::math::BigDecimal::mulsub(int64_t u1, int64_t u0, int64_t v1, int64_t v0, int64_t q0) */
java::math::BigDecimal* java::math::BigDecimal::multiply(BigDecimal* multiplicand)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::multiply(BigDecimal* multiplicand)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::multiply(BigDecimal* multiplicand, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::multiply(BigDecimal* multiplicand, MathContext* mc)");
    return 0;
}

/* private: int64_t java::math::BigDecimal::multiply(int64_t x, int64_t y) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiply(int64_t x, int64_t y, int32_t scale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiply(int64_t x, BigInteger* y, int32_t scale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiply(BigInteger* x, BigInteger* y, int32_t scale) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiplyAndRound(int64_t x, int64_t y, int32_t scale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiplyAndRound(int64_t x, BigInteger* y, int32_t scale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiplyAndRound(BigInteger* x, BigInteger* y, int32_t scale, MathContext* mc) */
/* private: java::math::BigDecimal* java::math::BigDecimal::multiplyDivideAndRound(int64_t dividend0, int64_t dividend1, int64_t divisor, int32_t scale, int32_t roundingMode, int32_t preferredScale) */
/* private: bool java::math::BigDecimal::needIncrement(int64_t ldivisor, int32_t roundingMode, int32_t qsign, int64_t q, int64_t r) */
/* private: bool java::math::BigDecimal::needIncrement(int64_t ldivisor, int32_t roundingMode, int32_t qsign, MutableBigInteger* mq, int64_t r) */
/* private: bool java::math::BigDecimal::needIncrement(MutableBigInteger* mdivisor, int32_t roundingMode, int32_t qsign, MutableBigInteger* mq, MutableBigInteger* mr) */
java::math::BigDecimal* java::math::BigDecimal::negate()
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::negate()");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::negate(MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::negate(MathContext* mc)");
    return 0;
}

/* private: int64_t java::math::BigDecimal::parseExp(::char16_tArray* in, int32_t offset, int32_t len) */
java::math::BigDecimal* java::math::BigDecimal::plus()
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::plus()");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::plus(MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::plus(MathContext* mc)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::pow(int32_t n)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::pow(int32_t n)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::pow(int32_t n, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::pow(int32_t n, MathContext* mc)");
    return 0;
}

/* private: java::math::BigDecimalArray* java::math::BigDecimal::preAlign(BigDecimal* lhs, BigDecimal* augend, int64_t padding, MathContext* mc) */
int32_t java::math::BigDecimal::precision()
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::precision()");
    return 0;
}

/* private: int32_t java::math::BigDecimal::precision(int64_t hi, int64_t lo) */
/* private: void java::math::BigDecimal::print(::java::lang::String* name, BigDecimal* bd) */
/* private: void java::math::BigDecimal::readObject(::java::io::ObjectInputStream* s) */
java::math::BigDecimal* java::math::BigDecimal::remainder(BigDecimal* divisor)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::remainder(BigDecimal* divisor)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::remainder(BigDecimal* divisor, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::remainder(BigDecimal* divisor, MathContext* mc)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::round(MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::round(MathContext* mc)");
    return 0;
}

/* private: java::math::BigDecimal* java::math::BigDecimal::roundedTenPower(int32_t qsign, int32_t raise, int32_t scale, int32_t preferredScale) */
/* private: int32_t java::math::BigDecimal::saturateLong(int64_t s) */
int32_t java::math::BigDecimal::scale()
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::scale()");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::scaleByPowerOfTen(int32_t n)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::scaleByPowerOfTen(int32_t n)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::scaledTenPow(int32_t n, int32_t sign, int32_t scale)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::scaledTenPow(int32_t n, int32_t sign, int32_t scale)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::setScale(int32_t newScale)
{ /* stub */
}

java::math::BigDecimal* java::math::BigDecimal::setScale(int32_t newScale, RoundingMode* roundingMode)
{ /* stub */
}

java::math::BigDecimal* java::math::BigDecimal::setScale(int32_t newScale, int32_t roundingMode)
{ /* stub */
}

int16_t java::math::BigDecimal::shortValueExact()
{ /* stub */
    unimplemented_(u"int16_t java::math::BigDecimal::shortValueExact()");
    return 0;
}

int32_t java::math::BigDecimal::signum()
{ /* stub */
    unimplemented_(u"int32_t java::math::BigDecimal::signum()");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::stripTrailingZeros()
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::stripTrailingZeros()");
    return 0;
}

/* private: java::math::BigDecimal* java::math::BigDecimal::stripZerosToMatchScale(BigInteger* intVal, int64_t intCompact, int32_t scale, int32_t preferredScale) */
java::math::BigDecimal* java::math::BigDecimal::subtract(BigDecimal* subtrahend)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::subtract(BigDecimal* subtrahend)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::subtract(BigDecimal* subtrahend, MathContext* mc)
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::subtract(BigDecimal* subtrahend, MathContext* mc)");
    return 0;
}

java::math::BigInteger* java::math::BigDecimal::toBigInteger()
{ /* stub */
    unimplemented_(u"java::math::BigInteger* java::math::BigDecimal::toBigInteger()");
    return 0;
}

java::math::BigInteger* java::math::BigDecimal::toBigIntegerExact()
{ /* stub */
    unimplemented_(u"java::math::BigInteger* java::math::BigDecimal::toBigIntegerExact()");
    return 0;
}

java::lang::String* java::math::BigDecimal::toEngineeringString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::math::BigDecimal::toEngineeringString()");
    return 0;
}

java::lang::String* java::math::BigDecimal::toPlainString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::math::BigDecimal::toPlainString()");
    return 0;
}

java::lang::String* java::math::BigDecimal::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::math::BigDecimal::toString()");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::ulp()
{ /* stub */
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::ulp()");
    return 0;
}

java::math::BigInteger* java::math::BigDecimal::unscaledValue()
{ /* stub */
    unimplemented_(u"java::math::BigInteger* java::math::BigDecimal::unscaledValue()");
    return 0;
}

/* private: bool java::math::BigDecimal::unsignedLongCompare(int64_t one, int64_t two) */
/* private: bool java::math::BigDecimal::unsignedLongCompareEq(int64_t one, int64_t two) */
java::math::BigDecimal* java::math::BigDecimal::valueOf(int64_t val)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::valueOf(int64_t val)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::valueOf(double val)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::valueOf(double val)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::valueOf(int64_t unscaledVal, int32_t scale)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::valueOf(int64_t unscaledVal, int32_t scale)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::valueOf(int64_t unscaledVal, int32_t scale, int32_t prec)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::valueOf(int64_t unscaledVal, int32_t scale, int32_t prec)");
    return 0;
}

java::math::BigDecimal* java::math::BigDecimal::valueOf(BigInteger* intVal, int32_t scale, int32_t prec)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::valueOf(BigInteger* intVal, int32_t scale, int32_t prec)");
    return 0;
}

/* private: void java::math::BigDecimal::writeObject(::java::io::ObjectOutputStream* s) */
java::math::BigDecimal* java::math::BigDecimal::zeroValueOf(int32_t scale)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::BigDecimal* java::math::BigDecimal::zeroValueOf(int32_t scale)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::math::BigDecimal::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.BigDecimal", 20);
    return c;
}

java::lang::Class* java::math::BigDecimal::getClass0()
{
    return class_();
}

