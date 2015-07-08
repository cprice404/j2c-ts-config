// Generated from /config/src/test/java/beanconfig/StringsConfig.java
#include <beanconfig/StringsConfig.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
beanconfig::StringsConfig::StringsConfig(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

beanconfig::StringsConfig::StringsConfig()
    : StringsConfig(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* beanconfig::StringsConfig::getAbcd()
{
    return abcd;
}

void beanconfig::StringsConfig::setAbcd(::java::lang::String* s)
{
    abcd = s;
}

java::lang::String* beanconfig::StringsConfig::getYes()
{
    return yes;
}

void beanconfig::StringsConfig::setYes(::java::lang::String* s)
{
    yes = s;
}

bool beanconfig::StringsConfig::equals(::java::lang::Object* o)
{
    if(dynamic_cast< StringsConfig* >(o) != nullptr) {
        auto sc = java_cast< StringsConfig* >(o);
        return npc(npc(sc)->abcd)->equals(abcd) && npc(npc(sc)->yes)->equals(yes);
    } else {
        return false;
    }
}

int32_t beanconfig::StringsConfig::hashCode()
{
    auto h = int32_t(41) * (int32_t(41) + npc(abcd)->hashCode());
    return h + npc(yes)->hashCode();
}

java::lang::String* beanconfig::StringsConfig::toString()
{
    return ::java::lang::StringBuilder().append(u"StringsConfig("_j)->append(abcd)
        ->append(u","_j)
        ->append(yes)
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* beanconfig::StringsConfig::class_()
{
    static ::java::lang::Class* c = ::class_(u"beanconfig.StringsConfig", 24);
    return c;
}

java::lang::Class* beanconfig::StringsConfig::getClass0()
{
    return class_();
}

