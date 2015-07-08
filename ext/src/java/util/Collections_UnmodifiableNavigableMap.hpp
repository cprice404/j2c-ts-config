// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/Collections_UnmodifiableSortedMap.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableNavigableMap
    : public Collections_UnmodifiableSortedMap
    , public virtual NavigableMap
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_UnmodifiableSortedMap super;

private:
    static Collections_UnmodifiableNavigableMap_EmptyNavigableMap* EMPTY_NAVIGABLE_MAP_;
    NavigableMap* nm {  };
    static constexpr int64_t serialVersionUID { int64_t(-4858195264774772197LL) };

protected:
    void ctor(NavigableMap* m);

public:
    Map_Entry* ceilingEntry(::java::lang::Object* key) override;
    ::java::lang::Object* ceilingKey(::java::lang::Object* key) override;
    NavigableSet* descendingKeySet() override;
    NavigableMap* descendingMap() override;
    Map_Entry* firstEntry() override;
    Map_Entry* floorEntry(::java::lang::Object* key) override;
    ::java::lang::Object* floorKey(::java::lang::Object* key) override;
    NavigableMap* headMap(::java::lang::Object* toKey, bool inclusive) override;
    Map_Entry* higherEntry(::java::lang::Object* key) override;
    ::java::lang::Object* higherKey(::java::lang::Object* key) override;
    Map_Entry* lastEntry() override;
    Map_Entry* lowerEntry(::java::lang::Object* key) override;
    ::java::lang::Object* lowerKey(::java::lang::Object* key) override;
    NavigableSet* navigableKeySet() override;
    Map_Entry* pollFirstEntry() override;
    Map_Entry* pollLastEntry() override;
    NavigableMap* subMap(::java::lang::Object* fromKey, bool fromInclusive, ::java::lang::Object* toKey, bool toInclusive) override;
    NavigableMap* tailMap(::java::lang::Object* fromKey, bool inclusive) override;

    // Generated

public: /* package */
    Collections_UnmodifiableNavigableMap(NavigableMap* m);
protected:
    Collections_UnmodifiableNavigableMap(const ::default_init_tag&);


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
    virtual Comparator* comparator();
    Set* entrySet();
    virtual ::java::lang::Object* firstKey();
    virtual SortedMap* headMap(::java::lang::Object* toKey);
    Set* keySet();
    virtual ::java::lang::Object* lastKey();
    virtual SortedMap* subMap(::java::lang::Object* fromKey, ::java::lang::Object* toKey);
    virtual SortedMap* tailMap(::java::lang::Object* fromKey);
    Collection* values();

private:
    static Collections_UnmodifiableNavigableMap_EmptyNavigableMap*& EMPTY_NAVIGABLE_MAP();
    virtual ::java::lang::Class* getClass0();
};
