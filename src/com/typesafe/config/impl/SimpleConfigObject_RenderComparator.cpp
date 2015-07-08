// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigObject.java
#include <com/typesafe/config/impl/SimpleConfigObject_RenderComparator.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleConfigObject_RenderComparator::SimpleConfigObject_RenderComparator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleConfigObject_RenderComparator::SimpleConfigObject_RenderComparator()
    : SimpleConfigObject_RenderComparator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t com::typesafe::config::impl::SimpleConfigObject_RenderComparator::serialVersionUID;

bool com::typesafe::config::impl::SimpleConfigObject_RenderComparator::isAllDigits(::java::lang::String* s)
{
    clinit();
    auto length = npc(s)->length();
    if(length == 0)
        return false;

    for (auto i = int32_t(0); i < length; ++i) {
        auto c = npc(s)->charAt(i);
        if(::java::lang::Character::isDigit(c))
            continue;
        else
            return false;
    }
    return true;
}

int32_t com::typesafe::config::impl::SimpleConfigObject_RenderComparator::compare(::java::lang::String* a, ::java::lang::String* b)
{
    auto aDigits = isAllDigits(a);
    auto bDigits = isAllDigits(b);
    if(aDigits && bDigits) {
        return ::java::lang::Integer::compare(::java::lang::Integer::parseInt(a), ::java::lang::Integer::parseInt(b));
    } else if(aDigits) {
        return -int32_t(1);
    } else if(bDigits) {
        return 1;
    } else {
        return npc(a)->compareTo(b);
    }
}

int32_t com::typesafe::config::impl::SimpleConfigObject_RenderComparator::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< ::java::lang::String* >(o1), dynamic_cast< ::java::lang::String* >(o2));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject_RenderComparator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleConfigObject.RenderComparator", 60);
    return c;
}

bool com::typesafe::config::impl::SimpleConfigObject_RenderComparator::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* com::typesafe::config::impl::SimpleConfigObject_RenderComparator::getClass0()
{
    return class_();
}

