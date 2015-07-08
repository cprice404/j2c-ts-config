// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigNodeRoot.java
#include <com/typesafe/config/impl/ConfigNodeRoot.hpp>

#include <com/typesafe/config/ConfigException_BugOrBroken.hpp>
#include <com/typesafe/config/ConfigException_WrongType.hpp>
#include <com/typesafe/config/ConfigOrigin.hpp>
#include <com/typesafe/config/impl/AbstractConfigNode.hpp>
#include <com/typesafe/config/impl/AbstractConfigNodeValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeArray_.hpp>
#include <com/typesafe/config/impl/ConfigNodeComplexValue.hpp>
#include <com/typesafe/config/impl/ConfigNodeObject.hpp>
#include <com/typesafe/config/impl/Path.hpp>
#include <com/typesafe/config/impl/PathParser.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
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
com::typesafe::config::impl::ConfigNodeRoot::ConfigNodeRoot(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigNodeRoot::ConfigNodeRoot(::java::util::Collection* children, ::com::typesafe::config::ConfigOrigin* origin) 
    : ConfigNodeRoot(*static_cast< ::default_init_tag* >(0))
{
    ctor(children,origin);
}

void com::typesafe::config::impl::ConfigNodeRoot::ctor(::java::util::Collection* children, ::com::typesafe::config::ConfigOrigin* origin)
{
    super::ctor(children);
    this->origin = origin;
}

com::typesafe::config::impl::ConfigNodeRoot* com::typesafe::config::impl::ConfigNodeRoot::newNode(::java::util::Collection* nodes)
{
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"Tried to indent the root object"_j);
}

com::typesafe::config::impl::ConfigNodeComplexValue* com::typesafe::config::impl::ConfigNodeRoot::value()
{
    for (auto _i = npc(children_)->iterator(); _i->hasNext(); ) {
        AbstractConfigNode* node = java_cast< AbstractConfigNode* >(_i->next());
        {
            if(dynamic_cast< ConfigNodeComplexValue* >(node) != nullptr) {
                return java_cast< ConfigNodeComplexValue* >(node);
            }
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"ConfigNodeRoot did not contain a value"_j);
}

com::typesafe::config::impl::ConfigNodeRoot* com::typesafe::config::impl::ConfigNodeRoot::setValue(::java::lang::String* desiredPath, AbstractConfigNodeValue* value, ::com::typesafe::config::ConfigSyntax* flavor)
{
    auto childrenCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children_));
    for (auto i = int32_t(0); i < npc(childrenCopy)->size(); i++) {
        auto node = java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i));
        if(dynamic_cast< ConfigNodeComplexValue* >(node) != nullptr) {
            if(dynamic_cast< ConfigNodeArray_* >(node) != nullptr) {
                throw new ::com::typesafe::config::ConfigException_WrongType(origin, u"The ConfigDocument had an array at the root level, and values cannot be modified inside an array."_j);
            } else if(dynamic_cast< ConfigNodeObject* >(node) != nullptr) {
                if(value == nullptr) {
                    npc(childrenCopy)->set(i, npc((java_cast< ConfigNodeObject* >(node)))->removeValueOnPath(desiredPath, flavor));
                } else {
                    npc(childrenCopy)->set(i, npc((java_cast< ConfigNodeObject* >(node)))->setValueOnPath(desiredPath, value, flavor));
                }
                return new ConfigNodeRoot(childrenCopy, origin);
            }
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"ConfigNodeRoot did not contain a value"_j);
}

bool com::typesafe::config::impl::ConfigNodeRoot::hasValue(::java::lang::String* desiredPath)
{
    auto path = PathParser::parsePath(desiredPath);
    auto childrenCopy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children_));
    for (auto i = int32_t(0); i < npc(childrenCopy)->size(); i++) {
        auto node = java_cast< AbstractConfigNode* >(npc(childrenCopy)->get(i));
        if(dynamic_cast< ConfigNodeComplexValue* >(node) != nullptr) {
            if(dynamic_cast< ConfigNodeArray_* >(node) != nullptr) {
                throw new ::com::typesafe::config::ConfigException_WrongType(origin, u"The ConfigDocument had an array at the root level, and values cannot be modified inside an array."_j);
            } else if(dynamic_cast< ConfigNodeObject* >(node) != nullptr) {
                return npc((java_cast< ConfigNodeObject* >(node)))->hasValue(path);
            }
        }
    }
    throw new ::com::typesafe::config::ConfigException_BugOrBroken(u"ConfigNodeRoot did not contain a value"_j);
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigNodeRoot::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigNodeRoot", 39);
    return c;
}

java::lang::Class* com::typesafe::config::impl::ConfigNodeRoot::getClass0()
{
    return class_();
}

