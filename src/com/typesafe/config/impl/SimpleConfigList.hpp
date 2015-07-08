// Generated from /config/src/main/java/com/typesafe/config/impl/SimpleConfigList.java

#pragma once

#include <fwd-config.hpp>
#include <com/typesafe/config/fwd-config.hpp>
#include <com/typesafe/config/impl/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <com/typesafe/config/impl/AbstractConfigValue.hpp>
#include <com/typesafe/config/ConfigList.hpp>
#include <com/typesafe/config/impl/Container.hpp>
#include <java/io/Serializable.hpp>
#include <com/typesafe/config/ConfigValue.hpp>
#include <com/typesafe/config/impl/SimpleConfig.hpp>
#include <com/typesafe/config/impl/SimpleConfigOrigin.hpp>
#include <java/util/List.hpp>

struct default_init_tag;

class com::typesafe::config::impl::SimpleConfigList final
    : public AbstractConfigValue
    , public ::com::typesafe::config::ConfigList
    , public Container
    , public ::java::io::Serializable
{

public:
    typedef AbstractConfigValue super;

private:
    static constexpr int64_t serialVersionUID { int64_t(2LL) };
    ::java::util::List* value {  };
    bool resolved {  };
protected:
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value);
    void ctor(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value, ResolveStatus* status);

public:
    ::com::typesafe::config::ConfigValueType* valueType() override;
    ::java::util::List* unwrapped() override;

public: /* package */
    ResolveStatus* resolveStatus() override;

public:
    SimpleConfigList* replaceChild(AbstractConfigValue* child, AbstractConfigValue* replacement) override;
    bool hasDescendant(AbstractConfigValue* descendant) override;

private:
    SimpleConfigList* modify(AbstractConfigValue_NoExceptionsModifier* modifier, ResolveStatus* newResolveStatus);
    SimpleConfigList* modifyMayThrow(AbstractConfigValue_Modifier* modifier, ResolveStatus* newResolveStatus) /* throws(Exception) */;

public: /* package */
    ResolveResult* resolveSubstitutions(ResolveContext* context, ResolveSource* source) /* throws(NotPossibleToResolve) */ override;
    SimpleConfigList* relativized(Path* prefix) override;

public: /* protected */
    bool canEqual(::java::lang::Object* other) override;

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

public: /* protected */
    void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::com::typesafe::config::ConfigRenderOptions* options) override;

public:
    bool contains(::java::lang::Object* o) override;
    bool containsAll(::java::util::Collection* c) override;
    AbstractConfigValue* get(int32_t index) override;
    int32_t indexOf(::java::lang::Object* o) override;
    bool isEmpty() override;
    ::java::util::Iterator* iterator() override;
    int32_t lastIndexOf(::java::lang::Object* o) override;

private:
    static ::java::util::ListIterator* wrapListIterator(::java::util::ListIterator* i);

public:
    ::java::util::ListIterator* listIterator() override;
    ::java::util::ListIterator* listIterator(int32_t index) override;
    int32_t size() override;
    ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <T> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

private:
    static ::java::lang::UnsupportedOperationException* weAreImmutable(::java::lang::String* method);

public:
    bool add(::com::typesafe::config::ConfigValue* e);
    void add(int32_t index, ::com::typesafe::config::ConfigValue* element);
    bool addAll(::java::util::Collection* c) override;
    bool addAll(int32_t index, ::java::util::Collection* c) override;
    void clear() override;
    bool remove(::java::lang::Object* o) override;
    ::com::typesafe::config::ConfigValue* remove(int32_t index) override;
    bool removeAll(::java::util::Collection* c) override;
    bool retainAll(::java::util::Collection* c) override;
    ::com::typesafe::config::ConfigValue* set(int32_t index, ::com::typesafe::config::ConfigValue* element);

public: /* protected */
    SimpleConfigList* newCopy(::com::typesafe::config::ConfigOrigin* newOrigin) override;

public: /* package */
    SimpleConfigList* concatenate(SimpleConfigList* other);

private:
    ::java::lang::Object* writeReplace() /* throws(ObjectStreamException) */;

public:
    SimpleConfigList* withOrigin(::com::typesafe::config::ConfigOrigin* origin) override;

    // Generated

public: /* package */
    SimpleConfigList(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value);
    SimpleConfigList(::com::typesafe::config::ConfigOrigin* origin, ::java::util::List* value, ResolveStatus* status);
protected:
    SimpleConfigList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual SimpleConfig* atKey(::java::lang::String* key);
    virtual SimpleConfig* atPath(::java::lang::String* path);
    virtual SimpleConfigOrigin* origin();
    virtual ::java::lang::String* render();
    virtual ::java::lang::String* render(::com::typesafe::config::ConfigRenderOptions* options);
    AbstractConfigValue* withFallback(::com::typesafe::config::ConfigMergeable* other);
    bool add(::java::lang::Object* e) override;
    virtual void add(int32_t index, ::java::lang::Object* element) override;
    virtual ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;

public: /* package */
    virtual SimpleConfig* atKey(::com::typesafe::config::ConfigOrigin* origin, ::java::lang::String* key);
    virtual SimpleConfig* atPath(::com::typesafe::config::ConfigOrigin* origin, Path* path);

public: /* protected */
    virtual void render(::java::lang::StringBuilder* sb, int32_t indent, bool atRoot, ::java::lang::String* atKey, ::com::typesafe::config::ConfigRenderOptions* options);

private:
    virtual ::java::lang::Class* getClass0();
    friend class SimpleConfigList_ResolveModifier;
    friend class SimpleConfigList_relativized_1;
    friend class SimpleConfigList_iterator_2;
    friend class SimpleConfigList_wrapListIterator_3;
};
