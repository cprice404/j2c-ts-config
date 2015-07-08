// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/time/Duration_DurationUnits.hpp>

extern void unimplemented_(const char16_t* name);
java::time::Duration_DurationUnits::Duration_DurationUnits(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::List*& java::time::Duration_DurationUnits::UNITS()
{
    clinit();
    return UNITS_;
}
java::util::List* java::time::Duration_DurationUnits::UNITS_;

/* private: void ::java::time::Duration_DurationUnits::ctor() */
extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::time::Duration_DurationUnits::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.time.Duration.DurationUnits", 32);
    return c;
}

java::lang::Class* java::time::Duration_DurationUnits::getClass0()
{
    return class_();
}

