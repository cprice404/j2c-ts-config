// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Collections_SynchronizedMap.hpp>
#include <java/util/SortedMap.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedSortedMap
    : public Collections_SynchronizedMap
    , public virtual SortedMap
{

public:
    typedef Collections_SynchronizedMap super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-8798146769416483793LL) };
    SortedMap* sm {  };

protected:
    void ctor(SortedMap* m);
    void ctor(SortedMap* m, ::java::lang::Object* mutex);

public:
    Comparator* comparator() override;
    ::java::lang::Object* firstKey() override;
    SortedMap* headMap(::java::lang::Object* toKey) override;
    ::java::lang::Object* lastKey() override;
    SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey) override;
    SortedMap* tailMap(::java::lang::Object* fromKey) override;

    // Generated

public: /* package */
    Collections_SynchronizedSortedMap(SortedMap* m);
    Collections_SynchronizedSortedMap(SortedMap* m, ::java::lang::Object* mutex);
protected:
    Collections_SynchronizedSortedMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void clear();
    virtual ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction);
    virtual ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction);
    virtual ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction);
    virtual bool containsKey(::java::lang::Object* key);
    virtual bool containsValue(::java::lang::Object* value);
    virtual bool equals(::java::lang::Object* o);
    virtual void forEach(::java::util::function::BiConsumer* action);
    virtual ::java::lang::Object* get(::java::lang::Object* key);
    virtual ::java::lang::Object* getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue);
    virtual int32_t hashCode();
    virtual bool isEmpty();
    virtual ::java::lang::Object* merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction);
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value);
    virtual void putAll(Map* m);
    virtual ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value);
    virtual ::java::lang::Object* remove(::java::lang::Object* key);
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);
    virtual ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value);
    virtual bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void replaceAll(::java::util::function::BiFunction* function);
    virtual int32_t size();
    Set* entrySet();
    Set* keySet();
    Collection* values();

private:
    virtual ::java::lang::Class* getClass0();
};
