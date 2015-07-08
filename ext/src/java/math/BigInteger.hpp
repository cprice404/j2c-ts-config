// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace lang {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
}  // namespace lang

namespace io {
typedef ::SubArray< ::java::io::ObjectStreamField, ::java::lang::ObjectArray, ::java::lang::ComparableArray > ObjectStreamFieldArray;
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
}  // namespace lang

namespace math {
typedef ::SubArray< ::java::math::BigInteger, ::java::lang::NumberArray, ::java::lang::ComparableArray > BigIntegerArray;
typedef ::SubArray< ::java::math::BigIntegerArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > BigIntegerArrayArray;
}  // namespace math
}  // namespace java

struct default_init_tag;

class java::math::BigInteger
    : public ::java::lang::Number
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Number super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    static constexpr int32_t BURNIKEL_ZIEGLER_OFFSET { int32_t(40) };
    static constexpr int32_t BURNIKEL_ZIEGLER_THRESHOLD { int32_t(80) };

private:
    static constexpr int32_t DEFAULT_PRIME_CERTAINTY { int32_t(100) };
    static constexpr int32_t KARATSUBA_SQUARE_THRESHOLD { int32_t(128) };
    static constexpr int32_t KARATSUBA_THRESHOLD { int32_t(80) };
    static double LOG_TWO_;

public: /* package */
    static constexpr int64_t LONG_MASK { int64_t(4294967295LL) };

private:
    static constexpr int32_t MAX_CONSTANT { int32_t(16) };
    static constexpr int32_t MAX_MAG_LENGTH { int32_t(67108864) };
    static constexpr int32_t MULTIPLY_SQUARE_THRESHOLD { int32_t(20) };
    static BigInteger* NEGATIVE_ONE_;
    static BigInteger* ONE_;
    static constexpr int32_t PRIME_SEARCH_BIT_LENGTH_LIMIT { int32_t(500000000) };
    static constexpr int32_t SCHOENHAGE_BASE_CONVERSION_THRESHOLD { int32_t(20) };
    static BigInteger* SMALL_PRIME_PRODUCT_;
    static constexpr int32_t SMALL_PRIME_THRESHOLD { int32_t(95) };
    static BigInteger* TEN_;
    static constexpr int32_t TOOM_COOK_SQUARE_THRESHOLD { int32_t(216) };
    static constexpr int32_t TOOM_COOK_THRESHOLD { int32_t(240) };
    static BigInteger* TWO_;
    static BigInteger* ZERO_;
    int32_t bitCount_ {  };
    int32_t bitLength_ {  };
    static ::int64_tArray* bitsPerDigit_;
    static ::int32_tArray* bnExpModThreshTable_;
    static ::int32_tArray* digitsPerInt_;
    static ::int32_tArray* digitsPerLong_;
    int32_t firstNonzeroIntNum_ {  };
    static ::int32_tArray* intRadix_;
    static ::doubleArray* logCache_;
    static BigIntegerArray* longRadix_;
    int32_t lowestSetBit {  };

public: /* package */
    ::int32_tArray* mag {  };

private:
    static BigIntegerArray* negConst_;
    static BigIntegerArray* posConst_;
    static std::atomic< BigIntegerArrayArray* > powerCache_;
    static ::java::io::ObjectStreamFieldArray* serialPersistentFields_;
    static constexpr int64_t serialVersionUID { int64_t(-8287574255936472291LL) };

public: /* package */
    int32_t signum_ {  };

private:
    static ::java::lang::StringArray* zeros_;

protected:
    void ctor(::int8_tArray* val);
    /*void ctor(::int32_tArray* val); (private) */
    void ctor(::java::lang::String* val);
    /*void ctor(int64_t val); (private) */
    void ctor(int32_t signum, ::int8_tArray* magnitude);
    /*void ctor(int32_t signum, ::int32_tArray* magnitude); (private) */
    void ctor(::java::lang::String* val, int32_t radix);
    void ctor(int32_t numBits, ::java::util::Random* rnd);
    void ctor(::int32_tArray* magnitude, int32_t signum);
    /*void ctor(::int8_tArray* magnitude, int32_t signum); (private) */
    void ctor(::char16_tArray* val, int32_t sign, int32_t len);
    void ctor(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd);

public:
    virtual BigInteger* abs();
    virtual BigInteger* add(BigInteger* val);

public: /* package */
    virtual BigInteger* add(int64_t val);
    /*static ::int32_tArray* add(::int32_tArray* x, int64_t val); (private) */
    /*static ::int32_tArray* add(::int32_tArray* x, ::int32_tArray* y); (private) */
    static int32_t addOne(::int32_tArray* a, int32_t offset, int32_t mlen, int32_t carry);

public:
    virtual BigInteger* and_(BigInteger* val);
    virtual BigInteger* andNot(BigInteger* val);
    virtual int32_t bitCount();
    virtual int32_t bitLength();
    /*static int32_t bitLength(::int32_tArray* val, int32_t len); (private) */

