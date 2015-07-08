// Generated from /config/src/main/java/com/typesafe/config/impl/Parseable.java
#include <com/typesafe/config/impl/Parseable_1.hpp>

#include <java/util/LinkedList.hpp>

com::typesafe::config::impl::Parseable_1::Parseable_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

java::util::LinkedList* com::typesafe::config::impl::Parseable_1::initialValue()
{
    return new ::java::util::LinkedList();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::Parseable_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::typesafe::config::impl::Parseable_1::getClass0()
{
    return class_();
}

