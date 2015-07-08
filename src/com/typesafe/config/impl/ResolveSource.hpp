// Generated from /config/src/main/java/com/typesafe/config/impl/ResolveSource.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class com::typesafe::config::impl::ResolveSource final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    AbstractConfigObject* root {  };
    ResolveSource_Node* pathFromRoot {  };
protected:
    void ctor(AbstractConfigObject* root, ResolveSource_Node* pathFromRoot);
    void ctor(AbstractConfigObject* root);

private:
    AbstractConfigObject* rootMustBeObj(Container* value);
    static ResolveSource_ResultWithPath* findInObject(AbstractConfigObject* obj, ResolveContext* context, Path* path) /* throws(NotPossibleToResolve) */;
    static ResolveSource_ValueWithPath* findInObject(AbstractConfigObject* obj, Path* path);
    static ResolveSource_ValueWithPath* findInObject(AbstractConfigObject* obj, Path* path, ResolveSource_Node* parents);

public: /* package */
    ResolveSource_ResultWithPath* lookupSubst(ResolveContext* context, SubstitutionExpression* subst, int32_t prefixLength) /* throws(NotPossibleToResolve) */;
    ResolveSource* pushParent(Container* parent);
    ResolveSource* resetParents();

private:
    static ResolveSource_Node* replace(ResolveSource_Node* list, Container* old, AbstractConfigValue* replacement);

public: /* package */
    ResolveSource* replaceCurrentParent(Container* old, Container* replacement);
    ResolveSource* replaceWithinCurrentParent(AbstractConfigValue* old, AbstractConfigValue* replacement);

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    ResolveSource(AbstractConfigObject* root, ResolveSource_Node* pathFromRoot);
    ResolveSource(AbstractConfigObject* root);
protected:
    ResolveSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ResolveSource_Node;
    friend class ResolveSource_ValueWithPath;
    friend class ResolveSource_ResultWithPath;
};
