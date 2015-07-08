// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <java/math/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::math::BigDecimal_LongOverflow
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static BigInteger* LONGMAX_;
    static BigInteger* LONGMIN_;

    /*void ctor(); (private) */

public:
    static void check(BigDecimal* num);

    // Generated
    BigDecimal_LongOverflow();
protected:
    BigDecimal_LongOverflow(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static BigInteger*& LONGMAX();
    static BigInteger*& LONGMIN();
    virtual ::java::lang::Class* getClass0();
};