public: /* package */
    static int32_t bitLengthForInt(int32_t n);

public:
    virtual int8_t byteValueExact();
    /*void checkRange(); (private) */
    virtual BigInteger* clearBit(int32_t n);

public: /* package */
    int32_t compareMagnitude(BigInteger* val);
    int32_t compareMagnitude(int64_t val);

public:
    virtual int32_t compareTo(BigInteger* val);
    /*static void destructiveMulAdd(::int32_tArray* x, int32_t y, int32_t z); (private) */
    virtual BigInteger* divide(BigInteger* val);
    virtual BigIntegerArray* divideAndRemainder(BigInteger* val);
    /*BigIntegerArray* divideAndRemainderBurnikelZiegler(BigInteger* val); (private) */
    /*BigIntegerArray* divideAndRemainderKnuth(BigInteger* val); (private) */
    /*BigInteger* divideBurnikelZiegler(BigInteger* val); (private) */
    /*BigInteger* divideKnuth(BigInteger* val); (private) */
    double doubleValue() override;
    bool equals(::java::lang::Object* x) override;
    /*BigInteger* exactDivideBy3(); (private) */
    /*int32_t firstNonzeroIntNum(); (private) */
    virtual BigInteger* flipBit(int32_t n);
    float floatValue() override;
    virtual BigInteger* gcd(BigInteger* val);
    /*int32_t getInt(int32_t n); (private) */
    /*BigInteger* getLower(int32_t n); (private) */
    virtual int32_t getLowestSetBit();
    /*static int32_t getPrimeSearchLen(int32_t bitLength); (private) */
    /*static BigInteger* getRadixConversionCache(int32_t radix, int32_t exponent); (private) */
    /*BigInteger* getToomSlice(int32_t lowerSize, int32_t upperSize, int32_t slice, int32_t fullsize); (private) */
    /*BigInteger* getUpper(int32_t n); (private) */
    int32_t hashCode() override;
    /*static int32_t intArrayCmpToLen(::int32_tArray* arg1, ::int32_tArray* arg2, int32_t len); (private) */
    /*int32_t intLength(); (private) */
    int32_t intValue() override;
    virtual int32_t intValueExact();
    virtual bool isProbablePrime(int32_t certainty);
    /*static int32_t jacobiSymbol(int32_t p, BigInteger* n); (private) */

public: /* package */
    virtual ::int32_tArray* javaIncrement(::int32_tArray* val);
    /*static BigInteger* largePrime(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd); (private) */
    /*static ::int32_tArray* leftShift(::int32_tArray* a, int32_t len, int32_t n); (private) */

public:
    int64_t longValue() override;
    virtual int64_t longValueExact();
    /*static BigInteger* lucasLehmerSequence(int32_t z, BigInteger* k, BigInteger* n); (private) */
    /*::int8_tArray* magSerializedForm(); (private) */
    /*static ::int32_tArray* makePositive(::int8_tArray* a); (private) */
    /*static ::int32_tArray* makePositive(::int32_tArray* a); (private) */
    virtual BigInteger* max(BigInteger* val);
    virtual BigInteger* min(BigInteger* val);
    virtual BigInteger* mod(BigInteger* m);
    /*BigInteger* mod2(int32_t p); (private) */
    virtual BigInteger* modInverse(BigInteger* m);
    virtual BigInteger* modPow(BigInteger* exponent, BigInteger* m);
    /*BigInteger* modPow2(BigInteger* exponent, int32_t p); (private) */
    /*static ::int32_tArray* montReduce(::int32_tArray* n, ::int32_tArray* mod, int32_t mlen, int32_t inv); (private) */

public: /* package */
    static int32_t mulAdd(::int32_tArray* out, ::int32_tArray* in, int32_t offset, int32_t len, int32_t k);

public:
    virtual BigInteger* multiply(BigInteger* val);

public: /* package */
    virtual BigInteger* multiply(int64_t v);
    /*static BigInteger* multiplyByInt(::int32_tArray* x, int32_t y, int32_t sign); (private) */
    /*static BigInteger* multiplyKaratsuba(BigInteger* x, BigInteger* y); (private) */
    /*::int32_tArray* multiplyToLen(::int32_tArray* x, int32_t xlen, ::int32_tArray* y, int32_t ylen, ::int32_tArray* z); (private) */
    /*static BigInteger* multiplyToomCook3(BigInteger* a, BigInteger* b); (private) */

public:
    virtual BigInteger* negate();
    virtual BigInteger* nextProbablePrime();
    virtual BigInteger* not_();
    /*BigInteger* oddModPow(BigInteger* y, BigInteger* z); (private) */
    virtual BigInteger* or_(BigInteger* val);
    /*int32_t parseInt(::char16_tArray* source, int32_t start, int32_t end); (private) */
    /*bool passesLucasLehmer(); (private) */
    /*bool passesMillerRabin(int32_t iterations, ::java::util::Random* rnd); (private) */
    virtual BigInteger* pow(int32_t exponent);

