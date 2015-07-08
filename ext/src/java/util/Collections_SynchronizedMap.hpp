// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedMap
    : public virtual ::java::lang::Object
    , public virtual Map
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    Set* entrySet_ {  };
    Set* keySet_ {  };
    Map* m {  };

public: /* package */
    ::java::lang::Object* mutex {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1978198479659022715LL) };
    Collection* values_ {  };

protected:
    void ctor(Map* m);
    void ctor(Map* m, ::java::lang::Object* mutex);

public:
    void clear() override;
    ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction) override;
    ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    bool equals(::java::lang::Object* o) override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    ::java::lang::Object* getOrDefault(::java::lang::Object* k, ::java::lang::Object* defaultValue) override;
    int32_t hashCode() override;
    bool isEmpty() override;
    Set* keySet() override;
    ::java::lang::Object* merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* map) override;
    ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    bool remove(::java::lang::Object* key, ::java::lang::Object* value) override;
    ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value) override;
    bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) override;
    void replaceAll(::java::util::function::BiFunction* function) override;
    int32_t size() override;
    ::java::lang::String* toString() override;
    Collection* values() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated

public: /* package */
    Collections_SynchronizedMap(Map* m);
    Collections_SynchronizedMap(Map* m, ::java::lang::Object* mutex);
protected:
    Collections_SynchronizedMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
