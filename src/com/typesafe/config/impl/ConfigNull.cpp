// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNull.java
#include <com/typesafe/config/impl/ConfigNull.hpp>

#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/ConfigValueType.hpp>
#include <com/typesafe/config/impl/SerializedConfigValue.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::ConfigNull::ConfigNull(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNull::ConfigNull(::com::typesafe::config::ConfigOrigin* origin) 
    : ConfigNull(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin);
}

constexpr int64_t com::typesafe::config::impl::ConfigNull::serialVersionUID;

void com::typesafe::config::impl::ConfigNull::ctor(::com::typesafe::config::ConfigOrigin* origin)
{
    super::ctor(origin);
}

com::typesafe::config::ConfigValueType* com::typesafe::config::impl::ConfigNull::valueType()
{
    return ::com::typesafe::config::ConfigValueType::NULL_;
}

java::lang::Object* com::typesafe::config::impl::ConfigNull::unwrapped()
{
    return nullptr;
}

java::lang::String* com::typesafe::config::impl::ConfigNull::transformToString()
{
    return u"null"_j;
}

void com::typesafe::config::impl::ConfigNull::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options)
{
    npc(sb)->append(u"null"_j);
}

com::typesafe::config::impl::ConfigNull* com::typesafe::config::impl::ConfigNull::newCopy(::com::typesafe::config::ConfigOrigin* origin)
{
    return new ConfigNull(origin);
}

java::lang::Object* com::typesafe::config::impl::ConfigNull::writeReplace() /* throws(ObjectStreamException) */
{
    return new SerializedConfigValue(static_cast< ::com::typesafe::config::ConfigValue* >(this));
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNull::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNull", 35);
    return c;
}

void com::typesafe::config::impl::ConfigNull::render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options)
{
    super::render(sb, indent, atRoot, atKey, options);
}

java::lang::String* com::typesafe::config::impl::ConfigNull::render()
{
    return super::render();
}

java::lang::String* com::typesafe::config::impl::ConfigNull::render(::com::typesafe::config::ConfigRenderOptions* options)
{
    return super::render(options);
}

java::lang::Class* com::typesafe::config::impl::ConfigNull::getClass0()
{
    return class_();
}

