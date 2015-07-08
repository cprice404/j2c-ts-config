// Generated from /config/src/main/java/com/typesafe/config/impl/PropertiesParser.java
#include <com/typesafe/config/impl/PropertiesParser_fromPathMap_1.hpp>

#include <com/typesafe/config/impl/Path.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::PropertiesParser_fromPathMap_1::PropertiesParser_fromPathMap_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

int32_t com::typesafe::config::impl::PropertiesParser_fromPathMap_1::compare(Path* a, Path* b)
{
    return npc(b)->length() - npc(a)->length();
}

int32_t com::typesafe::config::impl::PropertiesParser_fromPathMap_1::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< Path* >(o1), dynamic_cast< Path* >(o2));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::PropertiesParser_fromPathMap_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool com::typesafe::config::impl::PropertiesParser_fromPathMap_1::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* com::typesafe::config::impl::PropertiesParser_fromPathMap_1::getClass0()
{
    return class_();
}