public: /* package */
    virtual bool primeToCertainty(int32_t certainty, ::java::util::Random* random);
    static void primitiveLeftShift(::int32_tArray* a, int32_t len, int32_t n);
    static void primitiveRightShift(::int32_tArray* a, int32_t len, int32_t n);

public:
    static BigInteger* probablePrime(int32_t bitLength, ::java::util::Random* rnd);
    /*static ::int8_tArray* randomBits(int32_t numBits, ::java::util::Random* rnd); (private) */
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    virtual BigInteger* remainder(BigInteger* val);
    /*BigInteger* remainderBurnikelZiegler(BigInteger* val); (private) */
    /*BigInteger* remainderKnuth(BigInteger* val); (private) */
    /*static void reportOverflow(); (private) */
    virtual BigInteger* setBit(int32_t n);
    virtual BigInteger* shiftLeft(int32_t n);
    /*static ::int32_tArray* shiftLeft(::int32_tArray* mag, int32_t n); (private) */
    virtual BigInteger* shiftRight(int32_t n);
    /*BigInteger* shiftRightImpl(int32_t n); (private) */
    virtual int16_t shortValueExact();
    /*int32_t signBit(); (private) */
    /*int32_t signInt(); (private) */
    virtual int32_t signum();
    /*static BigInteger* smallPrime(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd); (private) */
    /*::java::lang::String* smallToString(int32_t radix); (private) */
    /*BigInteger* square(); (private) */
    /*BigInteger* squareKaratsuba(); (private) */
    /*static ::int32_tArray* squareToLen(::int32_tArray* x, int32_t len, ::int32_tArray* z); (private) */
    /*BigInteger* squareToomCook3(); (private) */
    /*static ::int32_tArray* stripLeadingZeroBytes(::int8_tArray* a); (private) */
    /*static ::int32_tArray* stripLeadingZeroInts(::int32_tArray* val); (private) */
    /*static int32_t subN(::int32_tArray* a, ::int32_tArray* b, int32_t len); (private) */
    virtual BigInteger* subtract(BigInteger* val);
    /*static ::int32_tArray* subtract(int64_t val, ::int32_tArray* little); (private) */
    /*static ::int32_tArray* subtract(::int32_tArray* big, int64_t val); (private) */
    /*static ::int32_tArray* subtract(::int32_tArray* big, ::int32_tArray* little); (private) */
    virtual bool testBit(int32_t n);
    virtual ::int8_tArray* toByteArray_();
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* toString(int32_t radix);
    /*static void toString(BigInteger* u, ::java::lang::StringBuilder* sb, int32_t radix, int32_t digits); (private) */
    /*static ::int32_tArray* trustedStripLeadingZeroInts(::int32_tArray* val); (private) */
    static BigInteger* valueOf(int64_t val);
    /*static BigInteger* valueOf(::int32_tArray* val); (private) */
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */
    virtual BigInteger* xor_(BigInteger* val);

    // Generated
    BigInteger(::int8_tArray* val);
    BigInteger(::java::lang::String* val);
    BigInteger(int32_t signum, ::int8_tArray* magnitude);
    BigInteger(::java::lang::String* val, int32_t radix);
    BigInteger(int32_t numBits, ::java::util::Random* rnd);

public: /* package */
    BigInteger(::int32_tArray* magnitude, int32_t signum);
    BigInteger(::char16_tArray* val, int32_t sign, int32_t len);

public:
    BigInteger(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd);
protected:
    BigInteger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

public: /* package */
    static bool& $assertionsDisabled();

private:
    static double& LOG_TWO();
    static BigInteger*& NEGATIVE_ONE();

public:
    static BigInteger*& ONE();

private:
    static BigInteger*& SMALL_PRIME_PRODUCT();

public:
    static BigInteger*& TEN();

private:
    static BigInteger*& TWO();

public:
    static BigInteger*& ZERO();

private:
    static ::int64_tArray*& bitsPerDigit();

public: /* package */
    static ::int32_tArray*& bnExpModThreshTable();

private:
    static ::int32_tArray*& digitsPerInt();
    static ::int32_tArray*& digitsPerLong();
    static ::int32_tArray*& intRadix();
    static ::doubleArray*& logCache();
    static BigIntegerArray*& longRadix();
    static BigIntegerArray*& negConst();
    static BigIntegerArray*& posConst();
    static std::atomic< BigIntegerArrayArray* >& powerCache();
    static ::java::io::ObjectStreamFieldArray*& serialPersistentFields();
    static ::java::lang::StringArray*& zeros();
    virtual ::java::lang::Class* getClass0();
};
