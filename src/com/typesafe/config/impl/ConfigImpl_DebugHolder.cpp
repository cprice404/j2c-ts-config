// Generated from /config/src/main/java/com/typesafe/config/impl/ConfigImpl.java
#include <com/typesafe/config/impl/ConfigImpl_DebugHolder.hpp>

#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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
com::typesafe::config::impl::ConfigImpl_DebugHolder::ConfigImpl_DebugHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

com::typesafe::config::impl::ConfigImpl_DebugHolder::ConfigImpl_DebugHolder()
    : ConfigImpl_DebugHolder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& com::typesafe::config::impl::ConfigImpl_DebugHolder::LOADS()
{
    clinit();
    return LOADS_;
}
java::lang::String* com::typesafe::config::impl::ConfigImpl_DebugHolder::LOADS_;

java::lang::String*& com::typesafe::config::impl::ConfigImpl_DebugHolder::SUBSTITUTIONS()
{
    clinit();
    return SUBSTITUTIONS_;
}
java::lang::String* com::typesafe::config::impl::ConfigImpl_DebugHolder::SUBSTITUTIONS_;

java::util::Map* com::typesafe::config::impl::ConfigImpl_DebugHolder::loadDiagnostics()
{
    clinit();
    ::java::util::Map* result = new ::java::util::HashMap();
    npc(result)->put(LOADS_, ::java::lang::Boolean::valueOf(false));
    npc(result)->put(SUBSTITUTIONS_, ::java::lang::Boolean::valueOf(false));
    auto s = ::java::lang::System::getProperty(u"config.trace"_j);
    if(s == nullptr) {
        return result;
    } else {
        auto keys = npc(s)->split(u","_j);
        for(auto k : *npc(keys)) {
            if(npc(k)->equals(LOADS_)) {
                npc(result)->put(LOADS_, ::java::lang::Boolean::valueOf(true));
            } else if(npc(k)->equals(SUBSTITUTIONS_)) {
                npc(result)->put(SUBSTITUTIONS_, ::java::lang::Boolean::valueOf(true));
            } else {
                npc(::java::lang::System::err())->println(::java::lang::StringBuilder().append(u"config.trace property contains unknown trace topic '"_j)->append(k)
                    ->append(u"'"_j)->toString());
            }
        }
        return result;
    }
}

java::util::Map*& com::typesafe::config::impl::ConfigImpl_DebugHolder::diagnostics()
{
    clinit();
    return diagnostics_;
}
java::util::Map* com::typesafe::config::impl::ConfigImpl_DebugHolder::diagnostics_;

bool& com::typesafe::config::impl::ConfigImpl_DebugHolder::traceLoadsEnabled_()
{
    clinit();
    return traceLoadsEnabled__;
}
bool com::typesafe::config::impl::ConfigImpl_DebugHolder::traceLoadsEnabled__;

bool& com::typesafe::config::impl::ConfigImpl_DebugHolder::traceSubstitutionsEnabled_()
{
    clinit();
    return traceSubstitutionsEnabled__;
}
bool com::typesafe::config::impl::ConfigImpl_DebugHolder::traceSubstitutionsEnabled__;

bool com::typesafe::config::impl::ConfigImpl_DebugHolder::traceLoadsEnabled()
{
    clinit();
    return traceLoadsEnabled__;
}

bool com::typesafe::config::impl::ConfigImpl_DebugHolder::traceSubstitutionsEnabled()
{
    clinit();
    return traceSubstitutionsEnabled__;
}

extern java::lang::Class* class_(const char16_t* c, int n);

java::lang::Class* com::typesafe::config::impl::ConfigImpl_DebugHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.typesafe.config.impl.ConfigImpl.DebugHolder", 47);
    return c;
}

void com::typesafe::config::impl::ConfigImpl_DebugHolder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOADS_ = u"loads"_j;
        SUBSTITUTIONS_ = u"substitutions"_j;
        diagnostics_ = loadDiagnostics();
        traceLoadsEnabled__ = (npc(java_cast< ::java::lang::Boolean* >(npc(diagnostics_)->get(LOADS_))))->booleanValue();
        traceSubstitutionsEnabled__ = (npc(java_cast< ::java::lang::Boolean* >(npc(diagnostics_)->get(SUBSTITUTIONS_))))->booleanValue();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::typesafe::config::impl::ConfigImpl_DebugHolder::getClass0()
{
    return class_();
}

