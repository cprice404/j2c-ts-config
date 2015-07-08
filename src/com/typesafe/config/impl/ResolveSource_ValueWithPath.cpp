// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java
#include <com/typesafe/config/impl/ResolveSource_ValueWithPath.hpp>

#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/impl/ResolveSource_Node.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::impl::ResolveSource_ValueWithPath::ResolveSource_ValueWithPath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveSource_ValueWithPath::ResolveSource_ValueWithPath(AbstractConfigValue* value, ResolveSource_Node* pathFromRoot) 
    : ResolveSource_ValueWithPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,pathFromRoot);
}

void com::typesafe::config::impl::ResolveSource_ValueWithPath::ctor(AbstractConfigValue* value, ResolveSource_Node* pathFromRoot)
{
    super::ctor();
    this->value = value;
    this->pathFromRoot = pathFromRoot;
}

java::lang::String* com::typesafe::config::impl::ResolveSource_ValueWithPath::toString()
{
    return ::java::lang::StringBuilder().append(u"ValueWithPath(value="_j)->append(static_cast< ::java::lang::Object* >(value))
        ->append(u", pathFromRoot="_j)
        ->append(static_cast< ::java::lang::Object* >(pathFromRoot))
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveSource_ValueWithPath::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveSource.ValueWithPath", 52);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveSource_ValueWithPath::getClass0()
{
    return class_();
}

