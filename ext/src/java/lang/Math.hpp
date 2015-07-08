// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Math final
    : public Object
{

public:
    typedef Object super;

private:
    static bool $assertionsDisabled_;

public:
    static constexpr double E { 2.718281828459045 };
    static constexpr double PI { 3.141592653589793 };

private:
    static int64_t negativeZeroDoubleBits_;
    static int64_t negativeZeroFloatBits_;
    static double twoToTheDoubleScaleDown_;
    static double twoToTheDoubleScaleUp_;

    /*void ctor(); (private) */

public:
    static double IEEEremainder(double f1, double f2);
    static int32_t abs(int32_t a);
    static int64_t abs(int64_t a);
    static float abs(float a);
    static double abs(double a);
    static double acos(double a);
    static int32_t addExact(int32_t x, int32_t y);
    static int64_t addExact(int64_t x, int64_t y);
    static double asin(double a);
    static double atan(double a);
    static double atan2(double y, double x);
    static double cbrt(double a);
    static double ceil(double a);
    static double copySign(double magnitude, double sign);
    static float copySign(float magnitude, float sign);
    static double cos(double a);
    static double cosh(double x);
    static int32_t decrementExact(int32_t a);
    static int64_t decrementExact(int64_t a);
    static double exp(double a);
    static double expm1(double x);
    static double floor(double a);
    static int32_t floorDiv(int32_t x, int32_t y);
    static int64_t floorDiv(int64_t x, int64_t y);
    static int32_t floorMod(int32_t x, int32_t y);
    static int64_t floorMod(int64_t x, int64_t y);
    static int32_t getExponent(float f);
    static int32_t getExponent(double d);
    static double hypot(double x, double y);
    static int32_t incrementExact(int32_t a);
    static int64_t incrementExact(int64_t a);
    static double log(double a);
    static double log10(double a);
    static double log1p(double x);
    static int32_t max(int32_t a, int32_t b);
    static int64_t max(int64_t a, int64_t b);
    static float max(float a, float b);
    static double max(double a, double b);
    static int32_t min(int32_t a, int32_t b);
    static int64_t min(int64_t a, int64_t b);
    static float min(float a, float b);
    static double min(double a, double b);
    static int32_t multiplyExact(int32_t x, int32_t y);
    static int64_t multiplyExact(int64_t x, int64_t y);
    static int32_t negateExact(int32_t a);
    static int64_t negateExact(int64_t a);
    static double nextAfter(double start, double direction);
    static float nextAfter(float start, double direction);
    static double nextDown(double d);
    static float nextDown(float f);
    static double nextUp(double d);
    static float nextUp(float f);
    static double pow(double a, double b);

public: /* package */
    static double powerOfTwoD(int32_t n);
    static float powerOfTwoF(int32_t n);

public:
    static double random();
    static double rint(double a);
    static int32_t round(float a);
    static int64_t round(double a);
    static double scalb(double d, int32_t scaleFactor);
    static float scalb(float f, int32_t scaleFactor);
    static double signum(double d);
    static float signum(float f);
    static double sin(double a);
    static double sinh(double x);
    static double sqrt(double a);
    static int32_t subtractExact(int32_t x, int32_t y);
    static int64_t subtractExact(int64_t x, int64_t y);
    static double tan(double a);
    static double tanh(double x);
    static double toDegrees(double angrad);
    static int32_t toIntExact(int64_t value);
    static double toRadians(double angdeg);
    static double ulp(double d);
    static float ulp(float f);

    // Generated
    Math();
protected:
    Math(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    static int64_t& negativeZeroDoubleBits();
    static int64_t& negativeZeroFloatBits();

public: /* package */
    static double& twoToTheDoubleScaleDown();
    static double& twoToTheDoubleScaleUp();

private:
    virtual ::java::lang::Class* getClass0();
};
