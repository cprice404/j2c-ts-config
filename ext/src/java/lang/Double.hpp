// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Double final
    : public Number
    , public Comparable
{

public:
    typedef Number super;
    static constexpr int32_t BYTES { int32_t(8) };
    static constexpr int32_t MAX_EXPONENT { int32_t(1023) };
    static constexpr double MAX_VALUE { 1.7976931348623157E308 };
    static constexpr int32_t MIN_EXPONENT { int32_t(-1022) };
    static constexpr double MIN_NORMAL { 2.2250738585072014E-308 };
    static constexpr double MIN_VALUE { 4.9E-324 };
    static constexpr double NEGATIVE_INFINITY { (-std::numeric_limits<double>::infinity()) };
    static constexpr double NaN { std::numeric_limits<double>::quiet_NaN() };
    static constexpr double POSITIVE_INFINITY { std::numeric_limits<double>::infinity() };
    static constexpr int32_t SIZE { int32_t(64) };

private:
    static Class* TYPE_;
    static constexpr int64_t serialVersionUID { int64_t(-9172774392245257468LL) };
    double value {  };

protected:
    void ctor(double value);
    void ctor(String* s);

public:
    int8_t byteValue() override;
    static int32_t compare(double d1, double d2);
    int32_t compareTo(Double* anotherDouble);
    static int64_t doubleToLongBits(double value);
    static int64_t doubleToRawLongBits(double value);
    double doubleValue() override;
    bool equals(Object* obj) override;
    float floatValue() override;
    int32_t hashCode() override;
    static int32_t hashCode(double value);
    int32_t intValue() override;
    static bool isFinite(double d);
    bool isInfinite();
    static bool isInfinite(double v);
    bool isNaN();
    static bool isNaN(double v);
    static double longBitsToDouble(int64_t bits);
    int64_t longValue() override;
    static double max(double a, double b);
    static double min(double a, double b);
    static double parseDouble(String* s);
    int16_t shortValue() override;
    static double sum(double a, double b);
    static String* toHexString(double d);
    String* toString() override;
    static String* toString(double d);
    static Double* valueOf(String* s);
    static Double* valueOf(double d);

    // Generated
    Double(double value);
    Double(String* s);
protected:
    Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
