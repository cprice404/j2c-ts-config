// Generated from /config/src/main/java/com/typesafe/config/ConfigRenderOptions.java
#include <com/typesafe/config/ConfigRenderOptions.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::ConfigRenderOptions::ConfigRenderOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigRenderOptions::ConfigRenderOptions(bool originComments, bool comments, bool formatted, bool json) 
    : ConfigRenderOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(originComments,comments,formatted,json);
}

void com::typesafe::config::ConfigRenderOptions::ctor(bool originComments, bool comments, bool formatted, bool json)
{
    super::ctor();
    this->originComments = originComments;
    this->comments = comments;
    this->formatted = formatted;
    this->json = json;
}

com::typesafe::config::ConfigRenderOptions* com::typesafe::config::ConfigRenderOptions::defaults()
{
    clinit();
    return new ConfigRenderOptions(true, true, true, true);
}

com::typesafe::config::ConfigRenderOptions* com::typesafe::config::ConfigRenderOptions::concise()
{
    clinit();
    return new ConfigRenderOptions(false, false, false, true);
}

com::typesafe::config::ConfigRenderOptions* com::typesafe::config::ConfigRenderOptions::setComments(bool value)
{
    if(value == comments)
        return this;
    else
        return new ConfigRenderOptions(originComments, value, formatted, json);
}

bool com::typesafe::config::ConfigRenderOptions::getComments()
{
    return comments;
}

com::typesafe::config::ConfigRenderOptions* com::typesafe::config::ConfigRenderOptions::setOriginComments(bool value)
{
    if(value == originComments)
        return this;
    else
        return new ConfigRenderOptions(value, comments, formatted, json);
}

bool com::typesafe::config::ConfigRenderOptions::getOriginComments()
{
    return originComments;
}

com::typesafe::config::ConfigRenderOptions* com::typesafe::config::ConfigRenderOptions::setFormatted(bool value)
{
    if(value == formatted)
        return this;
    else
        return new ConfigRenderOptions(originComments, comments, value, json);
}

bool com::typesafe::config::ConfigRenderOptions::getFormatted()
{
    return formatted;
}

com::typesafe::config::ConfigRenderOptions* com::typesafe::config::ConfigRenderOptions::setJson(bool value)
{
    if(value == json)
        return this;
    else
        return new ConfigRenderOptions(originComments, comments, formatted, value);
}

bool com::typesafe::config::ConfigRenderOptions::getJson()
{
    return json;
}

java::lang::String* com::typesafe::config::ConfigRenderOptions::toString()
{
    auto sb = new ::java::lang::StringBuilder(u"ConfigRenderOptions("_j);
    if(originComments)
        npc(sb)->append(u"originComments,"_j);

    if(comments)
        npc(sb)->append(u"comments,"_j);

    if(formatted)
        npc(sb)->append(u"formatted,"_j);

    if(json)
        npc(sb)->append(u"json,"_j);

    if(npc(sb)->charAt(npc(sb)->length() - int32_t(1)) == u',')
        npc(sb)->setLength(npc(sb)->length() - int32_t(1));

    npc(sb)->append(u")"_j);
    return npc(sb)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigRenderOptions::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigRenderOptions", 39);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigRenderOptions::getClass0()
{
    return class_();
}

