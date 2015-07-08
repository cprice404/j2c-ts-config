// Generated from /config/src/main/java/com/typesafe/config/ConfigException.java
#include <com/typesafe/config/ConfigException.hpp>

#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <java/io/IOException.hpp>
#include <java/io/ObjectInputStream.hpp>
#include <java/io/ObjectOutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/IllegalAccessException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NoSuchFieldException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/SecurityException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/reflect/Field.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}
com::typesafe::config::ConfigException::ConfigException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigException::ConfigException(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message,cause);
}

com::typesafe::config::ConfigException::ConfigException(ConfigOrigin* origin, ::java::lang::String* message) 
    : ConfigException(*static_cast< ::default_init_tag* >(0))
{
    ctor(origin,message);
}

com::typesafe::config::ConfigException::ConfigException(::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConfigException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

com::typesafe::config::ConfigException::ConfigException(::java::lang::String* message) 
    : ConfigException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

constexpr int64_t com::typesafe::config::ConfigException::serialVersionUID;

void com::typesafe::config::ConfigException::ctor(ConfigOrigin* origin, ::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(::java::lang::StringBuilder().append(npc(origin)->description())->append(u": "_j)
        ->append(message)->toString(), cause);
    this->origin_ = origin;
}

void com::typesafe::config::ConfigException::ctor(ConfigOrigin* origin, ::java::lang::String* message)
{
    ctor(::java::lang::StringBuilder().append(npc(origin)->description())->append(u": "_j)
        ->append(message)->toString(), static_cast< ::java::lang::Throwable* >(nullptr));
}

void com::typesafe::config::ConfigException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
    this->origin_ = nullptr;
}

void com::typesafe::config::ConfigException::ctor(::java::lang::String* message)
{
    ctor(message, static_cast< ::java::lang::Throwable* >(nullptr));
}

com::typesafe::config::ConfigOrigin* com::typesafe::config::ConfigException::origin()
{
    return origin_;
}

void com::typesafe::config::ConfigException::writeObject(::java::io::ObjectOutputStream* out) /* throws(IOException) */
{
    npc(out)->defaultWriteObject();
    ::com::typesafe::config::impl::ConfigImplUtil::writeOrigin(out, origin_);
}

void com::typesafe::config::ConfigException::readObject(::java::io::ObjectInputStream* in) /* throws(IOException, ClassNotFoundException) */
{
    npc(in)->defaultReadObject();
    auto origin = ::com::typesafe::config::impl::ConfigImplUtil::readOrigin(in);
    ::java::lang::reflect::Field* f;
    try {
        f = npc(ConfigException::class_())->getDeclaredField(u"origin"_j);
    } catch (::java::lang::NoSuchFieldException* e) {
        throw new ::java::io::IOException(u"ConfigException has no origin field?"_j, e);
    } catch (::java::lang::SecurityException* e) {
        throw new ::java::io::IOException(u"unable to fill out origin field in ConfigException"_j, e);
    }
    npc(f)->setAccessible(true);
    try {
        npc(f)->set(this, origin);
    } catch (::java::lang::IllegalArgumentException* e) {
        throw new ::java::io::IOException(u"unable to set origin field"_j, e);
    } catch (::java::lang::IllegalAccessException* e) {
        throw new ::java::io::IOException(u"unable to set origin field"_j, e);
    }
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigException", 35);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigException::getClass0()
{
    return class_();
}

