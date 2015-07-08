// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
}  // namespace lang

namespace math {
typedef ::SubArray< ::java::math::BigDecimal, ::java::lang::NumberArray, ::java::lang::ComparableArray > BigDecimalArray;
typedef ::SubArray< ::java::math::BigInteger, ::java::lang::NumberArray, ::java::lang::ComparableArray > BigIntegerArray;
}  // namespace math
}  // namespace java

namespace  {
typedef ::SubArray< ::int64_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int64_tArrayArray;
}  // namespace 

struct default_init_tag;

class java::math::BigDecimal
    : public ::java::lang::Number
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Number super;

private:
    static bool $assertionsDisabled_;
    static std::atomic< BigIntegerArray* > BIG_TEN_POWERS_TABLE_;
    static int32_t BIG_TEN_POWERS_TABLE_INITLEN_;
    static int32_t BIG_TEN_POWERS_TABLE_MAX_;
    static constexpr int64_t DIV_NUM_BASE { int64_t(4294967296LL) };
    static constexpr int64_t HALF_LONG_MAX_VALUE { int64_t(4611686018427387903LL) };
    static constexpr int64_t HALF_LONG_MIN_VALUE { int64_t(-4611686018427387904LL) };

public: /* package */
    static constexpr int64_t INFLATED { int64_t(-0x7fffffffffffffffLL-1) };

private:
    static BigInteger* INFLATED_BIGINT_;
    static ::int64_tArrayArray* LONGLONG_TEN_POWERS_TABLE_;
    static ::int64_tArray* LONG_TEN_POWERS_TABLE_;
    static constexpr int32_t MAX_COMPACT_DIGITS { int32_t(18) };
    static BigDecimal* ONE_;

public:
    static constexpr int32_t ROUND_CEILING { int32_t(2) };
    static constexpr int32_t ROUND_DOWN { int32_t(1) };
    static constexpr int32_t ROUND_FLOOR { int32_t(3) };
    static constexpr int32_t ROUND_HALF_DOWN { int32_t(5) };
    static constexpr int32_t ROUND_HALF_EVEN { int32_t(6) };
    static constexpr int32_t ROUND_HALF_UP { int32_t(4) };
    static constexpr int32_t ROUND_UNNECESSARY { int32_t(7) };
    static constexpr int32_t ROUND_UP { int32_t(0) };

private:
    static BigDecimal* TEN_;
    static ::int64_tArray* THRESHOLDS_TABLE_;
    static BigDecimal* ZERO_;
    static BigDecimalArray* ZERO_SCALED_BY_;
    static ::doubleArray* double10pow_;
    static ::floatArray* float10pow_;
    int64_t intCompact {  };
    BigInteger* intVal {  };
    int32_t precision_ {  };
    int32_t scale_ {  };
    static constexpr int64_t serialVersionUID { int64_t(6108874887143696463LL) };
    ::java::lang::String* stringCache {  };
    static ::java::lang::ThreadLocal* threadLocalStringBuilderHelper_;
    static BigDecimalArray* zeroThroughTen_;

protected:
    void ctor(::char16_tArray* in);
    void ctor(::java::lang::String* val);
    void ctor(double val);
    void ctor(BigInteger* val);
    void ctor(int32_t val);
    void ctor(int64_t val);
    void ctor(::char16_tArray* in, MathContext* mc);
    void ctor(::java::lang::String* val, MathContext* mc);
    void ctor(double val, MathContext* mc);
    void ctor(BigInteger* val, MathContext* mc);
    void ctor(BigInteger* unscaledVal, int32_t scale);
    void ctor(int32_t val, MathContext* mc);
    void ctor(int64_t val, MathContext* mc);
    void ctor(::char16_tArray* in, int32_t offset, int32_t len);
    void ctor(BigInteger* unscaledVal, int32_t scale, MathContext* mc);
    void ctor(BigInteger* intVal, int64_t val, int32_t scale, int32_t prec);
    void ctor(::char16_tArray* in, int32_t offset, int32_t len, MathContext* mc);

