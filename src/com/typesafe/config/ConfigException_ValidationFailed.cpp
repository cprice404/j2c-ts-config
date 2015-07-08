// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_ValidationFailed.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_ValidationProblem.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Iterator.hpp>

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
com::typesafe::config::ConfigException_ValidationFailed::ConfigException_ValidationFailed(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_ValidationFailed::ConfigException_ValidationFailed(::java::lang::Iterable* problems) 
    : ConfigException_ValidationFailed(*static_cast< ::default_init_tag* >(0))
{
    ctor(problems);
}

constexpr int64_t com::typesafe::config::ConfigException_ValidationFailed::serialVersionUID;

void com::typesafe::config::ConfigException_ValidationFailed::ctor(::java::lang::Iterable* problems)
{
    super::ctor(makeMessage(problems), static_cast< ::java::lang::Throwable* >(nullptr));
    this->problems_ = problems;
}

java::lang::Iterable* com::typesafe::config::ConfigException_ValidationFailed::problems()
{
    return problems_;
}

java::lang::String* com::typesafe::config::ConfigException_ValidationFailed::makeMessage(::java::lang::Iterable* problems)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    for (auto _i = npc(problems)->iterator(); _i->hasNext(); ) {
        ConfigException_ValidationProblem* p = java_cast< ConfigException_ValidationProblem* >(_i->next());
        {
            npc(sb)->append(npc(npc(p)->origin())->description());
            npc(sb)->append(u": "_j);
            npc(sb)->append(npc(p)->path());
            npc(sb)->append(u": "_j);
            npc(sb)->append(npc(p)->problem());
            npc(sb)->append(u", "_j);
        }
    }
    if(npc(sb)->length() == 0)
        throw new ConfigException_BugOrBroken(u"ValidationFailed must have a non-empty list of problems"_j);

    npc(sb)->setLength(npc(sb)->length() - int32_t(2));
    return npc(sb)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_ValidationFailed::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.ValidationFailed", 52);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_ValidationFailed::getClass0()
{
    return class_();
}

