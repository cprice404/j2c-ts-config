// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncludeContext.java
#include <com/typesafe/config/impl/SimpleIncludeContext.hpp>

#include <com/typesafe/config/ConfigParseOptions.hpp>
#include <com/typesafe/config/ConfigParseable.hpp>
#include <com/typesafe/config/impl/ConfigImpl.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <com/typesafe/config/impl/SimpleIncluder.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleIncludeContext::SimpleIncludeContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleIncludeContext::SimpleIncludeContext(Parseable* parseable) 
    : SimpleIncludeContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(parseable);
}

void com::typesafe::config::impl::SimpleIncludeContext::ctor(Parseable* parseable)
{
    super::ctor();
    this->parseable = parseable;
}

com::typesafe::config::impl::SimpleIncludeContext* com::typesafe::config::impl::SimpleIncludeContext::withParseable(Parseable* parseable)
{
    if(parseable == this->parseable)
        return this;
    else
        return new SimpleIncludeContext(parseable);
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::SimpleIncludeContext::relativeTo(::java::lang::String* filename)
{
    if(ConfigImpl::traceLoadsEnabled())
        ConfigImpl::trace(::java::lang::StringBuilder().append(u"Looking for '"_j)->append(filename)
            ->append(u"' relative to "_j)
            ->append(static_cast< ::java::lang::Object* >(parseable))->toString());

    if(parseable != nullptr)
        return npc(parseable)->relativeTo(filename);
    else
        return nullptr;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::impl::SimpleIncludeContext::parseOptions()
{
    return SimpleIncluder::clearForInclude(npc(parseable)->options());
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleIncludeContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleIncludeContext", 45);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleIncludeContext::getClass0()
{
    return class_();
}

