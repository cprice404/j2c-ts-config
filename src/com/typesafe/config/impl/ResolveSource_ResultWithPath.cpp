// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java
#include <com/typesafe/config/impl/ResolveSource_ResultWithPath.hpp>

#include <com/typesafe/config/impl/ResolveResult.hpp>
#include <com/typesafe/config/impl/ResolveSource_Node.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

com::typesafe::config::impl::ResolveSource_ResultWithPath::ResolveSource_ResultWithPath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ResolveSource_ResultWithPath::ResolveSource_ResultWithPath(ResolveResult* result, ResolveSource_Node* pathFromRoot) 
    : ResolveSource_ResultWithPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(result,pathFromRoot);
}

void com::typesafe::config::impl::ResolveSource_ResultWithPath::ctor(ResolveResult* result, ResolveSource_Node* pathFromRoot)
{
    super::ctor();
    this->result = result;
    this->pathFromRoot = pathFromRoot;
}

java::lang::String* com::typesafe::config::impl::ResolveSource_ResultWithPath::toString()
{
    return ::java::lang::StringBuilder().append(u"ResultWithPath(result="_j)->append(static_cast< ::java::lang::Object* >(result))
        ->append(u", pathFromRoot="_j)
        ->append(static_cast< ::java::lang::Object* >(pathFromRoot))
        ->append(u")"_j)->toString();
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ResolveSource_ResultWithPath::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ResolveSource.ResultWithPath", 53);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ResolveSource_ResultWithPath::getClass0()
{
    return class_();
}

