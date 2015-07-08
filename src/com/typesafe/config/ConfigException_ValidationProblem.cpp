// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException_ValidationProblem.hpp>

#include <com/typesafe/config/ConfigOrigin.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::ConfigException_ValidationProblem::ConfigException_ValidationProblem(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException_ValidationProblem::ConfigException_ValidationProblem(::java::lang::String* path, ConfigOrigin* origin, ::java::lang::String* problem) 
    : ConfigException_ValidationProblem(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,origin,problem);
}

void com::typesafe::config::ConfigException_ValidationProblem::ctor(::java::lang::String* path, ConfigOrigin* origin, ::java::lang::String* problem)
{
    super::ctor();
    this->path_ = path;
    this->origin_ = origin;
    this->problem_ = problem;
}

java::lang::String* com::typesafe::config::ConfigException_ValidationProblem::path()
{
    return path_;
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::ConfigException_ValidationProblem::origin()
{
    return origin_;
}

java::lang::String* com::typesafe::config::ConfigException_ValidationProblem::problem()
{
    return problem_;
}

java::lang::String* com::typesafe::config::ConfigException_ValidationProblem::toString()
{
    return ::java::lang::StringBuilder().append(u"ValidationProblem("_j)->append(path_)
        ->append(u","_j)
        ->append(static_cast< ::java::lang::Object* >(origin_))
        ->append(u","_j)
        ->append(problem_)
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException_ValidationProblem::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException.ValidationProblem", 53);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException_ValidationProblem::getClass0()
{
    return class_();
}

