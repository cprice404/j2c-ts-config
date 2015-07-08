// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Map.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace util {
typedef ::SubArray< ::java::util::Map_Entry, ::java::lang::ObjectArray > Map_EntryArray;
typedef ::SubArray< ::java::util::HashMap_Node, ::java::lang::ObjectArray, Map_EntryArray > HashMap_NodeArray;
}  // namespace util
}  // namespace java

struct default_init_tag;

class java::util::HashMap
    : public AbstractMap
    , public virtual Map
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractMap super;

public: /* package */
    static constexpr int32_t DEFAULT_INITIAL_CAPACITY { int32_t(16) };
    static constexpr float DEFAULT_LOAD_FACTOR { 0.75f };
    static constexpr int32_t MAXIMUM_CAPACITY { int32_t(1073741824) };
    static constexpr int32_t MIN_TREEIFY_CAPACITY { int32_t(64) };
    static constexpr int32_t TREEIFY_THRESHOLD { int32_t(8) };
    static constexpr int32_t UNTREEIFY_THRESHOLD { int32_t(6) };
    Set* entrySet_ {  };
    float loadFactor_ {  };
    int32_t modCount {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(362498820763181265LL) };

public: /* package */
    int32_t size_ {  };
    HashMap_NodeArray* table {  };
    int32_t threshold {  };

protected:
    void ctor();
    void ctor(int32_t initialCapacity);
    void ctor(Map* m);
    void ctor(int32_t initialCapacity, float loadFactor);

public: /* package */
    virtual void afterNodeAccess(HashMap_Node* p);
    virtual void afterNodeInsertion(bool evict);
    virtual void afterNodeRemoval(HashMap_Node* p);
    int32_t capacity();

public:
    void clear() override;
    ::java::lang::Object* clone() override;

public: /* package */
    static ::java::lang::Class* comparableClassFor(::java::lang::Object* x);
    static int32_t compareComparables(::java::lang::Class* kc, ::java::lang::Object* k, ::java::lang::Object* x);

public:
    ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction) override;
    ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;

public: /* package */
    HashMap_Node* getNode(int32_t hash, ::java::lang::Object* key);

public:
    ::java::lang::Object* getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue) override;

public: /* package */
    static int32_t hash(::java::lang::Object* key);
    virtual void internalWriteEntries(::java::io::ObjectOutputStream* s);

public:
    bool isEmpty() override;
    Set* keySet() override;

public: /* package */
    float loadFactor();

public:
    ::java::lang::Object* merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction) override;

public: /* package */
    virtual HashMap_Node* newNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next);
    virtual HashMap_TreeNode* newTreeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next);

public:
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* m) override;
    ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value) override;

public: /* package */
    void putMapEntries(Map* m, bool evict);
    ::java::lang::Object* putVal(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, bool onlyIfAbsent, bool evict);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    virtual void reinitialize();

public:
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    bool remove(::java::lang::Object* key, ::java::lang::Object* value) override;

public: /* package */
    HashMap_Node* removeNode(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, bool matchValue, bool movable);

public:
    ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value) override;
    bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) override;
    void replaceAll(::java::util::function::BiFunction* function) override;

public: /* package */
    virtual HashMap_Node* replacementNode(HashMap_Node* p, HashMap_Node* next);
    virtual HashMap_TreeNode* replacementTreeNode(HashMap_Node* p, HashMap_Node* next);
    HashMap_NodeArray* resize();

public:
    int32_t size() override;

public: /* package */
    static int32_t tableSizeFor(int32_t cap);
    void treeifyBin(HashMap_NodeArray* tab, int32_t hash);

public:
    Collection* values() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    HashMap();
    HashMap(int32_t initialCapacity);
    HashMap(Map* m);
    HashMap(int32_t initialCapacity, float loadFactor);
protected:
    HashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();

private:
    virtual ::java::lang::Class* getClass0();
};
