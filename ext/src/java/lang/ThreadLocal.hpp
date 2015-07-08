// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/util/concurrent/atomic/fwd-config.hpp>
#include <java/util/function/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ThreadLocal
    : public virtual Object
{

public:
    typedef Object super;

private:
    static constexpr int32_t HASH_INCREMENT { int32_t(1640531527) };
    static ::java::util::concurrent::atomic::AtomicInteger* nextHashCode__;
    int32_t threadLocalHashCode {  };

protected:
    void ctor();

public: /* package */
    virtual Object* childValue(Object* parentValue);
    static ThreadLocal_ThreadLocalMap* createInheritedMap(ThreadLocal_ThreadLocalMap* parentMap);
    virtual void createMap(Thread* t, Object* firstValue);

public:
    virtual Object* get();

public: /* package */
    virtual ThreadLocal_ThreadLocalMap* getMap(Thread* t);

public: /* protected */
    virtual Object* initialValue();
    /*static int32_t nextHashCode(); (private) */

public:
    virtual void remove();
    virtual void set(Object* value);
    /*Object* setInitialValue(); (private) */
    static ThreadLocal* withInitial(::java::util::function::Supplier* supplier);

    // Generated
    ThreadLocal();
protected:
    ThreadLocal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::concurrent::atomic::AtomicInteger*& nextHashCode_();
    virtual ::java::lang::Class* getClass0();
};