public:
    virtual BigDecimal* abs();
    virtual BigDecimal* abs(MathContext* mc);
    virtual BigDecimal* add(BigDecimal* augend);
    virtual BigDecimal* add(BigDecimal* augend, MathContext* mc);
    /*static int64_t add(int64_t xs, int64_t ys); (private) */
    /*static BigDecimal* add(int64_t xs, int64_t ys, int32_t scale); (private) */
    /*static BigDecimal* add(int64_t xs, int32_t scale1, int64_t ys, int32_t scale2); (private) */
    /*static BigDecimal* add(int64_t xs, int32_t scale1, BigInteger* snd, int32_t scale2); (private) */
    /*static BigDecimal* add(BigInteger* fst, int32_t scale1, BigInteger* snd, int32_t scale2); (private) */
    /*int32_t adjustScale(int32_t scl, int64_t exp); (private) */
    /*BigDecimal* audit(); (private) */
    /*static int32_t bigDigitLength(BigInteger* b); (private) */
    /*BigInteger* bigMultiplyPowerTen(int32_t n); (private) */
    /*static BigInteger* bigMultiplyPowerTen(int64_t value, int32_t n); (private) */
    /*static BigInteger* bigMultiplyPowerTen(BigInteger* value, int32_t n); (private) */
    /*static BigInteger* bigTenToThe(int32_t n); (private) */
    virtual int8_t byteValueExact();
    /*int32_t checkScale(int64_t val); (private) */
    /*static int32_t checkScale(int64_t intCompact, int64_t val); (private) */
    /*static int32_t checkScale(BigInteger* intVal, int64_t val); (private) */
    /*static int32_t checkScaleNonZero(int64_t val); (private) */
    /*static bool commonNeedIncrement(int32_t roundingMode, int32_t qsign, int32_t cmpFracHalf, bool oddQuot); (private) */
    /*static int64_t compactValFor(BigInteger* b); (private) */
    /*int32_t compareMagnitude(BigDecimal* val); (private) */
    /*static int32_t compareMagnitudeNormalized(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale); (private) */
    /*static int32_t compareMagnitudeNormalized(int64_t xs, int32_t xscale, BigInteger* ys, int32_t yscale); (private) */
    /*static int32_t compareMagnitudeNormalized(BigInteger* xs, int32_t xscale, BigInteger* ys, int32_t yscale); (private) */
    virtual int32_t compareTo(BigDecimal* val);
    /*static BigDecimal* createAndStripZerosToMatchScale(BigInteger* intVal, int32_t scale, int64_t preferredScale); (private) */
    /*static BigDecimal* createAndStripZerosToMatchScale(int64_t compactVal, int32_t scale, int64_t preferredScale); (private) */
    /*static int64_t divWord(int64_t n, int64_t dLong); (private) */
    virtual BigDecimal* divide(BigDecimal* divisor);
    virtual BigDecimal* divide(BigDecimal* divisor, int32_t roundingMode);
    virtual BigDecimal* divide(BigDecimal* divisor, RoundingMode* roundingMode);
    virtual BigDecimal* divide(BigDecimal* divisor, MathContext* mc);
    virtual BigDecimal* divide(BigDecimal* divisor, int32_t scale, int32_t roundingMode);
    virtual BigDecimal* divide(BigDecimal* divisor, int32_t scale, RoundingMode* roundingMode);
    /*static BigDecimal* divide(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, MathContext* mc); (private) */
    /*static BigDecimal* divide(BigInteger* xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, MathContext* mc); (private) */
    /*static BigDecimal* divide(int64_t xs, int32_t xscale, BigInteger* ys, int32_t yscale, int64_t preferredScale, MathContext* mc); (private) */
    /*static BigDecimal* divide(BigInteger* xs, int32_t xscale, BigInteger* ys, int32_t yscale, int64_t preferredScale, MathContext* mc); (private) */
    /*static BigDecimal* divide(int64_t dividend, int32_t dividendScale, int64_t divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode); (private) */
    /*static BigDecimal* divide(BigInteger* dividend, int32_t dividendScale, int64_t divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode); (private) */
    /*static BigDecimal* divide(int64_t dividend, int32_t dividendScale, BigInteger* divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode); (private) */
    /*static BigDecimal* divide(BigInteger* dividend, int32_t dividendScale, BigInteger* divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode); (private) */
    virtual BigDecimalArray* divideAndRemainder(BigDecimal* divisor);
    virtual BigDecimalArray* divideAndRemainder(BigDecimal* divisor, MathContext* mc);
    /*static int64_t divideAndRound(int64_t ldividend, int64_t ldivisor, int32_t roundingMode); (private) */
    /*static BigInteger* divideAndRound(BigInteger* bdividend, int64_t ldivisor, int32_t roundingMode); (private) */
    /*static BigInteger* divideAndRound(BigInteger* bdividend, BigInteger* bdivisor, int32_t roundingMode); (private) */
    /*static BigDecimal* divideAndRound(int64_t ldividend, int64_t ldivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale); (private) */
    /*static BigDecimal* divideAndRound(BigInteger* bdividend, int64_t ldivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale); (private) */
    /*static BigDecimal* divideAndRound(BigInteger* bdividend, BigInteger* bdivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale); (private) */
    /*static BigDecimal* divideAndRound128(int64_t dividendHi, int64_t dividendLo, int64_t divisor, int32_t sign, int32_t scale, int32_t roundingMode, int32_t preferredScale); (private) */
    /*static BigInteger* divideAndRoundByTenPow(BigInteger* intVal, int32_t tenPow, int32_t roundingMode); (private) */
    /*static BigDecimal* divideSmallFastPath(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, MathContext* mc); (private) */
    virtual BigDecimal* divideToIntegralValue(BigDecimal* divisor);
    virtual BigDecimal* divideToIntegralValue(BigDecimal* divisor, MathContext* mc);
    /*static BigDecimal* doRound(BigDecimal* val, MathContext* mc); (private) */
    /*static BigDecimal* doRound(int64_t compactVal, int32_t scale, MathContext* mc); (private) */
    /*static BigDecimal* doRound(BigInteger* intVal, int32_t scale, MathContext* mc); (private) */
    /*static BigDecimal* doRound128(int64_t hi, int64_t lo, int32_t sign, int32_t scale, MathContext* mc); (private) */
    double doubleValue() override;
    bool equals(::java::lang::Object* x) override;
    /*static BigInteger* expandBigIntegerTenPowers(int32_t n); (private) */
    float floatValue() override;
    /*::java::lang::String* getValueString(int32_t signum, ::java::lang::String* intString, int32_t scale); (private) */
    int32_t hashCode() override;
    /*BigInteger* inflated(); (private) */
    int32_t intValue() override;
    virtual int32_t intValueExact();
    /*::java::lang::String* layoutChars(bool sci); (private) */
    /*static int32_t longCompareMagnitude(int64_t x, int64_t y); (private) */

