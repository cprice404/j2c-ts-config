// Generated from /config/src/main/java/com/typesafe/config/impl/PathBuilder.java
#include <com/typesafe/config/impl/PathBuilder.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Stack.hpp>

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
com::typesafe::config::impl::PathBuilder::PathBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::PathBuilder::PathBuilder() 
    : PathBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::impl::PathBuilder::ctor()
{
    super::ctor();
    keys = new ::java::util::Stack();
}

void com::typesafe::config::impl::PathBuilder::checkCanAppend()
{
    if(result_ != nullptr)
        throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Adding to PathBuilder after getting result"_j);

}

void com::typesafe::config::impl::PathBuilder::appendKey(::java::lang::String* key)
{
    checkCanAppend();
    npc(keys)->push(key);
}

void com::typesafe::config::impl::PathBuilder::appendPath(Path* path)
{
    checkCanAppend();
    auto first = npc(path)->first();
    auto remainder = npc(path)->remainder();
    while (true) {
        npc(keys)->push(first);
        if(remainder != nullptr) {
            first = npc(remainder)->first();
            remainder = npc(remainder)->remainder();
        } else {
            break;
        }
    }
}

com::typesafe::config::impl::Path* com::typesafe::config::impl::PathBuilder::result()
{
    if(result_ == nullptr) {
        Path* remainder = nullptr;
        while (!npc(keys)->isEmpty()) {
            auto key = java_cast< ::java::lang::String* >(npc(keys)->pop());
            remainder = new Path(key, remainder);
        }
        result_ = remainder;
    }
    return result_;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::PathBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.PathBuilder", 36);
    return c;
}

java::lang::Class* com::typesafe::config::impl::PathBuilder::getClass0()
{
    return class_();
}

