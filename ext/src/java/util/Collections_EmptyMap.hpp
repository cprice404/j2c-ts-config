// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_EmptyMap
    : public AbstractMap
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractMap super;

private:
    static constexpr int64_t serialVersionUID { int64_t(6428348081105594320LL) };

    /*void ctor(); (private) */

public:
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
    ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value) override;
    /*::java::lang::Object* readResolve(); (private) */
    bool remove(::java::lang::Object* key, ::java::lang::Object* value) override;
    ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value) override;
    bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) override;
    void replaceAll(::java::util::function::BiFunction* function) override;
    int32_t size() override;
    Collection* values() override;

    // Generated
    Collections_EmptyMap();
protected:
    Collections_EmptyMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::Object* remove(::java::lang::Object* key);

private:
    virtual ::java::lang::Class* getClass0();
};
