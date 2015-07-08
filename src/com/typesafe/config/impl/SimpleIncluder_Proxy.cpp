// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncluder.java
#include <com/typesafe/config/impl/SimpleIncluder_Proxy.hpp>

#include <com/typesafe/config/ConfigIncluder.hpp>
#include <com/typesafe/config/ConfigIncluderClasspath.hpp>
#include <com/typesafe/config/ConfigIncluderFile.hpp>
#include <com/typesafe/config/ConfigIncluderURL.hpp>
#include <com/typesafe/config/ConfigObject.hpp>
#include <com/typesafe/config/impl/SimpleIncluder.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>

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
com::typesafe::config::impl::SimpleIncluder_Proxy::SimpleIncluder_Proxy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleIncluder_Proxy::SimpleIncluder_Proxy(::com::typesafe::config::ConfigIncluder* delegate) 
    : SimpleIncluder_Proxy(*static_cast< ::default_init_tag* >(0))
{
    ctor(delegate);
}

void com::typesafe::config::impl::SimpleIncluder_Proxy::ctor(::com::typesafe::config::ConfigIncluder* delegate)
{
    super::ctor();
    this->delegate = delegate;
}

com::typesafe::config::ConfigIncluder* com::typesafe::config::impl::SimpleIncluder_Proxy::withFallback(::com::typesafe::config::ConfigIncluder* fallback)
{
    return this;
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder_Proxy::include(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* what)
{
    return npc(delegate)->include(context, what);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder_Proxy::includeResources(::com::typesafe::config::ConfigIncludeContext* context, ::java::lang::String* what)
{
    if(dynamic_cast< ::com::typesafe::config::ConfigIncluderClasspath* >(delegate) != nullptr)
        return npc((java_cast< ::com::typesafe::config::ConfigIncluderClasspath* >(delegate)))->includeResources(context, what);
    else
        return SimpleIncluder::includeResourceWithoutFallback(context, what);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder_Proxy::includeURL(::com::typesafe::config::ConfigIncludeContext* context, ::java::net::URL* what)
{
    if(dynamic_cast< ::com::typesafe::config::ConfigIncluderURL* >(delegate) != nullptr)
        return npc((java_cast< ::com::typesafe::config::ConfigIncluderURL* >(delegate)))->includeURL(context, what);
    else
        return SimpleIncluder::includeURLWithoutFallback(context, what);
}

com::typesafe::config::ConfigObject* com::typesafe::config::impl::SimpleIncluder_Proxy::includeFile(::com::typesafe::config::ConfigIncludeContext* context, ::java::io::File* what)
{
    if(dynamic_cast< ::com::typesafe::config::ConfigIncluderFile* >(delegate) != nullptr)
        return npc((java_cast< ::com::typesafe::config::ConfigIncluderFile* >(delegate)))->includeFile(context, what);
    else
        return SimpleIncluder::includeFileWithoutFallback(context, what);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleIncluder_Proxy::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleIncluder.Proxy", 45);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleIncluder_Proxy::getClass0()
{
    return class_();
}

