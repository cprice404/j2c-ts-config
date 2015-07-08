// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/math/BigDecimal_UnsafeHolder.hpp>

extern void unimplemented_(const char16_t* name);
java::math::BigDecimal_UnsafeHolder::BigDecimal_UnsafeHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

int64_t& java::math::BigDecimal_UnsafeHolder::intCompactOffset()
{
    clinit();
    return intCompactOffset_;
}
int64_t java::math::BigDecimal_UnsafeHolder::intCompactOffset_;
int64_t& java::math::BigDecimal_UnsafeHolder::intValOffset()
{
    clinit();
    return intValOffset_;
}
int64_t java::math::BigDecimal_UnsafeHolder::intValOffset_;
sun::misc::Unsafe*& java::math::BigDecimal_UnsafeHolder::unsafe()
{
    clinit();
    return unsafe_;
}
sun::misc::Unsafe* java::math::BigDecimal_UnsafeHolder::unsafe_;

/* private: void ::java::math::BigDecimal_UnsafeHolder::ctor() */
void java::math::BigDecimal_UnsafeHolder::setIntCompactVolatile(BigDecimal* bd, int64_t val)
{ /* stub */
    clinit();
    unimplemented_(u"void java::math::BigDecimal_UnsafeHolder::setIntCompactVolatile(BigDecimal* bd, int64_t val)");
}

void java::math::BigDecimal_UnsafeHolder::setIntValVolatile(BigDecimal* bd, BigInteger* val)
{ /* stub */
    clinit();
    unimplemented_(u"void java::math::BigDecimal_UnsafeHolder::setIntValVolatile(BigDecimal* bd, BigInteger* val)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::math::BigDecimal_UnsafeHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.BigDecimal.UnsafeHolder", 33);
    return c;
}

java::lang::Class* java::math::BigDecimal_UnsafeHolder::getClass0()
{
    return class_();
}

