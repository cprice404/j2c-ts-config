// Generated from /config/src/main/java/com/typesafe/config/ConfigValueFactory.java
#include <com/typesafe/config/ConfigValueFactory.hpp>

#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Iterable.hpp>
#include <java/util/Map.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

com::typesafe::config::ConfigValueFactory::ConfigValueFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigValueFactory::ConfigValueFactory() 
    : ConfigValueFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::ConfigValueFactory::ctor()
{
    super::ctor();
}

com::typesafe::config::ConfigValue* com::typesafe::config::ConfigValueFactory::fromAnyRef(::java::lang::Object* object, ::java::lang::String* originDescription)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImpl::fromAnyRef(object, originDescription);
}

com::typesafe::config::ConfigObject* com::typesafe::config::ConfigValueFactory::fromMap(::java::util::Map* values, ::java::lang::String* originDescription)
{
    clinit();
    return java_cast< ConfigObject* >(fromAnyRef(values, originDescription));
}

com::typesafe::config::ConfigList* com::typesafe::config::ConfigValueFactory::fromIterable(::java::lang::Iterable* values, ::java::lang::String* originDescription)
{
    clinit();
    return java_cast< ConfigList* >(fromAnyRef(values, originDescription));
}

com::typesafe::config::ConfigValue* com::typesafe::config::ConfigValueFactory::fromAnyRef(::java::lang::Object* object)
{
    clinit();
    return fromAnyRef(object, nullptr);
}

com::typesafe::config::ConfigObject* com::typesafe::config::ConfigValueFactory::fromMap(::java::util::Map* values)
{
    clinit();
    return fromMap(values, nullptr);
}

com::typesafe::config::ConfigList* com::typesafe::config::ConfigValueFactory::fromIterable(::java::lang::Iterable* values)
{
    clinit();
    return fromIterable(values, nullptr);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigValueFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigValueFactory", 38);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigValueFactory::getClass0()
{
    return class_();
}

