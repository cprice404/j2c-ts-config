// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectOutputStream_HandleTable
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    float loadFactor {  };
    ::int32_tArray* next {  };
    ::java::lang::ObjectArray* objs {  };
    int32_t size_ {  };
    ::int32_tArray* spine {  };
    int32_t threshold {  };

protected:
    void ctor(int32_t initialCapacity, float loadFactor);

public: /* package */
    virtual int32_t assign(::java::lang::Object* obj);
    virtual void clear();
    /*void growEntries(); (private) */
    /*void growSpine(); (private) */
    /*int32_t hash(::java::lang::Object* obj); (private) */
    /*void insert(::java::lang::Object* obj, int32_t handle); (private) */
    virtual int32_t lookup(::java::lang::Object* obj);
    virtual int32_t size();

    // Generated
    ObjectOutputStream_HandleTable(int32_t initialCapacity, float loadFactor);
protected:
    ObjectOutputStream_HandleTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
