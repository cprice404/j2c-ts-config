// Generated from /config/src/main/java/com/typesafe/config/ConfigUtil.java
#include <com/typesafe/config/ConfigUtil.hpp>

#include <com/typesafe/config/impl/ConfigImplUtil.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
}  // namespace io

namespace lang {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
}  // namespace lang
}  // namespace java

com::typesafe::config::ConfigUtil::ConfigUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::ConfigUtil::ConfigUtil() 
    : ConfigUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::typesafe::config::ConfigUtil::ctor()
{
    super::ctor();
}

java::lang::String* com::typesafe::config::ConfigUtil::quoteString(::java::lang::String* s)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImplUtil::renderJsonString(s);
}

java::lang::String* com::typesafe::config::ConfigUtil::joinPath(::java::lang::StringArray*/*...*/ elements)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImplUtil::joinPath(elements);
}

java::lang::String* com::typesafe::config::ConfigUtil::joinPath(::java::util::List* elements)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImplUtil::joinPath(elements);
}

java::util::List* com::typesafe::config::ConfigUtil::splitPath(::java::lang::String* path)
{
    clinit();
    return ::com::typesafe::config::impl::ConfigImplUtil::splitPath(path);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::ConfigUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.ConfigUtil", 30);
    return c;
}

java::lang::Class* com::typesafe::config::ConfigUtil::getClass0()
{
    return class_();
}

