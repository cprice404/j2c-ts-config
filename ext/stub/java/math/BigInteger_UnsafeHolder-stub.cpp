// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/math/BigInteger_UnsafeHolder.hpp>

extern void unimplemented_(const char16_t* name);
java::math::BigInteger_UnsafeHolder::BigInteger_UnsafeHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

int64_t& java::math::BigInteger_UnsafeHolder::magOffset()
{
    clinit();
    return magOffset_;
}
int64_t java::math::BigInteger_UnsafeHolder::magOffset_;
int64_t& java::math::BigInteger_UnsafeHolder::signumOffset()
{
    clinit();
    return signumOffset_;
}
int64_t java::math::BigInteger_UnsafeHolder::signumOffset_;
sun::misc::Unsafe*& java::math::BigInteger_UnsafeHolder::unsafe()
{
    clinit();
    return unsafe_;
}
sun::misc::Unsafe* java::math::BigInteger_UnsafeHolder::unsafe_;

/* private: void ::java::math::BigInteger_UnsafeHolder::ctor() */
void java::math::BigInteger_UnsafeHolder::putMag(BigInteger* bi, ::int32_tArray* magnitude)
{ /* stub */
    clinit();
    unimplemented_(u"void java::math::BigInteger_UnsafeHolder::putMag(BigInteger* bi, ::int32_tArray* magnitude)");
}

void java::math::BigInteger_UnsafeHolder::putSign(BigInteger* bi, int32_t sign)
{ /* stub */
    clinit();
    unimplemented_(u"void java::math::BigInteger_UnsafeHolder::putSign(BigInteger* bi, int32_t sign)");
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::math::BigInteger_UnsafeHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.BigInteger.UnsafeHolder", 33);
    return c;
}

java::lang::Class* java::math::BigInteger_UnsafeHolder::getClass0()
{
    return class_();
}

