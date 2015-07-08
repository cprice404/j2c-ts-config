// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar
#include <java/util/Arrays_NaturalOrder.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Arrays_NaturalOrder::Arrays_NaturalOrder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Arrays_NaturalOrder::Arrays_NaturalOrder()
    : Arrays_NaturalOrder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Arrays_NaturalOrder*& java::util::Arrays_NaturalOrder::INSTANCE()
{
    clinit();
    return INSTANCE_;
}
java::util::Arrays_NaturalOrder* java::util::Arrays_NaturalOrder::INSTANCE_;

void ::java::util::Arrays_NaturalOrder::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Arrays_NaturalOrder::ctor()");
}

int32_t java::util::Arrays_NaturalOrder::compare(::java::lang::Object* first, ::java::lang::Object* second)
{ /* stub */
    unimplemented_(u"int32_t java::util::Arrays_NaturalOrder::compare(::java::lang::Object* first, ::java::lang::Object* second)");
    return 0;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* java::util::Arrays_NaturalOrder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Arrays.NaturalOrder", 29);
    return c;
}

bool java::util::Arrays_NaturalOrder::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* java::util::Arrays_NaturalOrder::getClass0()
{
    return class_();
}

