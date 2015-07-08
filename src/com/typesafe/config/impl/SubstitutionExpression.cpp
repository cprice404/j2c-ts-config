// Generated from /config/src/main/java/com/typesafe/config/impl/SubstitutionExpression.java
#include <com/typesafe/config/impl/SubstitutionExpression.hpp>

#include <com/typesafe/config/impl/Path.hpp>
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
com::typesafe::config::impl::SubstitutionExpression::SubstitutionExpression(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::SubstitutionExpression::SubstitutionExpression(Path* path, bool optional) 
    : SubstitutionExpression(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,optional);
}

void com::typesafe::config::impl::SubstitutionExpression::ctor(Path* path, bool optional)
{
    super::ctor();
    this->path_ = path;
    this->optional_ = optional;
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::SubstitutionExpression::path()
{
    return path_;
}

bool com::typesafe::config::impl::SubstitutionExpression::optional()
{
    return optional_;
}

com::typesafe::config::impl::SubstitutionExpression* com::typesafe::config::impl::SubstitutionExpression::changePath(Path* newPath)
{
    if(newPath == path_)
        return this;
    else
        return new SubstitutionExpression(newPath, optional_);
}

java::lang::String* com::typesafe::config::impl::SubstitutionExpression::toString()
{
    return ::java::lang::StringBuilder().append(u"${"_j)->append((optional_ ? u"?"_j : u""_j))
        ->append(npc(path_)->render())
        ->append(u"}"_j)->toString();
}

bool com::typesafe::config::impl::SubstitutionExpression::equals(::java::lang::Object* other)
{
    if(dynamic_cast< SubstitutionExpression* >(other) != nullptr) {
        auto otherExp = java_cast< SubstitutionExpression* >(other);
        return npc(npc(otherExp)->path_)->equals(this->path_) && npc(otherExp)->optional_ == this->optional_;
    } else {
        return false;
    }
}

int32_t com::typesafe::config::impl::SubstitutionExpression::hashCode()
{
    auto h = int32_t(41) * (int32_t(41) + npc(path_)->hashCode());
    h = int32_t(41) * (h + (optional_ ? int32_t(1) : int32_t(0)));
    return h;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::SubstitutionExpression::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.SubstitutionExpression", 47);
    return c;
}

java::lang::Class* com::typesafe::config::impl::SubstitutionExpression::getClass0()
{
    return class_();
}

