// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/math/BigDecimal_LongOverflow.hpp>

extern void unimplemented_(const char16_t* name);
java::math::BigDecimal_LongOverflow::BigDecimal_LongOverflow(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::BigInteger*& java::math::BigDecimal_LongOverflow::LONGMAX()
{
    clinit();
    return LONGMAX_;
}
java::math::BigInteger* java::math::BigDecimal_LongOverflow::LONGMAX_;
java::math::BigInteger*& java::math::BigDecimal_LongOverflow::LONGMIN()
{
    clinit();
    return LONGMIN_;
}
java::math::BigInteger* java::math::BigDecimal_LongOverflow::LONGMIN_;

/* private: void ::java::math::BigDecimal_LongOverflow::ctor() */
void java::math::BigDecimal_LongOverflow::check(BigDecimal* num)
{ /* stub */
    clinit();
    unimplemented_(u"void java::math::BigDecimal_LongOverflow::check(BigDecimal* num)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::math::BigDecimal_LongOverflow::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.BigDecimal.LongOverflow", 33);
    return c;
}

java::lang::Class* java::math::BigDecimal_LongOverflow::getClass0()
{
    return class_();
}

