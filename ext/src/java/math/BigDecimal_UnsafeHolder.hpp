// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/math/fwd-config.hpp>
#include <sun/misc/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::math::BigDecimal_UnsafeHolder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static int64_t intCompactOffset_;
    static int64_t intValOffset_;
    static ::sun::misc::Unsafe* unsafe_;

    /*void ctor(); (private) */

public: /* package */
    static void setIntCompactVolatile(BigDecimal* bd, int64_t val);
    static void setIntValVolatile(BigDecimal* bd, BigInteger* val);

    // Generated

public:
    BigDecimal_UnsafeHolder();
protected:
    BigDecimal_UnsafeHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static int64_t& intCompactOffset();
    static int64_t& intValOffset();
    static ::sun::misc::Unsafe*& unsafe();
    virtual ::java::lang::Class* getClass0();
};
