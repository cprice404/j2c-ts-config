// Generated from /config/src/main/java/com/typesafe/config/ConfigParseOptions.java
#include <com/typesafe/config/ConfigParseOptions.hpp>

#include <com/typesafe/config/ConfigIncluder.hpp>
#include <com/typesafe/config/ConfigSyntax.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::ConfigParseOptions::ConfigParseOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigParseOptions::ConfigParseOptions(ConfigSyntax* syntax, ::java::lang::String* originDescription, bool allowMissing, ConfigIncluder* includer, ::java::lang::ClassLoader* classLoader) 
    : ConfigParseOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(syntax,originDescription,allowMissing,includer,classLoader);
}

void com::typesafe::config::ConfigParseOptions::ctor(ConfigSyntax* syntax, ::java::lang::String* originDescription, bool allowMissing, ConfigIncluder* includer, ::java::lang::ClassLoader* classLoader)
{
    super::ctor();
    this->syntax = syntax;
    this->originDescription = originDescription;
    this->allowMissing = allowMissing;
    this->includer = includer;
    this->classLoader = classLoader;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::defaults()
{
    clinit();
    return new ConfigParseOptions(nullptr, nullptr, true, nullptr, nullptr);
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::setSyntax(ConfigSyntax* syntax)
{
    if(this->syntax == syntax)
        return this;
    else
        return new ConfigParseOptions(syntax, this->originDescription, this->allowMissing, this->includer, this->classLoader);
}

com::typesafe::config::ConfigSyntax* com::typesafe::config::ConfigParseOptions::getSyntax()
{
    return syntax;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::setOriginDescription(::java::lang::String* originDescription)
{
    if(this->originDescription == originDescription)
        return this;
    else if(this->originDescription != nullptr && originDescription != nullptr && npc(this->originDescription)->equals(originDescription))
        return this;
    else
        return new ConfigParseOptions(this->syntax, originDescription, this->allowMissing, this->includer, this->classLoader);
}

java::lang::String* com::typesafe::config::ConfigParseOptions::getOriginDescription()
{
    return originDescription;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::withFallbackOriginDescription(::java::lang::String* originDescription)
{
    if(this->originDescription == nullptr)
        return setOriginDescription(originDescription);
    else
        return this;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::setAllowMissing(bool allowMissing)
{
    if(this->allowMissing == allowMissing)
        return this;
    else
        return new ConfigParseOptions(this->syntax, this->originDescription, allowMissing, this->includer, this->classLoader);
}

bool com::typesafe::config::ConfigParseOptions::getAllowMissing()
{
    return allowMissing;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::setIncluder(ConfigIncluder* includer)
{
    if(this->includer == includer)
        return this;
    else
        return new ConfigParseOptions(this->syntax, this->originDescription, this->allowMissing, includer, this->classLoader);
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::prependIncluder(ConfigIncluder* includer)
{
    if(includer == nullptr)
        throw new ::java::lang::NullPointerException(u"null includer passed to prependIncluder"_j);

    if(this->includer == includer)
        return this;
    else if(this->includer != nullptr)
        return setIncluder(npc(includer)->withFallback(this->includer));
    else
        return setIncluder(includer);
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::appendIncluder(ConfigIncluder* includer)
{
    if(includer == nullptr)
        throw new ::java::lang::NullPointerException(u"null includer passed to appendIncluder"_j);

    if(this->includer == includer)
        return this;
    else if(this->includer != nullptr)
        return setIncluder(npc(this->includer)->withFallback(includer));
    else
        return setIncluder(includer);
}

com::typesafe::config::ConfigIncluder* com::typesafe::config::ConfigParseOptions::getIncluder()
{
    return includer;
}

com::typesafe::config::ConfigParseOptions* com::typesafe::config::ConfigParseOptions::setClassLoader(::java::lang::ClassLoader* loader)
{
    if(this->classLoader == loader)
        return this;
    else
        return new ConfigParseOptions(this->syntax, this->originDescription, this->allowMissing, this->includer, loader);
}

java::lang::ClassLoader* com::typesafe::config::ConfigParseOptions::getClassLoader()
{
    if(this->classLoader == nullptr)
        return npc(::java::lang::Thread::currentThread())->getContextClassLoader();
    else
        return this->classLoader;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigParseOptions::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigParseOptions", 38);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigParseOptions::getClass0()
{
    return class_();
}

