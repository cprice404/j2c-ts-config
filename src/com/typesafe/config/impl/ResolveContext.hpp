// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveContext.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ResolveContext final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ResolveMemos* memos {  };
    ::com::typesafe::config::ConfigResolveOptions* options_ {  };
    Path* restrictToChild_ {  };
    ::java::util::List* resolveStack {  };
    ::java::util::Set* cycleMarkers {  };
protected:
    void ctor(ResolveMemos* memos, ::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild, ::java::util::List* resolveStack, ::java::util::Set* cycleMarkers);

private:
    static ::java::util::Set* newCycleMarkers();
protected:
    void ctor(::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild);

public: /* package */
    ResolveContext* addCycleMarker(AbstractConfigValue* value);
    ResolveContext* removeCycleMarker(AbstractConfigValue* value);

private:
    ResolveContext* memoize(MemoKey* key, AbstractConfigValue* value);

public: /* package */
    ::com::typesafe::config::ConfigResolveOptions* options();
    bool isRestrictedToChild();
    Path* restrictToChild();
    ResolveContext* restrict(Path* restrictTo);
    ResolveContext* unrestricted();
    ::java::lang::String* traceString();

private:
    ResolveContext* pushTrace(AbstractConfigValue* value);

public: /* package */
    ResolveContext* popTrace();
    int32_t depth();
    ResolveResult* resolve(AbstractConfigValue* original, ResolveSource* source) /* throws(NotPossibleToResolve) */;

private:
    ResolveResult* realResolve(AbstractConfigValue* original, ResolveSource* source) /* throws(NotPossibleToResolve) */;

public: /* package */
    static AbstractConfigValue* resolve(AbstractConfigValue* value, AbstractConfigObject* root, ::com::typesafe::config::ConfigResolveOptions* options);

    // Generated
    ResolveContext(ResolveMemos* memos, ::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild, ::java::util::List* resolveStack, ::java::util::Set* cycleMarkers);
    ResolveContext(::com::typesafe::config::ConfigResolveOptions* options, Path* restrictToChild);
protected:
    ResolveContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
