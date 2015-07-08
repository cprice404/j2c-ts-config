// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Map.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::util::IdentityHashMap
    : public AbstractMap
    , public virtual Map
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
{

public:
    typedef AbstractMap super;

private:
    static constexpr int32_t DEFAULT_CAPACITY { int32_t(32) };
    static constexpr int32_t MAXIMUM_CAPACITY { int32_t(536870912) };
    static constexpr int32_t MINIMUM_CAPACITY { int32_t(4) };
    static ::java::lang::Object* NULL_KEY_;
    Set* entrySet_ {  };

public: /* package */
    int32_t modCount {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(8188218128353913216LL) };

public: /* package */
    int32_t size_ {  };
    ::java::lang::ObjectArray* table {  };

protected:
    void ctor();
    void ctor(int32_t expectedMaxSize);
    void ctor(Map* m);
    /*static int32_t capacity(int32_t expectedMaxSize); (private) */

public:
    void clear() override;
    ::java::lang::Object* clone() override;
    /*void closeDeletion(int32_t d); (private) */
    bool containsKey(::java::lang::Object* key) override;
    /*bool containsMapping(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    bool containsValue(::java::lang::Object* value) override;
    Set* entrySet() override;
    bool equals(::java::lang::Object* o) override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    /*static int32_t hash(::java::lang::Object* x, int32_t length); (private) */
    int32_t hashCode() override;
    /*void init_(int32_t initCapacity); (private) */
    bool isEmpty() override;
    Set* keySet() override;
    /*static ::java::lang::Object* maskNull(::java::lang::Object* key); (private) */
    /*static int32_t nextKeyIndex(int32_t i, int32_t len); (private) */
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* m) override;
    /*void putForCreate(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    /*bool removeMapping(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    void replaceAll(::java::util::function::BiFunction* function) override;
    /*bool resize(int32_t newCapacity); (private) */
    int32_t size() override;

public: /* package */
    static ::java::lang::Object* unmaskNull(::java::lang::Object* key);

public:
    Collection* values() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    IdentityHashMap();
    IdentityHashMap(int32_t expectedMaxSize);
    IdentityHashMap(Map* m);
protected:
    IdentityHashMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

public: /* package */
    static ::java::lang::Object*& NULL_KEY();

private:
    virtual ::java::lang::Class* getClass0();
};
