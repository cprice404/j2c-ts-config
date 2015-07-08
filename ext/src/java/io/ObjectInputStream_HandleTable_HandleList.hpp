// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ObjectInputStream_HandleTable_HandleList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int32_tArray* list {  };
    int32_t size_ {  };

protected:
    void ctor();

public:
    virtual void add(int32_t handle);
    virtual int32_t get(int32_t index);
    virtual int32_t size();

    // Generated
    ObjectInputStream_HandleTable_HandleList();
protected:
    ObjectInputStream_HandleTable_HandleList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
