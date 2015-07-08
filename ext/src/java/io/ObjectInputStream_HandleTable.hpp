// Generated from /home/cprice/software/java/jdk1.8.0_45/jre/lib/rt.jar

#pragma once

#include <fwd-config.hpp>
#include <java/io/fwd-config.hpp>
#include <java/lang/fwd-config.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java {
namespace io {
typedef ::SubArray< ::java::io::ObjectInputStream_HandleTable_HandleList, ::java::lang::ObjectArray > ObjectInputStream_HandleTable_HandleListArray;
}  // namespace io
}  // namespace java

struct default_init_tag;

class java::io::ObjectInputStream_HandleTable
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int8_t STATUS_EXCEPTION { int8_t(3) };
    static constexpr int8_t STATUS_OK { int8_t(1) };
    static constexpr int8_t STATUS_UNKNOWN { int8_t(2) };

public: /* package */
    ObjectInputStream_HandleTable_HandleListArray* deps {  };
    ::java::lang::ObjectArray* entries {  };
    int32_t lowDep {  };
    int32_t size_ {  };
    ::int8_tArray* status {  };

protected:
    void ctor(int32_t initialCapacity);

public: /* package */
    virtual int32_t assign(::java::lang::Object* obj);
    virtual void clear();
    virtual void finish(int32_t handle);
    /*void grow(); (private) */
    virtual ::java::lang::ClassNotFoundException* lookupException(int32_t handle);
    virtual ::java::lang::Object* lookupObject(int32_t handle);
    virtual void markDependency(int32_t dependent, int32_t target);
    virtual void markException(int32_t handle, ::java::lang::ClassNotFoundException* ex);
    virtual void setObject(int32_t handle, ::java::lang::Object* obj);
    virtual int32_t size();

    // Generated
    ObjectInputStream_HandleTable(int32_t initialCapacity);
protected:
    ObjectInputStream_HandleTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