public: /* package */
    static int32_t longDigitLength(int64_t x);
    /*static bool longLongCompareMagnitude(int64_t hi0, int64_t lo0, int64_t hi1, int64_t lo1); (private) */
    /*static int64_t longMultiplyPowerTen(int64_t val, int32_t n); (private) */

public:
    int64_t longValue() override;
    virtual int64_t longValueExact();
    /*static int64_t make64(int64_t hi, int64_t lo); (private) */
    /*static void matchScale(BigDecimalArray* val); (private) */
    virtual BigDecimal* max(BigDecimal* val);
    virtual BigDecimal* min(BigDecimal* val);
    virtual BigDecimal* movePointLeft(int32_t n);
    virtual BigDecimal* movePointRight(int32_t n);
    /*static int64_t mulsub(int64_t u1, int64_t u0, int64_t v1, int64_t v0, int64_t q0); (private) */
    virtual BigDecimal* multiply(BigDecimal* multiplicand);
    virtual BigDecimal* multiply(BigDecimal* multiplicand, MathContext* mc);
    /*static int64_t multiply(int64_t x, int64_t y); (private) */
    /*static BigDecimal* multiply(int64_t x, int64_t y, int32_t scale); (private) */
    /*static BigDecimal* multiply(int64_t x, BigInteger* y, int32_t scale); (private) */
    /*static BigDecimal* multiply(BigInteger* x, BigInteger* y, int32_t scale); (private) */
    /*static BigDecimal* multiplyAndRound(int64_t x, int64_t y, int32_t scale, MathContext* mc); (private) */
    /*static BigDecimal* multiplyAndRound(int64_t x, BigInteger* y, int32_t scale, MathContext* mc); (private) */
    /*static BigDecimal* multiplyAndRound(BigInteger* x, BigInteger* y, int32_t scale, MathContext* mc); (private) */
    /*static BigDecimal* multiplyDivideAndRound(int64_t dividend0, int64_t dividend1, int64_t divisor, int32_t scale, int32_t roundingMode, int32_t preferredScale); (private) */
    /*static bool needIncrement(int64_t ldivisor, int32_t roundingMode, int32_t qsign, int64_t q, int64_t r); (private) */
    /*static bool needIncrement(int64_t ldivisor, int32_t roundingMode, int32_t qsign, MutableBigInteger* mq, int64_t r); (private) */
    /*static bool needIncrement(MutableBigInteger* mdivisor, int32_t roundingMode, int32_t qsign, MutableBigInteger* mq, MutableBigInteger* mr); (private) */
    virtual BigDecimal* negate();
    virtual BigDecimal* negate(MathContext* mc);
    /*static int64_t parseExp(::char16_tArray* in, int32_t offset, int32_t len); (private) */
    virtual BigDecimal* plus();
    virtual BigDecimal* plus(MathContext* mc);
    virtual BigDecimal* pow(int32_t n);
    virtual BigDecimal* pow(int32_t n, MathContext* mc);
    /*BigDecimalArray* preAlign(BigDecimal* lhs, BigDecimal* augend, int64_t padding, MathContext* mc); (private) */
    virtual int32_t precision();
    /*static int32_t precision(int64_t hi, int64_t lo); (private) */
    /*static void print(::java::lang::String* name, BigDecimal* bd); (private) */
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    virtual BigDecimal* remainder(BigDecimal* divisor);
    virtual BigDecimal* remainder(BigDecimal* divisor, MathContext* mc);
    virtual BigDecimal* round(MathContext* mc);
    /*static BigDecimal* roundedTenPower(int32_t qsign, int32_t raise, int32_t scale, int32_t preferredScale); (private) */
    /*static int32_t saturateLong(int64_t s); (private) */
    virtual int32_t scale();
    virtual BigDecimal* scaleByPowerOfTen(int32_t n);

