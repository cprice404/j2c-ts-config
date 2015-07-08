// Generated from /config/src/main/java/com/typesafe/config/impl/PathParser.java
#include <com/typesafe/config/impl/PathParser_Element.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::PathParser_Element::PathParser_Element(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::PathParser_Element::PathParser_Element(::java::lang::String* initial, bool canBeEmpty) 
    : PathParser_Element(*static_cast< ::default_init_tag* >(0))
{
    ctor(initial,canBeEmpty);
}

void com::typesafe::config::impl::PathParser_Element::ctor(::java::lang::String* initial, bool canBeEmpty)
{
    super::ctor();
    this->canBeEmpty = canBeEmpty;
    this->sb = new ::java::lang::StringBuilder(initial);
}

java::lang::String* com::typesafe::config::impl::PathParser_Element::toString()
{
    return ::java::lang::StringBuilder().append(u"Element("_j)->append(npc(sb)->toString())
        ->append(u","_j)
        ->append(canBeEmpty)
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::PathParser_Element::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.PathParser.Element", 43);
    return c;
}

java::lang::Class* com::typesafe::config::impl::PathParser_Element::getClass0()
{
    return class_();
}

