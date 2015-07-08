// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Long final
    : public Number
    , public Comparable
{

public:
    typedef Number super;
    static constexpr int32_t BYTES { int32_t(8) };
    static constexpr int64_t MAX_VALUE { int64_t(9223372036854775807LL) };
    static constexpr int64_t MIN_VALUE { int64_t(-0x7fffffffffffffffLL-1) };
    static constexpr int32_t SIZE { int32_t(64) };

private:
    static Class* TYPE_;
    static constexpr int64_t serialVersionUID { int64_t(4290774380558885855LL) };
    int64_t value {  };

protected:
    void ctor(int64_t value);
    void ctor(String* s);

public:
    static int32_t bitCount(int64_t i);
    int8_t byteValue() override;
    static int32_t compare(int64_t x, int64_t y);
    int32_t compareTo(Long* anotherLong);
    static int32_t compareUnsigned(int64_t x, int64_t y);
    static Long* decode(String* nm);
    static int64_t divideUnsigned(int64_t dividend, int64_t divisor);
    double doubleValue() override;
    bool equals(Object* obj) override;
    float floatValue() override;

public: /* package */
    static int32_t formatUnsignedLong(int64_t val, int32_t shift, ::char16_tArray* buf, int32_t offset, int32_t len);
    static void getChars(int64_t i, int32_t index, ::char16_tArray* buf);

public:
    static Long* getLong(String* nm);
    static Long* getLong(String* nm, int64_t val);
    static Long* getLong(String* nm, Long* val);
    int32_t hashCode() override;
    static int32_t hashCode(int64_t value);
    static int64_t highestOneBit(int64_t i);
    int32_t intValue() override;
    int64_t longValue() override;
    static int64_t lowestOneBit(int64_t i);
    static int64_t max(int64_t a, int64_t b);
    static int64_t min(int64_t a, int64_t b);
    static int32_t numberOfLeadingZeros(int64_t i);
    static int32_t numberOfTrailingZeros(int64_t i);
    static int64_t parseLong(String* s);
    static int64_t parseLong(String* s, int32_t radix);
    static int64_t parseUnsignedLong(String* s);
    static int64_t parseUnsignedLong(String* s, int32_t radix);
    static int64_t remainderUnsigned(int64_t dividend, int64_t divisor);
    static int64_t reverse(int64_t i);
    static int64_t reverseBytes(int64_t i);
    static int64_t rotateLeft(int64_t i, int32_t distance);
    static int64_t rotateRight(int64_t i, int32_t distance);
    int16_t shortValue() override;
    static int32_t signum(int64_t i);

public: /* package */
    static int32_t stringSize(int64_t x);

public:
    static int64_t sum(int64_t a, int64_t b);
    static String* toBinaryString(int64_t i);
    static String* toHexString(int64_t i);
    static String* toOctalString(int64_t i);
    String* toString() override;
    static String* toString(int64_t i);
    static String* toString(int64_t i, int32_t radix);
    /*static ::java::math::BigInteger* toUnsignedBigInteger(int64_t i); (private) */
    static String* toUnsignedString(int64_t i);
    static String* toUnsignedString(int64_t i, int32_t radix);

public: /* package */
    static String* toUnsignedString0(int64_t val, int32_t shift);

public:
    static Long* valueOf(String* s);
    static Long* valueOf(int64_t l);
    static Long* valueOf(String* s, int32_t radix);

    // Generated
    Long(int64_t value);
    Long(String* s);
protected:
    Long(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