public: /* package */
    static BigDecimal* scaledTenPow(int32_t n, int32_t sign, int32_t scale);

public:
    virtual BigDecimal* setScale(int32_t newScale);
    virtual BigDecimal* setScale(int32_t newScale, RoundingMode* roundingMode);
    virtual BigDecimal* setScale(int32_t newScale, int32_t roundingMode);
    virtual int16_t shortValueExact();
    virtual int32_t signum();
    virtual BigDecimal* stripTrailingZeros();
    /*static BigDecimal* stripZerosToMatchScale(BigInteger* intVal, int64_t intCompact, int32_t scale, int32_t preferredScale); (private) */
    virtual BigDecimal* subtract(BigDecimal* subtrahend);
    virtual BigDecimal* subtract(BigDecimal* subtrahend, MathContext* mc);
    virtual BigInteger* toBigInteger();
    virtual BigInteger* toBigIntegerExact();
    virtual ::java::lang::String* toEngineeringString();
    virtual ::java::lang::String* toPlainString();
    ::java::lang::String* toString() override;
    virtual BigDecimal* ulp();
    virtual BigInteger* unscaledValue();
    /*static bool unsignedLongCompare(int64_t one, int64_t two); (private) */
    /*static bool unsignedLongCompareEq(int64_t one, int64_t two); (private) */
    static BigDecimal* valueOf(int64_t val);
    static BigDecimal* valueOf(double val);
    static BigDecimal* valueOf(int64_t unscaledVal, int32_t scale);

public: /* package */
    static BigDecimal* valueOf(int64_t unscaledVal, int32_t scale, int32_t prec);
    static BigDecimal* valueOf(BigInteger* intVal, int32_t scale, int32_t prec);
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */
    static BigDecimal* zeroValueOf(int32_t scale);

    // Generated

public:
    BigDecimal(::char16_tArray* in);
    BigDecimal(::java::lang::String* val);
    BigDecimal(double val);
    BigDecimal(BigInteger* val);
    BigDecimal(int32_t val);
    BigDecimal(int64_t val);
    BigDecimal(::char16_tArray* in, MathContext* mc);
    BigDecimal(::java::lang::String* val, MathContext* mc);
    BigDecimal(double val, MathContext* mc);
    BigDecimal(BigInteger* val, MathContext* mc);
    BigDecimal(BigInteger* unscaledVal, int32_t scale);
    BigDecimal(int32_t val, MathContext* mc);
    BigDecimal(int64_t val, MathContext* mc);
    BigDecimal(::char16_tArray* in, int32_t offset, int32_t len);
    BigDecimal(BigInteger* unscaledVal, int32_t scale, MathContext* mc);

public: /* package */
    BigDecimal(BigInteger* intVal, int64_t val, int32_t scale, int32_t prec);

public:
    BigDecimal(::char16_tArray* in, int32_t offset, int32_t len, MathContext* mc);
protected:
    BigDecimal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

public: /* package */
    static bool& $assertionsDisabled();

private:
    static std::atomic< BigIntegerArray* >& BIG_TEN_POWERS_TABLE();
    static int32_t& BIG_TEN_POWERS_TABLE_INITLEN();
    static int32_t& BIG_TEN_POWERS_TABLE_MAX();
    static BigInteger*& INFLATED_BIGINT();
    static ::int64_tArrayArray*& LONGLONG_TEN_POWERS_TABLE();
    static ::int64_tArray*& LONG_TEN_POWERS_TABLE();

public:
    static BigDecimal*& ONE();
    static BigDecimal*& TEN();

private:
    static ::int64_tArray*& THRESHOLDS_TABLE();

public:
    static BigDecimal*& ZERO();

private:
    static BigDecimalArray*& ZERO_SCALED_BY();
    static ::doubleArray*& double10pow();
    static ::floatArray*& float10pow();
    static ::java::lang::ThreadLocal*& threadLocalStringBuilderHelper();
    static BigDecimalArray*& zeroThroughTen();
    virtual ::java::lang::Class* getClass0();
};
