// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleIncluder.java
#include <com/typesafe/config/impl/SimpleIncluder_RelativeNameSource.hpp>

#include <com/typesafe/config/ConfigIncludeContext.hpp>
#include <com/typesafe/config/ConfigParseable.hpp>
#include <com/typesafe/config/impl/Parseable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::impl::SimpleIncluder_RelativeNameSource::SimpleIncluder_RelativeNameSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SimpleIncluder_RelativeNameSource::SimpleIncluder_RelativeNameSource(::com::typesafe::config::ConfigIncludeContext* context) 
    : SimpleIncluder_RelativeNameSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(context);
}

void com::typesafe::config::impl::SimpleIncluder_RelativeNameSource::ctor(::com::typesafe::config::ConfigIncludeContext* context)
{
    super::ctor();
    this->context = context;
}

com::typesafe::config::ConfigParseable* com::typesafe::config::impl::SimpleIncluder_RelativeNameSource::nameToParseable(::java::lang::String* name, ::com::typesafe::config::ConfigParseOptions* options)
{
    auto p = npc(context)->relativeTo(name);
    if(p == nullptr) {
        return Parseable::newNotFound(name, ::java::lang::StringBuilder().append(u"include was not found: '"_j)->append(name)
            ->append(u"'"_j)->toString(), options);
    } else {
        return p;
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SimpleIncluder_RelativeNameSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SimpleIncluder.RelativeNameSource", 58);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SimpleIncluder_RelativeNameSource::getClass0()
{
    return class_();
}

